import os
import numpy as np
import glob
import librosa
from tqdm import tqdm

SR_default = 22050

CASE = 'case1'
CHANNEL = 'ch4'
types_of_recordings = ['NormalSound_IND', 'AnomalousSound_IND'] #Maximum 2 for now {see. wav_read_all}

DATASET_PATH = '/work3/s194799/Datasets/ToyADMOS' + "/" + CASE
# root_dir = os.path.dirname(os.path.dirname(os.path.realpath(__file__)))
# path_to_WAVs = os.path.join(root_dir, DATASET_PATH)

len_types = [] # Nr. of files of each type of recordings

def wav_read_all(wav_folder, target_SR, recording_Types):
    audio_vectors_normal = []
    audio_vectors_anomal = []
    audio_vectors = [audio_vectors_normal, audio_vectors_anomal]
    
    for rec_type in range(len(recording_Types)):
        path_to_files = os.path.join(wav_folder, recording_Types[rec_type] )#TODO: Add audio channel handling {i.e. _ch1_}
        print(f"--> {path_to_files}")
        wav_files = glob.glob(path_to_files + '/*.wav')
        print(f"----------------> {wav_files}")
        wav_files = [f for f in wav_files if CHANNEL in f]
        wav_files.sort()

        len_types.append(len(wav_files))
        
        print("... Loading ... " +  recording_Types[rec_type] + CASE)    
        for i in tqdm(range(len(wav_files))):
            
            sig, sr = librosa.load(wav_files[i], sr= target_SR)
            
            if(sr != target_SR):
                print(f'Resmapling needing at obs {i}')
                sig = librosa.core.resample(sig, sr, target_SR)
            
            audio_vectors[rec_type].append(sig)
        
    return audio_vectors
        
    
#------      THE RUNNY PART      ------# 
audio_vec_list = wav_read_all(DATASET_PATH, SR_default, types_of_recordings)

signal_matrix_0 = np.array(audio_vec_list[0])
signal_matrix_1 = np.array(audio_vec_list[1])
# 
np.save(CASE + '_' + types_of_recordings[0] + '_' + CHANNEL +'.npy', signal_matrix_0)
np.save(CASE + '_' + types_of_recordings[1] + '_' + CHANNEL +'.npy', signal_matrix_1)

print("-->" + types_of_recordings[0] + " has len = " + str(len_types[0]))
print("-->" + types_of_recordings[1] + " has len = " + str(len_types[1]))

