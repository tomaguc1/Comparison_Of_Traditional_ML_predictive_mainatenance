import pickle
import sys
sys.setrecursionlimit(99999)
from sklearn.svm import SVC
import m2cgen as m2c

with open('svc_model_c3.pkl', 'rb') as f:
    model = pickle.load(f)
    
print('Model Loaded!')
code = m2c.export_to_c(model)

with open('svc_c3.c', 'w') as f:
    f.write(code)

