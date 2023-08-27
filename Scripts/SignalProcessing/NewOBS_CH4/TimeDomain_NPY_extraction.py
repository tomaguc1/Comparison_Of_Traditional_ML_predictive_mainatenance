import os
import numpy as np
import librosa
from tqdm import tqdm

#Amplitude Envelope function -----------------------------------------------------------------
def ae_SIG_to_NPY(matrix, frame_size, hop_length, rec_type):
    print(f'Working on AE: Frame Size= {frame_size}')

    ae_list = []
    for i in tqdm(range(len(matrix))):
        signal = matrix[i]

        ae_ith_sig_list = []
        for j in range(0, len(signal), hop_length): 
            amplitude_envelope_current_frame = max(signal[j:j+frame_size])
            
            ae_ith_sig_list.append(amplitude_envelope_current_frame)

        ae_list.append(np.array(ae_ith_sig_list))

    ae_arr = np.array(ae_list)
    print(f'ae_arr Shape : {ae_arr.shape}')

    np.save('_'.join(['AE', CASE, rec_type, CHANNEL]) + '.npy', ae_arr )
#---------------------------------------------------------------------------------------------

#Root Mean Square function -----------------------------------------------------------------
def rms_SIG_to_NPY(matrix, frame_size, hop_length, rec_type):
    print(f'Working on RMS: Frame Size= {frame_size}')

    rms_list = []
    for i in tqdm(range(len(matrix))):
        signal = matrix[i]

        rms_list.append(librosa.feature.rms(y=signal, frame_length= frame_size, hop_length= hop_length)[0])
    

    rms_arr = np.array(rms_list)
    print(f'rms_arr Shape : {rms_arr.shape}')

    np.save('_'.join(['RMS', CASE, rec_type, CHANNEL]) + '.npy', rms_arr )
#---------------------------------------------------------------------------------------------

#Zero Crossing Rate function -----------------------------------------------------------------
def zcr_SIG_to_NPY(matrix, frame_size, hop_length, rec_type):
    print(f'Workin on ZCR: Frame Size= {frame_size}')

    zcr_list = []
    for i in tqdm(range(len(matrix))):
        signal = matrix[i]

        zcr_list.append(librosa.feature.zero_crossing_rate(y=signal, frame_length= frame_size, hop_length= hop_length)[0])
    

    zcr_arr = np.array(zcr_list)
    print(f'zcr_arr Shape : {zcr_arr.shape}')

    np.save('_'.join(['ZCR', CASE, rec_type, CHANNEL]) + '.npy', zcr_arr )
#---------------------------------------------------------------------------------------------



DATA_DIR = '/zhome/f8/2/147264/BachelorThesis/Scripts/SignalProcessing/'
CASE = 'case1'
CHANNEL = 'ch4'
REC_TYPE = ['NormalSound_IND', 'AnomalousSound_IND']

FRAME_LENGTH = 8192
HOP_LENGTH   = int(FRAME_LENGTH/2)

for rec_type in REC_TYPE:
    print(f'--> {rec_type} for {CASE} : {CHANNEL} ')
    file_name = '_'.join([CASE, rec_type, CHANNEL]) + '.npy'
    npy_path = os.path.join(DATA_DIR, file_name)

    signalMatrix = np.load(npy_path)
    print(signalMatrix.shape)
    ae_SIG_to_NPY(signalMatrix, FRAME_LENGTH, HOP_LENGTH, rec_type)
    rms_SIG_to_NPY(signalMatrix, FRAME_LENGTH, HOP_LENGTH, rec_type)
    zcr_SIG_to_NPY(signalMatrix, FRAME_LENGTH, HOP_LENGTH, rec_type)
