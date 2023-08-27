import pickle
from joblib import dump, load

import sys
sys.setrecursionlimit(99999)

from sklearn.ensemble import RandomForestClassifier
import m2cgen as m2c

model = load('singleModel_RandForest_model_.joblib')

print('Model Loaded!')
code = m2c.export_to_c(model)

# modified_code = code.replace('(double[]){1.0, 0.0}', 'array_one')
# modified_code = modified_code.replace('(double[]){0.0, 1.0}', 'array_two')


with open('randForest_44_1024_model.c', 'w') as f:
    f.write(code)

