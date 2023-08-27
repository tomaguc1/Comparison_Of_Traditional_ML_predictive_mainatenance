import pickle
from joblib import dump, load

import sys
sys.setrecursionlimit(99999)

import xgboost as xgb
import m2cgen as m2c

model = load('singleModel_XGB_model_.joblib')
model.base_score = 0

print('Model Loaded!')
code = m2c.export_to_c(model)

with open('xbg_44_8192_model.c', 'w') as f:
    f.write(code)
