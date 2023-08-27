from _LoadNumpys import *
    # Already imported
    #   numpy
    #   os
    #   joblib
    #   pickle
import sklearn
from sklearn import model_selection
import sklearn.linear_model as lm
from sklearn.metrics import roc_curve, accuracy_score
import pickle
 

import matplotlib.pyplot as plt
from matplotlib.pylab import figure, plot, xlabel, xticks, ylabel, legend, ylim, show, title




lambdas = [0.0001, 0.001, 0.01, 0.05, 0.1, 0.125, 0.5, 1, 2, 4, 6]

error_list = []
for lam in lambdas:
    model = lm.LogisticRegression(C= 1/lam, random_state= 25, max_iter= 9999)
    model.fit(X_train, y_train)

    y_pred = model.predict(X_val)
    error_list.append(1 - accuracy_score(y_val, y_pred))

best_lambda_idx = error_list.index(min(error_list))
best_lambda = lambdas[best_lambda_idx]
print(f'Lambda value corresponding to lowest err : {best_lambda} !')

##################################################################################################################
#   Plotting
#---- Error Plot ----#
figure(figsize= (10, 6))
plot(lambdas, error_list, label= 'Validation error rate')
plot(lambdas[best_lambda_idx], error_list[best_lambda_idx], 'o', markersize= 8, markerfacecolor= 'none', markeredgecolor= 'firebrick', markeredgewidth= 2, label= f'Lamda = {str(round(best_lambda, 4))} : Error = {round(error_list[best_lambda_idx], 4)}')

xlabel('Lamda')
ylabel('Misclassification error test')

legend()

title('Hyperparam tuning for logireg 22kHz_1024')

plt.savefig('./Plots/LamdaTune_forLogiReg.pdf')
plt.close()
#------------------------------------------------------------------------------

