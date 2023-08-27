from _LoadNumpys import *
from tqdm import tqdm
#Already imported 
#   numpy
#   os

import xgboost as xgb

import seaborn as sns
import matplotlib.pyplot as plt



    # Name parameters for plots and models
filenamePy = os.path.basename(__file__)
filenamePy, _ = os.path.splitext(filenamePy)


# hyperPar_x = [np.arange(5, 70, 19), 'Max Depth']
# hyperPar_y = [np.arange(2, 70, 15), 'No_Estimators']

hyperPar_x = [np.arange(27, 40, 2), 'Max Depth']
hyperPar_y = [np.arange(6, 14, 1), 'No_Estimators']



Error_train = np.empty((len(hyperPar_x[0]),1))
Error_val = np.empty((len(hyperPar_x[0]),1))

Val_error_array = np.ones((len(hyperPar_y[0]), len(hyperPar_x[0])) )

for y in tqdm(range(len(hyperPar_y[0]))):
    print(f'iteration {hyperPar_y[1]} value : {(hyperPar_y[0])[y]}')
    for i, x in enumerate(hyperPar_x[0]):
        print(f'-> inner iter {i}')


        model = xgb.XGBClassifier(objective= 'binary:logistic',
                                        n_estimators= (hyperPar_y[0])[y],
                                        max_depth= (hyperPar_x[0])[i],
                                        random_state= 25)
        model = model.fit(X_train, y_train)
        


        y_est_train = np.asarray(model.predict(X_train), dtype=int)
        y_est_val = np.asarray(model.predict(X_val),dtype=int)

        misclass_rate_train = sum(y_est_train != y_train) / float(len(y_est_train))
        misclass_rate_val = sum(y_est_val != y_val) / float(len(y_est_val))
        
        Error_val[i], Error_train[i] = misclass_rate_val, misclass_rate_train
    
        Val_error_array[y][i] = misclass_rate_val
    print(Error_val.reshape(1,-1)[0])



np.save('XGB_Errors_' + '_'.join([hyperPar_x[1], hyperPar_y[1]]) 
            + '.npy', Val_error_array)


min_error_idx = np.unravel_index(np.argmin(Val_error_array, axis=None), Val_error_array.shape)
min_error_value = Val_error_array[min_error_idx[0]][min_error_idx[1]]

#########################################################################################################################
#   Heatmap Plotting 

plt.figure(figsize=(10, 6))
sns.heatmap(Val_error_array, cmap='YlGnBu')

plt.xlabel(hyperPar_x[1])
plt.xticks(ticks= np.linspace(0, len(hyperPar_x[0]) - 1, len(hyperPar_x[0])),
            labels = hyperPar_x[0])


plt.ylabel(hyperPar_y[1])
plt.yticks(ticks= np.linspace(0, len(hyperPar_y[0]) - 1, len(hyperPar_y[0])),
            labels = hyperPar_y[0])

plt.title(f'XGB Min error param : {hyperPar_x[1]} = {(hyperPar_x[0])[min_error_idx[1]]} | {hyperPar_y[1]} = {(hyperPar_y[0])[min_error_idx[0]]}')

plt.savefig('./Plots/' + '_'.join([filenamePy, hyperPar_x[1], hyperPar_y[1], '.pdf'] ) )
