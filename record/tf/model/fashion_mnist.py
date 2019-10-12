https://www.tensorflow.org/tutorials/keras/classification

from __future__ import absolute_import, division, print_function, unicode_literals

# TensorFlow and tf.keras
import tensorflow as tf
from tensorflow import keras

# Helper libraries
import numpy as np
import matplotlib.pyplot as plt
print(tf.__version__)

fashion_mnist = keras.datasets.fashion_mnist
(train_images, train_labels), (test_images, test_labels) = fashion_mnist.load_data()

class_names = ['T-shirt/top', 'Trouser', 'Pullover', 'Dress', 'Coat',
               'Sandal', 'Shirt', 'Sneaker', 'Bag', 'Ankle boot']

train_images.shape
len(train_labels)
train_labels
test_images.shape
len(test_labels)

plt.figure()
plt.imshow(train_images[0])
plt.colorbar()
plt.grid(False)
plt.show()

train_images = train_images / 255.0
test_images = test_images / 255.0

plt.figure(figsize=(10,10))
for i in range(25):
    plt.subplot(5,5,i+1)
    plt.xticks([])
    plt.yticks([])
    plt.grid(False)
    plt.imshow(train_images[i], cmap=plt.cm.binary)
    plt.xlabel(class_names[train_labels[i]])
plt.show()

model = keras.Sequential([
    keras.layers.Flatten(input_shape=(28, 28)),
    keras.layers.Dense(128, activation='relu'),
    keras.layers.Dense(10, activation='softmax')
])

model.compile(optimizer='adam',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])

model.fit(train_images, train_labels, epochs=10)



(tf2) root@robot-O-E-M:/home/robot/dev/tf# python
Python 3.7.3 | packaged by conda-forge | (default, Jul  1 2019, 21:52:21) 
[GCC 7.3.0] :: Anaconda, Inc. on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> from __future__ import absolute_import, division, print_function, unicode_literals
>>> 
>>> # TensorFlow and tf.keras
... import tensorflow as tf
>>> from tensorflow import keras
>>> 
>>> # Helper libraries
... import numpy as np
>>> import matplotlib.pyplot as plt
>>> 
>>> print(tf.__version__)
2.0.0
>>> fashion_mnist = keras.datasets.fashion_mnist
>>> 
>>> (train_images, train_labels), (test_images, test_labels) = fashion_mnist.load_data()
Downloading data from https://storage.googleapis.com/tensorflow/tf-keras-datasets/train-labels-idx1-ubyte.gz
32768/29515 [=================================] - 0s 12us/step
Downloading data from https://storage.googleapis.com/tensorflow/tf-keras-datasets/train-images-idx3-ubyte.gz
26427392/26421880 [==============================] - 44s 2us/step
Downloading data from https://storage.googleapis.com/tensorflow/tf-keras-datasets/t10k-labels-idx1-ubyte.gz
8192/5148 [===============================================] - 0s 0us/step
Downloading data from https://storage.googleapis.com/tensorflow/tf-keras-datasets/t10k-images-idx3-ubyte.gz
4423680/4422102 [==============================] - 6s 1us/step
>>> class_names = ['T-shirt/top', 'Trouser', 'Pullover', 'Dress', 'Coat',
...                'Sandal', 'Shirt', 'Sneaker', 'Bag', 'Ankle boot']
>>> train_images.shape
(60000, 28, 28)
>>> len(train_labels)
60000
>>> train_labels
array([9, 0, 0, ..., 3, 0, 5], dtype=uint8)
>>> test_images.shape
(10000, 28, 28)
>>> len(test_labels)
10000
>>> plt.figure()
<Figure size 640x480 with 0 Axes>
>>> plt.imshow(train_images[0])
<matplotlib.image.AxesImage object at 0x7ff9a4048320>
>>> plt.colorbar()
<matplotlib.colorbar.Colorbar object at 0x7ff9a40047b8>
>>> plt.grid(False)
>>> plt.show()
>>> train_images = train_images / 255.0
>>> 
>>> test_images = test_images / 255.0
>>> plt.figure(figsize=(10,10))
<Figure size 1000x1000 with 0 Axes>
>>> for i in range(25):
...     plt.subplot(5,5,i+1)
...     plt.xticks([])
...     plt.yticks([])
...     plt.grid(False)
...     plt.imshow(train_images[i], cmap=plt.cm.binary)
...     plt.xlabel(class_names[train_labels[i]])
... plt.show()
  File "<stdin>", line 8
    plt.show()
      ^
SyntaxError: invalid syntax
>>> plt.figure(figsize=(10,10))
<Figure size 1000x1000 with 0 Axes>
>>> for i in range(25):
...     plt.subplot(5,5,i+1)
...     plt.xticks([])
...     plt.yticks([])
...     plt.grid(False)
...     plt.imshow(train_images[i], cmap=plt.cm.binary)
...     plt.xlabel(class_names[train_labels[i]])
... 
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a550c0b8>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff99ce9bc18>
Text(0.5, 0, 'Ankle boot')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a524d898>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a5282d68>
Text(0.5, 0, 'T-shirt/top')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a52110f0>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a52405f8>
Text(0.5, 0, 'T-shirt/top')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a5240940>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a51f2e48>
Text(0.5, 0, 'Dress')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a5202208>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a51af6d8>
Text(0.5, 0, 'T-shirt/top')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a51afa20>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff99cf0f438>
Text(0.5, 0, 'Pullover')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a52b8a20>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a51c2b00>
Text(0.5, 0, 'Sneaker')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a51c2e48>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a406e358>
Text(0.5, 0, 'Pullover')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a406e6a0>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a5164ba8>
Text(0.5, 0, 'Sandal')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a5164f28>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a5123438>
Text(0.5, 0, 'Sandal')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a51237b8>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a50d6c88>
Text(0.5, 0, 'T-shirt/top')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a50d6fd0>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a5092518>
Text(0.5, 0, 'Ankle boot')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a5092860>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a50c5d68>
Text(0.5, 0, 'Sandal')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a5055128>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a50825f8>
Text(0.5, 0, 'Sandal')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a5082978>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a5035e48>
Text(0.5, 0, 'Sneaker')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a50431d0>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a4ff26d8>
Text(0.5, 0, 'Ankle boot')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a4ff2a20>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a4fa4f28>
Text(0.5, 0, 'Trouser')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a4fb42b0>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a4f617b8>
Text(0.5, 0, 'T-shirt/top')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a4f61b00>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a4f13fd0>
Text(0.5, 0, 'Shirt')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a4f233c8>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a4ed2898>
Text(0.5, 0, 'Coat')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a4ed2c18>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a4e91128>
Text(0.5, 0, 'Dress')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a4e914a8>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a4ec1978>
Text(0.5, 0, 'Trouser')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a4ec1cc0>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a4e81208>
Text(0.5, 0, 'Coat')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a4e81588>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a4e31a58>
Text(0.5, 0, 'Bag')
<matplotlib.axes._subplots.AxesSubplot object at 0x7ff9a4e31dd8>
([], <a list of 0 Text xticklabel objects>)
([], <a list of 0 Text yticklabel objects>)
<matplotlib.image.AxesImage object at 0x7ff9a4def2e8>
Text(0.5, 0, 'Coat')
>>> plt.show()
>>> model = keras.Sequential([
...     keras.layers.Flatten(input_shape=(28, 28)),
...     keras.layers.Dense(128, activation='relu'),
...     keras.layers.Dense(10, activation='softmax')
... ])
>>> model.compile(optimizer='adam',
...               loss='sparse_categorical_crossentropy',
...               metrics=['accuracy'])
>>> model.fit(train_images, train_labels, epochs=10)
2019-10-12 19:06:21.418579: W tensorflow/core/framework/cpu_allocator_impl.cc:81] Allocation of 376320000 exceeds 10% of system memory.
Train on 60000 samples
Epoch 1/10
60000/60000 [==============================] - 15s 258us/sample - loss: 0.4989 - accuracy: 0.8262
Epoch 2/10
60000/60000 [==============================] - 18s 302us/sample - loss: 0.3772 - accuracy: 0.8641
Epoch 3/10
60000/60000 [==============================] - 18s 296us/sample - loss: 0.3376 - accuracy: 0.8764
Epoch 4/10
60000/60000 [==============================] - 17s 285us/sample - loss: 0.3152 - accuracy: 0.8831
Epoch 5/10
60000/60000 [==============================] - 17s 290us/sample - loss: 0.2952 - accuracy: 0.8905
Epoch 6/10
60000/60000 [==============================] - 18s 297us/sample - loss: 0.2814 - accuracy: 0.8964
Epoch 7/10
60000/60000 [==============================] - 16s 272us/sample - loss: 0.2711 - accuracy: 0.9004
Epoch 8/10
60000/60000 [==============================] - 15s 246us/sample - loss: 0.2588 - accuracy: 0.9030
Epoch 9/10
60000/60000 [==============================] - 15s 253us/sample - loss: 0.2491 - accuracy: 0.9069
Epoch 10/10
60000/60000 [==============================] - 16s 262us/sample - loss: 0.2391 - accuracy: 0.9106
<tensorflow.python.keras.callbacks.History object at 0x7f3741d5c9e8>
