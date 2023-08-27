import pickle
from joblib import dump, load

import sys
sys.setrecursionlimit(99999)

from sklearn.linear_model import LogisticRegression
import m2cgen as m2c

model = load('singleModel_LogiReg_model_.joblib')
model.base_score = 0

print('Model Loaded!')
code = m2c.export_to_c(model)

with open('logiReg_22_4096_model.c', 'w') as f:
    f.write(code)
