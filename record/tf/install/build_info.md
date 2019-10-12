(tf2) root@robot-O-E-M:/home/robot/dev/conda/tensorflow# python -c "import tensorflow as tf;print(tf.reduce_sum(tf.random.normal([1000, 1000])))"
Traceback (most recent call last):
  File "/home/robot/dev/conda/tensorflow/tensorflow/python/platform/self_check.py", line 25, in <module>
    from tensorflow.python.platform import build_info
ImportError: cannot import name 'build_info' from 'tensorflow.python.platform' (/home/robot/dev/conda/tensorflow/tensorflow/python/platform/__init__.py)

During handling of the above exception, another exception occurred:

Traceback (most recent call last):
  File "<string>", line 1, in <module>
  File "/home/robot/dev/conda/tensorflow/tensorflow/__init__.py", line 24, in <module>
    from tensorflow.python import pywrap_tensorflow  # pylint: disable=unused-import
  File "/home/robot/dev/conda/tensorflow/tensorflow/python/__init__.py", line 49, in <module>
    from tensorflow.python import pywrap_tensorflow
  File "/home/robot/dev/conda/tensorflow/tensorflow/python/pywrap_tensorflow.py", line 25, in <module>
    from tensorflow.python.platform import self_check
  File "/home/robot/dev/conda/tensorflow/tensorflow/python/platform/self_check.py", line 27, in <module>
    raise ImportError("Could not import tensorflow. Do not import tensorflow "
ImportError: Could not import tensorflow. **Do not import tensorflow from its source directory; change directory to outside the TensorFlow source tree, and relaunch your Python interpreter from there.**

 
 
 mrry commented on Oct 6, 2017

OK, I think it should work if you **cd out of that directory.** build_info.py is a generated file and from the stack trace it looks like Python is trying to import tensorflow from the source tree, which doesn't contain any generated files.

This has tripped us up before, and build_info recently became the first generated file that we attempt to import. I've sent PR #13528 to add a better error message.

https://github.com/tensorflow/tensorflow/issues/13526


Search ImportError: cannot import name 'build_info' from 'tensorflow.python.platform'
https://github.com/tensorflow/tensorflow/issues/13526
