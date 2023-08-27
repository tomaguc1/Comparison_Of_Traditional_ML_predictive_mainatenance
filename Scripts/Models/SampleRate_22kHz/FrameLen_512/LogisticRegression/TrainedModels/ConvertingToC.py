import pickle
# from sklearn import tree
import m2cgen as m2c

with open('LogiReg_allFeatures_model_.pkl', 'rb') as f:
    model_tree = pickle.load(f)
    

code = m2c.export_to_c(model_tree)

with open('ModelLinReg.c', 'w') as f:
    f.write(code)