(tf2) root@robot-O-E-M:/home/robot/dev/conda/tensorflow# ./bazel-bin/tensorflow/tools/pip_package/build_pip_package /home/robot/build/march_core2
2019年 10月 12日 星期六 18:00:52 CST : === Preparing sources in dir: /tmp/tmp.Z3R0clGmNX
/home/robot/dev/conda/tensorflow /home/robot/dev/conda/tensorflow
/home/robot/dev/conda/tensorflow
/tmp/tmp.Z3R0clGmNX/tensorflow/include /home/robot/dev/conda/tensorflow
/home/robot/dev/conda/tensorflow
2019年 10月 12日 星期六 18:01:08 CST : === Building wheel
warning: no files found matching 'README'
warning: no files found matching '*.pyd' under directory '*'
warning: no files found matching '*.pd' under directory '*'
warning: no files found matching '*.dylib' under directory '*'
warning: no files found matching '*.dll' under directory '*'
warning: no files found matching '*.lib' under directory '*'
warning: no files found matching '*.csv' under directory '*'
warning: no files found matching '*.h' under directory 'tensorflow_core/include/tensorflow'
warning: no files found matching '*' under directory 'tensorflow_core/include/third_party'
2019年 10月 12日 星期六 18:01:37 CST : === Output wheel file is in: /home/robot/build/march_core2
(tf2) root@robot-O-E-M:/home/robot/dev/conda/tensorflow# pip install /home/user/build/march_core2/tensorflow-2.0.0-cp37-cp37m-linux_x86_64.whl
WARNING: Requirement '/home/user/build/march_core2/tensorflow-2.0.0-cp37-cp37m-linux_x86_64.whl' looks like a filename, but the file does not exist
Requirement already satisfied: tensorflow==2.0.0 from file:///home/user/build/march_core2/tensorflow-2.0.0-cp37-cp37m-linux_x86_64.whl in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (2.0.0)
Requirement already satisfied: numpy<2.0,>=1.16.0 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (1.17.2)
Requirement already satisfied: gast==0.2.2 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (0.2.2)
Requirement already satisfied: opt-einsum>=2.3.2 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (3.1.0)
Requirement already satisfied: google-pasta>=0.1.6 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (0.1.7)
Requirement already satisfied: astor>=0.6.0 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (0.8.0)
Requirement already satisfied: tensorflow-estimator<2.1.0,>=2.0.0 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (2.0.0)
Requirement already satisfied: keras-preprocessing>=1.0.5 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (1.1.0)
Requirement already satisfied: wrapt>=1.11.1 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (1.11.2)
Requirement already satisfied: six>=1.10.0 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (1.12.0)
Requirement already satisfied: tensorboard<2.1.0,>=2.0.0 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (2.0.0)
Requirement already satisfied: wheel>=0.26 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (0.33.6)
Requirement already satisfied: protobuf>=3.6.1 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (3.10.0)
Requirement already satisfied: grpcio>=1.8.6 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (1.24.1)
Requirement already satisfied: keras-applications>=1.0.8 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (1.0.8)
Requirement already satisfied: termcolor>=1.1.0 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (1.1.0)
Requirement already satisfied: absl-py>=0.7.0 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorflow==2.0.0) (0.8.1)
Requirement already satisfied: markdown>=2.6.8 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorboard<2.1.0,>=2.0.0->tensorflow==2.0.0) (3.1.1)
Requirement already satisfied: werkzeug>=0.11.15 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorboard<2.1.0,>=2.0.0->tensorflow==2.0.0) (0.16.0)
Requirement already satisfied: setuptools>=41.0.0 in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from tensorboard<2.1.0,>=2.0.0->tensorflow==2.0.0) (41.4.0)
Requirement already satisfied: h5py in /root/miniconda3/envs/tf2/lib/python3.7/site-packages (from keras-applications>=1.0.8->tensorflow==2.0.0) (2.10.0)
