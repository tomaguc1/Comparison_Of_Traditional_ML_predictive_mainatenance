#/work3/s194799/ToyADMOS/case1/NormalSound_IND/
import numpy as np
import os
import joblib
import pickle

from sklearn import model_selection

data_dir = '/zhome/f8/2/147264/BachelorThesis/DataFeatures/TimeDomain_44kHz/FrameLen_8192'

CASES    = ['case1', 'case2', 'case3', 'case4']
CH       = 'ch1'
REC_TYPES = ['NormalSound_IND', 'AnomalousSound_IND']
FEATURES = ['ZCR', 'RMS', 'AE']

#----------------
#ZeroCrossingRate
#
zcr_path_case1 = os.path.join(data_dir, FEATURES[0] )
zcr_path_case2 = os.path.join(data_dir, FEATURES[0] )
zcr_path_case3 = os.path.join(data_dir, FEATURES[0] )
zcr_path_case4 = os.path.join(data_dir, FEATURES[0] )

d_zcr_norm_case1_ch1 = np.load(os.path.join(zcr_path_case1, 'ZCR_case1_NormalSound_IND_' + CH + '.npy')) 
d_zcr_norm_case2_ch1 = np.load(os.path.join(zcr_path_case2, 'ZCR_case2_NormalSound_IND_' + CH + '.npy')) 
d_zcr_norm_case3_ch1 = np.load(os.path.join(zcr_path_case3, 'ZCR_case3_NormalSound_IND_' + CH + '.npy')) 
d_zcr_norm_case4_ch1 = np.load(os.path.join(zcr_path_case4, 'ZCR_case4_NormalSound_IND_' + CH + '.npy')) 

d_zcr_anom_case1_ch1 = np.load(os.path.join(zcr_path_case1, 'ZCR_case1_AnomalousSound_IND_' + CH + '.npy'))
d_zcr_anom_case2_ch1 = np.load(os.path.join(zcr_path_case2, 'ZCR_case2_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_zcr_anom_case3_ch1 = np.load(os.path.join(zcr_path_case3, 'ZCR_case3_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_zcr_anom_case4_ch1 = np.load(os.path.join(zcr_path_case4, 'ZCR_case4_AnomalousSound_IND_' + CH + '.npy'))[:-1]

Nobs_ZCR = (d_zcr_norm_case1_ch1.shape[0]*4, d_zcr_anom_case1_ch1.shape[0]*4)

ZCR_list = [d_zcr_norm_case1_ch1,
            d_zcr_norm_case2_ch1,
            d_zcr_norm_case3_ch1,
            d_zcr_norm_case4_ch1,
            d_zcr_anom_case1_ch1,
            d_zcr_anom_case2_ch1,
            d_zcr_anom_case3_ch1,
            d_zcr_anom_case4_ch1
            ]

Matrix_ZCR = np.vstack(ZCR_list)
y_ZCR  = np.concatenate( (np.zeros(Nobs_ZCR[0]), np.ones(Nobs_ZCR[1])) )

print('#ZeroCrossing rate for Cases: {}\n    and Channel: {}\n   and Types {}\n\n'.format(CASES, CH, REC_TYPES))
#---------------------------------------------------------------------------------------------------------------------

#----------------
#Root Mean Square
#
rms_path_case1 = os.path.join(data_dir, FEATURES[1] )
rms_path_case2 = os.path.join(data_dir, FEATURES[1] )
rms_path_case3 = os.path.join(data_dir, FEATURES[1] )
rms_path_case4 = os.path.join(data_dir, FEATURES[1] )

d_rms_norm_case1_ch1 = np.load(os.path.join(rms_path_case1, 'RMS_case1_NormalSound_IND_' + CH + '.npy')) 
d_rms_norm_case2_ch1 = np.load(os.path.join(rms_path_case2, 'RMS_case2_NormalSound_IND_' + CH + '.npy')) 
d_rms_norm_case3_ch1 = np.load(os.path.join(rms_path_case3, 'RMS_case3_NormalSound_IND_' + CH + '.npy')) 
d_rms_norm_case4_ch1 = np.load(os.path.join(rms_path_case4, 'RMS_case4_NormalSound_IND_' + CH + '.npy')) 

d_rms_anom_case1_ch1 = np.load(os.path.join(rms_path_case1, 'RMS_case1_AnomalousSound_IND_' + CH + '.npy'))
d_rms_anom_case2_ch1 = np.load(os.path.join(rms_path_case2, 'RMS_case2_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_rms_anom_case3_ch1 = np.load(os.path.join(rms_path_case3, 'RMS_case3_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_rms_anom_case4_ch1 = np.load(os.path.join(rms_path_case4, 'RMS_case4_AnomalousSound_IND_' + CH + '.npy'))[:-1]

Nobs_RMS = (d_rms_norm_case1_ch1.shape[0]*4, d_rms_anom_case1_ch1.shape[0]*4)

RMS_list = [d_rms_norm_case1_ch1,
            d_rms_norm_case2_ch1,
            d_rms_norm_case3_ch1,
            d_rms_norm_case4_ch1,
            d_rms_anom_case1_ch1,
            d_rms_anom_case2_ch1,
            d_rms_anom_case3_ch1,
            d_rms_anom_case4_ch1
            ]

Matrix_RMS = np.vstack(RMS_list)
y_RMS  = np.concatenate( (np.zeros(Nobs_RMS[0]), np.ones(Nobs_RMS[1])) )

print('#Root Mean Square for Cases: {}\n    and Channel: {}\n   and Types {}\n\n'.format(CASES, CH, REC_TYPES))
#---------------------------------------------------------------------------------------------------------------------

#------------------
#Amplitude Envelope
#
ae_path_case1 = os.path.join(data_dir, FEATURES[2] )
ae_path_case2 = os.path.join(data_dir, FEATURES[2] )
ae_path_case3 = os.path.join(data_dir, FEATURES[2] )
ae_path_case4 = os.path.join(data_dir, FEATURES[2] )

d_ae_norm_case1_ch1 = np.load(os.path.join(ae_path_case1, 'AE_case1_NormalSound_IND_' + CH + '.npy')) 
d_ae_norm_case2_ch1 = np.load(os.path.join(ae_path_case2, 'AE_case2_NormalSound_IND_' + CH + '.npy')) 
d_ae_norm_case3_ch1 = np.load(os.path.join(ae_path_case3, 'AE_case3_NormalSound_IND_' + CH + '.npy')) 
d_ae_norm_case4_ch1 = np.load(os.path.join(ae_path_case4, 'AE_case4_NormalSound_IND_' + CH + '.npy')) 

d_ae_anom_case1_ch1 = np.load(os.path.join(ae_path_case1, 'AE_case1_AnomalousSound_IND_' + CH + '.npy'))
d_ae_anom_case2_ch1 = np.load(os.path.join(ae_path_case2, 'AE_case2_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_ae_anom_case3_ch1 = np.load(os.path.join(ae_path_case3, 'AE_case3_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_ae_anom_case4_ch1 = np.load(os.path.join(ae_path_case4, 'AE_case4_AnomalousSound_IND_' + CH + '.npy'))[:-1]

Nobs_AE = (d_ae_norm_case1_ch1.shape[0]*4, d_ae_anom_case1_ch1.shape[0]*4)

AE_list = [ d_ae_norm_case1_ch1,
            d_ae_norm_case2_ch1,
            d_ae_norm_case3_ch1,
            d_ae_norm_case4_ch1,
            d_ae_anom_case1_ch1,
            d_ae_anom_case2_ch1,
            d_ae_anom_case3_ch1,
            d_ae_anom_case4_ch1
            ]

Matrix_AE = np.vstack(AE_list)
y_AE  = np.concatenate( (np.zeros(Nobs_AE[0]), np.ones(Nobs_AE[1])) )

print('#Amplitude Envelope for Cases: {}\n    and Channel: {}\n   and Types {}\n\n'.format(CASES, CH, REC_TYPES))
#---------------------------------------------------------------------------------------------------------------------

#---------------------------------------------------------------------------------------------------------------------
#           Horizontal Stack of Features in X matrix
#
#   ─ X_rms ──|
#   ─ X_ae  ──|
#   ─ X_zcr ──|
#             |_
#               └ X
#
#   ─ y == y_rms == y_ae == y_zcr
#
X = np.hstack((Matrix_ZCR, Matrix_AE, Matrix_RMS))
y = y_RMS if (all(y_RMS == y_AE) and all(y_RMS == y_ZCR)) else "Error: Mismatch of y values"


#-------------------             HoldOut Splitting -------------#
# ── X, y
#       └── .( ~ train test split ~ )
#             X_test, y_test
#             X_model, y_model
#                 └── .( ~ train test split ~ )
#                       X_train, y_train
#                       X_val, y_val
#
X_model, X_test, y_model, y_test = model_selection.train_test_split(X,       y,       test_size=0.15, random_state= 25)
X_train, X_val, y_train, y_val =   model_selection.train_test_split(X_model, y_model, test_size=0.15, random_state= 25)

