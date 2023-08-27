from _LoadNumpys_ch4 import *
    # Already imported
    #   numpy
    #   os
    #   joblib
    #   pickle
import sklearn

import xgboost as xgb

from sklearn.metrics import roc_curve, auc

 
import matplotlib.pyplot as plt
from matplotlib.pylab import figure, plot, xlabel, ylabel, legend, ylim, show, title



# model = xgb.XGBClassifier(objective= 'binary:logistic', seed= 25)

model = xgb.XGBClassifier(objective= 'binary:logistic',
                            n_estimators= 15,
                            max_depth= 20,
                            seed= 20)
model = model.fit(X_train,y_train)


#   ─ y_est_train         ──|
#   ─ y_est_train_prob    ──|─ Training Predictions
                        

#   ─ y_est_test          ──|
#   ─ y_est_test_prob     ──|─ Test Predictions


#   ─ y_est_test          ──|
#   ─ y_est_train_prob    ──|─ Validation Predictions
                         

    # Prediction TRAIN data
y_est_train_prob = model.predict_proba(X_train)[:, 1]
y_est_train = model.predict(X_train)

    # Prediction VAL data
y_est_val_prob = model.predict_proba(X_val)[:, 1]
y_est_val = model.predict(X_val)


    

       # Optimal Theta
fpr, tpr, thresholds = roc_curve(y_val, y_est_val_prob)
optimal_idx = np.argmax(tpr - fpr)
optimal_threshold_prob = thresholds[optimal_idx]
AUC_val = auc(fpr, tpr)

y_est_test_prob = model.predict_proba(X_test)[:, 1]
# y_est_test_OptimThresh = y_est_test_prob

    # Prediction Test data Model
y_est_test_MODEL  = model.predict(X_test)
y_est_test_prob = model.predict_proba(X_test)[:, 1]
    # Prediction Test data Optimal Threshold
y_est_test = list(np.zeros(len(y_test)))
y_est_test = np.array([1 if i > optimal_threshold_prob else 0 for i in y_est_test_prob])




    # Misclassification Rates
misclass_rate_train = np.sum(y_est_train != y) / float(len(y_est_train))
misclass_rate_val = np.sum(y_est_val != y_val) / float(len(y_est_val))
misclass_rate_test_pnt5 = np.sum(y_est_test_MODEL != y_test) / float(len(y_est_test_MODEL))
misclass_rate_test_optimalProb = np.sum(y_est_test != y_test)/ float(len(y_est_test))

print(f'Misclassfication rate Train : {misclass_rate_train}')
print(f'Misclassfication rate Val : {misclass_rate_val}')
print(f'Misclassfication rate Test (predictionThreshold = 0.5) : {misclass_rate_test_pnt5}')
print(f'Misclassfication rate Test (predictionThreshold = {optimal_threshold_prob}) : {misclass_rate_test_optimalProb}')
    # Name parameters for plots and models
filenamePy = os.path.basename(__file__)
filenamePy, _ = os.path.splitext(filenamePy)
#--------------------------------------------------------------------------------


# ##############################################################################################################
# Plotting TRAIN

    #---- Train data results
f = figure(figsize= (10, 6))
NAME_plotData = 'TRAIN'

#~~~~ AXIS 0
class0_ids = np.nonzero(y_train==0)[0].tolist()
class1_ids = np.nonzero(y_train==1)[0].tolist()
    # |
_mask_misclassified_ids     = y_train != y_est_train
classBoth_misclass_ids      = np.nonzero(_mask_misclassified_ids)[0].tolist()

classBoth_ids               = class0_ids + class1_ids


#~~~~ AXIS 1
plot(class0_ids, y_est_train_prob[class0_ids], '.g', label= 'Normal')
plot(class1_ids, y_est_train_prob[class1_ids], '.r', label= 'Anomalous')
plot(classBoth_misclass_ids, y_est_train_prob[classBoth_misclass_ids], 'o', markersize= 8, markeredgecolor='y', markerfacecolor='none', markeredgewidth=1)
    # |
    # |  Threshold
_mask_threshold_ids = np.linspace(min(classBoth_ids), max(classBoth_ids), 25)  ;len_mask_thresh = len(_mask_threshold_ids) 
plot(_mask_threshold_ids, [0.5]*len_mask_thresh, ':', color= '#088da5',linewidth= 2 ,label= 'Threshold 0.5')

xlabel(NAME_plotData + ' data Data object (sound sample)')
ylabel('p(Anomally = 1)')

legend()

ylim(-0.1,1.3)

plt.savefig('./Plots/' + '_'.join([filenamePy, NAME_plotData, '.pdf']) )

###########################################################################################################################
#   Plotting VAL

    #---- Validation data results
f = figure(figsize= (10, 6))
NAME_plotData = 'VAL'

#~~~~ Axis 0
class0_ids = np.nonzero(y_val==0)[0].tolist()
class1_ids = np.nonzero(y_val==1)[0].tolist()
    # 
_mask_misclassified_ids     = y_val != y_est_val
classBoth_misclass_ids      = np.nonzero(_mask_misclassified_ids)[0].tolist()

classBoth_ids               = class0_ids + class1_ids


# ~~~~ AXIS 1
plot(class0_ids, y_est_val_prob[class0_ids], '.g', label= 'Normal')
plot(class1_ids, y_est_val_prob[class1_ids], '.r', label= 'Anomalous')
plot(classBoth_misclass_ids, y_est_val_prob[classBoth_misclass_ids], 'o', markersize= 8, markeredgecolor='y', markerfacecolor='none', markeredgewidth=1)
    # |
    # |  Threshold + Optimal Threshold VAL
_mask_threshold_ids = np.linspace(min(classBoth_ids), max(classBoth_ids), 25)  ;len_mask_thresh = len(_mask_threshold_ids) 
plot(_mask_threshold_ids, [0.5]*len_mask_thresh, ':', color= '#088da5',linewidth= 2 ,label= 'Threshold 0.5')
plot(_mask_threshold_ids, [optimal_threshold_prob]*len_mask_thresh, '--', color= '#f6546a' , linewidth=2, label= f'ROC optimal threshold = {str("{:.2f}".format(optimal_threshold_prob))}')

xlabel(NAME_plotData + ' data Data object (sound sample)')
ylabel('p(Anomally = 1)')

legend()

ylim(-0.1,1.3)

plt.savefig('./Plots/' + '_'.join([filenamePy, NAME_plotData, '.pdf']) )
###########################################################################################################################
#   Plotting ROC

    #---- ROC val data results
f = figure(figsize= (8, 8))
NAME_plotData = 'ROC'


plot(fpr, tpr, color='blue', label=f'ROC_line (AUC = {AUC_val:.2f})')
plot(fpr[optimal_idx], tpr[optimal_idx], 'o', markersize= 8, markerfacecolor= 'none', markeredgecolor= 'firebrick', markeredgewidth=2, label= f'Thresh = {str(round(optimal_threshold_prob, 3))} ; TPR = {round(tpr[optimal_idx], 2)}' )
plot([0, 1], [0, 1], color='red', linestyle='--', label= 'Random Guessing')
xlabel('False Positive Rate')
ylabel('True Positive Rate')
title('Receiver Operating Characteristic (ROC) Curve')
legend()


legend()

ylim(-0.1,1.2)

plt.savefig('./Plots/' + '_'.join([filenamePy, NAME_plotData, '.pdf']) )
##################################################################################################################################################################################################
#   Plotting TEST
    
    #--------------------- Test data results
f = figure(figsize= (10, 6))
NAME_plotData = 'TEST'

class0_ids = np.nonzero(y_test==0)[0].tolist()
class1_ids = np.nonzero(y_test==1)[0].tolist()
    # |
_mask_misclassified_ids     = y_test != y_est_test
classBoth_misclass_ids      = np.nonzero(_mask_misclassified_ids)[0].tolist()

classBoth_ids               = class0_ids + class1_ids


#~~~~ AXIS 1
plot(class0_ids, y_est_test_prob[class0_ids], '.g', label= 'Normal')
plot(class1_ids, y_est_test_prob[class1_ids], '.r', label= 'Anomalous')
plot(classBoth_misclass_ids, y_est_test_prob[classBoth_misclass_ids], 'o', markersize=8, markeredgecolor='y', markerfacecolor='none', markeredgewidth=1)
    # |
    # |  Optimal Threshold(val) TEST
_mask_threshold_ids = np.linspace(min(classBoth_ids), max(classBoth_ids), 25)  ;len_mask_thresh = len(_mask_threshold_ids) 
plot(_mask_threshold_ids, [optimal_threshold_prob]*len_mask_thresh, '--', color= '#f6546a' , linewidth=2, label= f'ROC optimal threshold = {str("{:.2f}".format(optimal_threshold_prob))}')

xlabel(NAME_plotData + ' data Data object (sound sample)')
ylabel('p(Anomally = 1)')

legend()

ylim(-0.1,1.3)

plt.savefig('./Plots/' + '_'.join([filenamePy, NAME_plotData, '.pdf']) )

# #--------------------------------------------------------------------------------




# modelname = '_'.join([filenamePy, 'model', '.pkl'])
# pickle.dump(model, open('./TrainedModels/' + modelname, 'wb'))

joblib.dump(model, './TrainedModels/' + '_'.join([filenamePy, 'model', '.joblib']))
print("Done!")