from _LoadNumpys import *
    # Already imported
    # numpy
    # os

import pickle
import lightgbm as lgb

from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

import pickle

import matplotlib.pyplot as plt
from matplotlib.pylab import figure, plot, xlabel, ylabel, legend, ylim, show



X = np.hstack((Matrix_ZCR, Matrix_AE, Matrix_RMS))
y = y_RMS if (all(y_RMS == y_AE) and all(y_RMS == y_ZCR)) else "Error: Mismatch of y values"

test_proportion = 0.15
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=test_proportion, random_state= 42)




lgbm_classifier = lgb.LGBMClassifier(objective='binary',
                                     boosting_type='gbdt',
                                     n_estimators= 3,  # Number of boostig iterations
                                     learning_rate=0.9)

lgbm_classifier.fit(X_train, y_train)


y_pred = lgbm_classifier.predict(X_test)


accuracy = accuracy_score(y_test, y_pred)
print(f"Accuracy: {accuracy * 100:.2f}%")


with open('LGBM_model_NoEstim3.pkl', 'wb') as file:
    pickle.dump(lgbm_classifier, file)