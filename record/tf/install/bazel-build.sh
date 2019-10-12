in conda py3 virtual environment
```
bazel build --jobs 2 --local_resources=2048,1,1 --config=opt //tensorflow/tools/pip_package:build_pip_package
  gcc -Q -march=native --help=target | grep march
bazel build --jobs 2 --local_resources=2048,1,1 --config=opt --copt=-march=core2 //tensorflow/tools/pip_package:build_pip_package 
./bazel-bin/tensorflow/tools/pip_package/build_pip_package /home/user/build/tensorflow_pkg
pip install /home/user/build/tensorflow_pkg/tensorflow-2.0.0-cp37-cp37m-linux_x86_64.whl
 
pip install grpcio
pip install gast
```
bazel  no io_bazel_rules_docker
```
vi WORKSPACE add 
http_archive(
    name = "io_bazel_rules_docker",
    sha256 = "aed1c249d4ec8f703edddf35cbe9dfaca0b5f5ea6e4cd9e83e99f3b0d1136c3d",
    strip_prefix = "rules_docker-0.7.0",
    urls = ["https://github.com/bazelbuild/rules_docker/archive/v0.7.0.tar.gz"],
)
```
RST_STREAM with error code 8
```
Server terminated abruptly (error code: 1, error message: 'Received RST_STREAM with error code 8', log file: '/root/.cache/bazel/_bazel_root/d8d1c7aab7657a54086a1d98a3142dc8/server/jvm.out')
I guess it's because the memory, or swap too small (2G), or bazel not specify max memeory (eg = 2G), or tensorflow contains java code (bazel need openjdk-11-jdk)
```
