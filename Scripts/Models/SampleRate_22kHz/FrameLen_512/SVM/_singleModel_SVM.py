from _LoadNumpys import *
    # Already imported
    # numpy
    # os
from sklearn.svm import SVC
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

import pickle

import matplotlib.pyplot as plt
from matplotlib.pylab import figure, plot, xlabel, ylabel, legend, ylim, show



X = np.hstack((Matrix_ZCR, Matrix_AE, Matrix_RMS))
y = y_RMS if (all(y_RMS == y_AE) and all(y_RMS == y_ZCR)) else "Error: Mismatch of y values"

test_proportion = 0.15
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=test_proportion, random_state= 42)

model = SVC(kernel='linear', C=3)

model.fit(X_train, y_train)


y_est_test_pred = model.predict(X_test)
y_est_train_pred = model.predict(X_train)

accuracy_test = accuracy_score(y_test, y_est_test_pred)
print(f'Accuracy: {accuracy_test}')

accuracy_train = accuracy_score(y_train, y_est_train_pred)
print(f'Accuracy: {accuracy_train}')

with open('svc_model_c3.pkl', 'wb') as file:
    pickle.dump(model, file)


    # Name parameters for plots and models
filenamePy = os.path.basename(__file__)
filenamePy, _ = os.path.splitext(filenamePy)


#--------------------------------------------------------------------------------
#   Plotting 

    #---------------------
    # Test Classifications
f = figure()
class0_ids = np.nonzero(y_test==0)[0].tolist()
plot(class0_ids, y_est_test_pred[class0_ids], '.g')
class1_ids = np.nonzero(y_test==1)[0].tolist()
plot(class1_ids, y_est_test_pred[class1_ids], '.r')

xlabel('Data object (sound sample)'); ylabel('Class Probability');
legend(['Normal', 'Anomalous'])
ylim(-0.01,1.5)
plt.savefig('./Plots/' + '_'.join([filenamePy, 'Test', '.png']) )

    #----------------------
    # Train Classifications
f = figure()
class0_ids = np.nonzero(y_train==0)[0].tolist()
plot(class0_ids, y_est_train_pred[class0_ids], '.g')
class1_ids = np.nonzero(y_train==1)[0].tolist()
plot(class1_ids, y_est_train_pred[class1_ids], '.r')

xlabel('Data object (sound sample)'); ylabel('Predicted Anomally 1-Anomalous');
legend(['Normal', 'Anomalous'])
ylim(-0.01,1.5)
plt.savefig('_'.join([filenamePy, 'Train', '.png']) )

#--------------------------------------------------------------------------------
