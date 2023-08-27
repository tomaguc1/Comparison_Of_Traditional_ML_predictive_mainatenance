from _LoadNumpys import *
    # Already imported
    # numpy
    # os
from sklearn.svm import SVC
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score


import matplotlib.pyplot as plt
from matplotlib.pylab import figure, plot, xlabel, ylabel, legend, ylim, show



X = np.hstack((Matrix_ZCR, Matrix_AE, Matrix_RMS))
y = y_RMS if (all(y_RMS == y_AE) and all(y_RMS == y_ZCR)) else "Error: Mismatch of y values"

test_proportion = 0.15
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=test_proportion, random_state= 42)


    # Name parameters for plots and models
filenamePy = os.path.basename(__file__)
filenamePy, _ = os.path.splitext(filenamePy)





control = np.arange(1, 10, 1)



Error_train = np.empty((len(control),1))
Error_test = np.empty((len(control),1))

for i, c in enumerate(control):
    print(f'Iteration {i} for paramater value {c}')
    # Fit decision tree classifier, Gini split criterion, different pruning levels
    model = SVC(kernel='linear', C=c)
    model.fit(X_train, y_train)
    

    #@

    # Evaluate classifier's misclassification rate over train/test data
    y_est_test = np.asarray(model.predict(X_test),dtype=int)
    y_est_train = np.asarray(model.predict(X_train), dtype=int)
    misclass_rate_test = sum(y_est_test != y_test) / float(len(y_est_test))
    misclass_rate_train = sum(y_est_train != y_train) / float(len(y_est_train))
    Error_test[i], Error_train[i] = misclass_rate_test, misclass_rate_train
    
f = figure()
plot(control, Error_train*100)
plot(control, Error_test*100)
xlabel('Model complexity (max n estimators)')
ylabel('Error (%)')
legend(['Error_train','Error_test'])

err_arr = Error_test.reshape(1, -1)[0][:20]
min_index = np.argmin(err_arr)

# Get the minimum value using the index
min_value = err_arr[min_index]

print("Minimum value:", min_value)
print("Index of minimum value:", min_index)

plt.savefig('./Plots/' + '_'.join([filenamePy, 'ErrorRatesTree', 'n_estimators', '.png']) )

