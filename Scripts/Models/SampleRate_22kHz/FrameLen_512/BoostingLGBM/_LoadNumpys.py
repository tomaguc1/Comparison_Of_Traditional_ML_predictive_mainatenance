#/work3/s194799/ToyADMOS/case1/NormalSound_IND/
import numpy as np
import os


data_dir = '/zhome/f8/2/147264/BachelorThesis/DataFeatures'

CASES    = ['case1', 'case2', 'case3', 'case4']
CH       = 'ch1'
REC_TYPES = ['NormalSound_IND', 'AnomalousSound_IND']
FEATURES = ['ZCR', 'RMS', 'AE']

#----------------
#ZeroCrossingRate
#
zcr_path_case1 = os.path.join(data_dir, FEATURES[0] ,CASES[0])
zcr_path_case2 = os.path.join(data_dir, FEATURES[0] ,CASES[1])
zcr_path_case3 = os.path.join(data_dir, FEATURES[0] ,CASES[2])
zcr_path_case4 = os.path.join(data_dir, FEATURES[0] ,CASES[3])

d_zcr_norm_case1_ch1 = np.load(os.path.join(zcr_path_case1, REC_TYPES[0], 'ZCR_case1_NormalSound_IND_' + CH + '.npy')) 
d_zcr_norm_case2_ch1 = np.load(os.path.join(zcr_path_case2, REC_TYPES[0], 'ZCR_case2_NormalSound_IND_' + CH + '.npy')) 
d_zcr_norm_case3_ch1 = np.load(os.path.join(zcr_path_case3, REC_TYPES[0], 'ZCR_case3_NormalSound_IND_' + CH + '.npy')) 
d_zcr_norm_case4_ch1 = np.load(os.path.join(zcr_path_case4, REC_TYPES[0], 'ZCR_case4_NormalSound_IND_' + CH + '.npy')) 

d_zcr_anom_case1_ch1 = np.load(os.path.join(zcr_path_case1, REC_TYPES[1], 'ZCR_case1_AnomalousSound_IND_' + CH + '.npy'))
d_zcr_anom_case2_ch1 = np.load(os.path.join(zcr_path_case2, REC_TYPES[1], 'ZCR_case2_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_zcr_anom_case3_ch1 = np.load(os.path.join(zcr_path_case3, REC_TYPES[1], 'ZCR_case3_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_zcr_anom_case4_ch1 = np.load(os.path.join(zcr_path_case4, REC_TYPES[1], 'ZCR_case4_AnomalousSound_IND_' + CH + '.npy'))[:-1]

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
rms_path_case1 = os.path.join(data_dir, FEATURES[1] ,CASES[0])
rms_path_case2 = os.path.join(data_dir, FEATURES[1] ,CASES[1])
rms_path_case3 = os.path.join(data_dir, FEATURES[1] ,CASES[2])
rms_path_case4 = os.path.join(data_dir, FEATURES[1] ,CASES[3])

d_rms_norm_case1_ch1 = np.load(os.path.join(rms_path_case1, REC_TYPES[0], 'RMS_case1_NormalSound_IND_' + CH + '.npy')) 
d_rms_norm_case2_ch1 = np.load(os.path.join(rms_path_case2, REC_TYPES[0], 'RMS_case2_NormalSound_IND_' + CH + '.npy')) 
d_rms_norm_case3_ch1 = np.load(os.path.join(rms_path_case3, REC_TYPES[0], 'RMS_case3_NormalSound_IND_' + CH + '.npy')) 
d_rms_norm_case4_ch1 = np.load(os.path.join(rms_path_case4, REC_TYPES[0], 'RMS_case4_NormalSound_IND_' + CH + '.npy')) 

d_rms_anom_case1_ch1 = np.load(os.path.join(rms_path_case1, REC_TYPES[1], 'RMS_case1_AnomalousSound_IND_' + CH + '.npy'))
d_rms_anom_case2_ch1 = np.load(os.path.join(rms_path_case2, REC_TYPES[1], 'RMS_case2_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_rms_anom_case3_ch1 = np.load(os.path.join(rms_path_case3, REC_TYPES[1], 'RMS_case3_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_rms_anom_case4_ch1 = np.load(os.path.join(rms_path_case4, REC_TYPES[1], 'RMS_case4_AnomalousSound_IND_' + CH + '.npy'))[:-1]

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
ae_path_case1 = os.path.join(data_dir, FEATURES[2] ,CASES[0])
ae_path_case2 = os.path.join(data_dir, FEATURES[2] ,CASES[1])
ae_path_case3 = os.path.join(data_dir, FEATURES[2] ,CASES[2])
ae_path_case4 = os.path.join(data_dir, FEATURES[2] ,CASES[3])

d_ae_norm_case1_ch1 = np.load(os.path.join(ae_path_case1, REC_TYPES[0], 'AE_case1_NormalSound_IND_' + CH + '.npy')) 
d_ae_norm_case2_ch1 = np.load(os.path.join(ae_path_case2, REC_TYPES[0], 'AE_case2_NormalSound_IND_' + CH + '.npy')) 
d_ae_norm_case3_ch1 = np.load(os.path.join(ae_path_case3, REC_TYPES[0], 'AE_case3_NormalSound_IND_' + CH + '.npy')) 
d_ae_norm_case4_ch1 = np.load(os.path.join(ae_path_case4, REC_TYPES[0], 'AE_case4_NormalSound_IND_' + CH + '.npy')) 

d_ae_anom_case1_ch1 = np.load(os.path.join(ae_path_case1, REC_TYPES[1], 'AE_case1_AnomalousSound_IND_' + CH + '.npy'))
d_ae_anom_case2_ch1 = np.load(os.path.join(ae_path_case2, REC_TYPES[1], 'AE_case2_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_ae_anom_case3_ch1 = np.load(os.path.join(ae_path_case3, REC_TYPES[1], 'AE_case3_AnomalousSound_IND_' + CH + '.npy'))[:-1]
d_ae_anom_case4_ch1 = np.load(os.path.join(ae_path_case4, REC_TYPES[1], 'AE_case4_AnomalousSound_IND_' + CH + '.npy'))[:-1]

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


