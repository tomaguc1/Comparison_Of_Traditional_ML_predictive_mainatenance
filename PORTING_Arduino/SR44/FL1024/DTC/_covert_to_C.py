import pickle
from joblib import dump, load

import sys
sys.setrecursionlimit(99999)

from sklearn.tree import DecisionTreeClassifier
import m2cgen as m2c

model = load('singleModel_DTC_model_.joblib')
model.base_score = 0

print('Model Loaded!')
code = m2c.export_to_c(model)

modified_code = code.replace('(double[]){1.0, 0.0}', 'array_one')
modified_code = modified_code.replace('(double[]){0.0, 1.0}', 'array_two')


with open('DTC_44_1024_model.c', 'w') as f:
    f.write(modified_code)
