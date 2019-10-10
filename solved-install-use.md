## Ubuntu 环境 只用图像界面
#### 系统配置
```
# 常备U盘 真机编译运行 开发环境 图形化IDE 视觉图像开发
Q: Ubuntu18 U盘安装 出现 failed to load ldlinux.c32
A: 修改 写入方式 为 RAW (之前一直用HDD+)

mv /etc/apt/sources.list /etc/apt/sources.list.backup
vi 

deb http://mirrors.aliyun.com/ubuntu/ bionic main restricted universe multiverse
deb http://mirrors.aliyun.com/ubuntu/ bionic-security main restricted universe multiverse
deb http://mirrors.aliyun.com/ubuntu/ bionic-updates main restricted universe multiverse
deb http://mirrors.aliyun.com/ubuntu/ bionic-proposed main restricted universe multiverse
deb http://mirrors.aliyun.com/ubuntu/ bionic-backports main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ bionic main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ bionic-security main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ bionic-updates main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ bionic-proposed main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ bionic-backports main restricted universe multiverse

apt update
apt upgrade
```
proxy
```
vi /etc/profile
export http_proxy=http://192.168.0.106:1080
export https_proxy=https://192.168.0.106:1080
source /etc/profile
```
常用命令
```
tar -zxvf ..tar.gz
tar zxvf ***.rar
```
PATH
```
vi /etc/profile
PATH="$PATH:/root/bin"
export PATH
source /etc/profile

Or terminal
export PATH="$PATH:$HOME/bin"
export PATH="$PATH:/root/bin"
```
SWAP Memory
```
swapon -s
swapoff /swapfile
dd if=/dev/zero of=/swapfile bs=1M count=12288
mkswap /swapfile
swapon /swapfile
swapon -s

free -m
cfdisk /dev/sda

```
#### virtual Python
##### anaconda
``` 
wget -c https://mirrors.tuna.tsinghua.edu.cn/anaconda/miniconda/Miniconda*****-Linux-x86_64.sh
chmod 777 **.sh
bash **.sh
cd /root/miniconda3/bin
chmod 777 activate 
source ./activate
source ./deactivate
(base)$ conda list

not know below add channel is userful; have tested it's necessary to install package
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/free/
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/main/
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud/conda-forge/
conda config --add channels https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud/bioconda/

conda config --get channels
vi ~/.condarc
conda install 软件名=版本号
conda search **
conda list
witch 软件名  find location
conda update/remove **

conda env list  OR  conda info --envs
conda create -n tf2 python=3.7
conda activate tf2
conda deactivate

conda create -n python3.7 --clone test1
conda remove -n test1 --all
```
#### auto build
##### bazel
```
sudo apt-get install pkg-config zip g++ zlib1g-dev unzip (python3)
Download wget -C  OR windows file share
  bazel-<version>-installer-linux-x86_64.sh
   from https://github.com/bazelbuild/bazel/releases Assets
chmod +x bazel-<version>-installer-linux-x86_64.sh
./bazel-<version>-installer-linux-x86_64.sh --user
export PATH="$PATH:$HOME/bin"
  bazel build java code
sudo apt-get install openjdk-11-jdk
```
#### TensorFlow
bazel build --jobs 2 --local_resources=2048,1,1 --config=opt //tensorflow/tools/pip_package:build_pip_package

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


#### Computer Vision 环境
```
Docker 镜像
docker pull spmallick/opencv-docker:opencv


Ubuntu 18 Graphical
# 安装依赖
apt install -y build-essential cmake git pkg-config libgtk2.0-dev libopenexr-dev
apt install -y gfortran libblas-dev liblapack-dev libeigen3-dev
apt install -y python-dev python-numpy libtbb2 libtbb-dev libjpeg-dev libpng-dev libtiff-dev libdc1394-22-dev libjasper-dev
apt install -y libgstreamer1.0-dev libgstreamer-plugins-base1.0-dev
apt install -y libavcodec-dev libavformat-dev libswscale-dev libavutil-dev libavresample-dev libxvidcore-dev libx264-dev libv4l-dev

q:error#: unable to locate libjasper-dev
a: add-apt-repository "deb http://security.ubuntu.com/ubuntu xenial-security main"
 apt update
 apt install libjasper-dev (libjasper1是其依赖)

# 编译代码
去掉版本号，opencv目录 和 opencv_contrib 位于同一层级 opencv-4.1.1 目录下
cd opencv
mkdir build
cd build
按需配置make参数
cmake -D 

q: /../../opencv_contrib/modules 错误的路径
# 从Win共享源码

https://www.cnblogs.com/journeyonmyway/p/10320837.html
```
apt install python-numpy
# pip install numpy
apt install python-matplotlib
# pip install matplotlib
apt install libopencv-dev python-opencv

### CentOS 环境 只最小化安装使用命令行 作为 服务器运行
#### 系统配置
```
cd /etc/sysconfig/network-scripts
ls
vi ifcfg-enp***
ONBOOT=yes
service network restart
ip addr
ssh -p 22 user@IPaddress
```

#### docker环境
```bash
# offical yum remove docker docker-client docker-client-latest docker-common docker-latest docker-latest-logrotate docker-logrotate docker-engine
# mine 
yum remove docker docker-common docker-selinux docker-engine
yum install -y yum-utils device-mapper-persistent-data lvm2
wget -o /etc/yum.repos.d/docker-ce.repo http://mirrors.aliyun.com/docker-ce/linux/centos/docker-ce.repo # two files
mv docker-ce.repo.1 docker-ce.repo
mv: overwrite '**'? y
yum makecache fast
yum install docker-ce -y
systemctl enable docker
systemctl start docker

# 阿里云Docker加速器
vim /etc/docker/daemon.json
{
  "registry-mirrors": ["https://**.mirror.aliyuncs.com"] #aliyun zhuanshu jingxiang jiasuqi
}
systemctl daemon-reload
systemctl restart docker

docker run hello-world
docker run -it ubuntu bash

docker images
```

#### Ubuntu 下的依赖
常见：
build-essential
cmkae
git

不常见：
pkg-config
libgtk2.0-dev
libopenexr-dev
gfrotran


make
如何配置 make 参数

将来 云服务自动控制All

### 17inch Macbook Pro 环境
```bash
sudo su
cd /etc
vi hosts
127.0.0.1 www.domain.com #屏蔽网址
```

### Win10 环境
#### Win10 必选环境
```
Windows设置文件夹共享，运行 ，添加新的本地账户file，
mac Ubuntu, Connect to Server: smb://192.168.0.106/ 输入user和密码
```


#### Win10 未来环境




#### Linux 用到的命令 和 附加配置 
Ubuntu Skills[https://wiki.ubuntu.org.cn/UbuntuSkills]
```
cat /etc/issue #not work in CentOS 7
sudo lsb_release -a #not work
cat /etc/lsb-releae #not work

cat /proc/version #kernel version
uname -a -s -n -r -v -m -p -i -o

```


### 安装过 但无用 已卸载 已废弃
##### CentOS install graphical user interface
yum -y groups install "GNOME Desktop"
ln -sf /lib/systemd/system/runlevel5.target /etc/systemd/system/default.target





##### Java
```bash
javac
java -version
su root
yum search java
yum -y install java-*.*.*-openjdk-devel.x86_64
cd /usr/lib/jvm/...-*.*.*-.../lib
ls
# show tools.jar dt.jar

cd .
pwd
# copy the output
vim /etc/profile
export JAVA_HOME=/usr/lib/jvm/**
# paste; do NOT add / at the end of line.
export PATH=$JAVA_HOME/bin:$PATH
export CLASSPATH=.:$JAVA_HOME/lib/dt.jar:$JAVA_HOME/lib/tools.jar
source /etc/profile
javac #testOver
```

### Not use IDE 使用

#### IntelliJ IDEA
New -> Spring Initializr 
-> 
Group:(com.project com.demo com.test) com.aliyun.toolkit
Artifact: demo
Name: AliyunECSDemo
-> 
Dependencies (Web->Spring Web)
->
Project name: SpringBootAliyunECSDemo
Project location: ~/dev/**
-> Finish


Tip of the Day
^Space (Twice) (^Ctrl) - Code Completion

#### Eclipse EE + STS
Spring Boot
Eclipse Help -> Eclipse Marketplace -> Search Spring ide -> Select Spring Tools Suite 4 -> Install
```
https://start.spring.io

依次选择 Maven Project
Java (Language)
2.18 (Spring Boot最新稳定版本)

Maven 工程的项目坐标、项目描述信息
Project Metadata
 test.company (Group)
 demo (Artifact[=artefact人工制品])
Options
 demo (Name)
 Demo project for Spring Boot (Description)
 test.company.demo (Package Name)
 Jar (Packaging) [Spring Boot 内嵌了 Servlet容器，打成 Jar包后可以直接运行]
 8 (Java 构建的JDK版本)

Dependencies
 输入关键字，如web，先加入 web依赖。Spring Web依赖

点击 Generate 按钮

将下载下来的项目解压，用 IntelliJ IDEA 或 Eclipse 打开

56t
```
#### Android Studio
```
tar -zxvf AS.tar.gz
cd android-studio/bin
./studio.sh

SDK代理
Auto-detect 
mirrors.opencas.cn:80
mirrors.neusoft.edu.cn:80
Gradle 代理
Proxy 局域网地址:1080

s: the colors in values has on declaration in base values folder
h: restart AS

q:Add Module Dependency: Nothing to show
s:手动编辑两个build.gradle文件，特别注意 apply plugin: 'com.android.library'

q:
Cannot Resolve setOnClickLlistener
Cannot Resolve OnClickListener
s: View.setOnClickListener(new View.OnClickListener() {
    public void onClick(View) {};
    });

q: Cannot Resolve this.getResources() this.findViewById
s: ActivityName.this.**
 getApplicationContext 不清楚的另一种方法
 
q: Native method not found: org.opencv.core.Mat.n_Mat:()
s: new BaseLoaderCallback() {}
 OpenCVLoader.initAsync()

q: bash: adb: command not found
s: vi ~/.bash_profile
export ANDROID_HOME=/Users/nengzhang/Library/Android/sdk
export PATH=$ANDROID_HOME/platform-tools:$PATH
export PATH=$ANDROID_HOME/tools:$PATH

q: sdk command
s: adb install /Users/**/**.apk

q: arm64-v8a  armeabi-v7a
s: 一般使用eabi-v7a

q:OpenCV was not initialized correctly. Application will be shut down.
s: adb install from armeabi-v7a.apk to arm64-v8a.apk
 maybe apk version should equal or higher the opencv-android-sdk-version.

f: OpenCV Manager被从后台杀掉进程 从内存中删除后，打开App会出现 OpenCV Manager package was not found! Try to install it.


```



### Not use just collect from webpage
#### 命令
```
sudo apt-get update  更新源
sudo apt-get install package 安装包
sudo apt-get remove package 删除包
sudo apt-cache search package 搜索软件包
sudo apt-cache show package  获取包的相关信息，如说明、大小、版本等
sudo apt-get install package --reinstall  重新安装包
sudo apt-get -f install  修复安装
sudo apt-get remove package --purge 删除包，包括配置文件等
sudo apt-get build-dep package 安装相关的编译环境
sudo apt-get upgrade 更新已安装的包
sudo apt-get dist-upgrade 升级系统
sudo apt-cache depends package 了解使用该包依赖那些包
sudo apt-cache rdepends package 查看该包被哪些包依赖
sudo apt-get source package  下载该包的源代码
sudo apt-get clean && sudo apt-get autoclean 清理无用的包
sudo apt-get check 检查是否有损坏的依赖
```


#### Not Use Win10 可选环境 测试 试过之后想删就删

##### OpenCV 环境
```
Win10
官网下载OpenCV exe最新exe自解压安装包，解压到 C:\opencv4.1.1
github.com/opencv/opencv_contrib release 下载 opencv_contrib-4.1.1.zip，解压到 C:\opencv4.1.1\sources\contrib
Cmake官网 cmake-gui msi安装文件 下载 安装 设置PATH for all users
Visual Studio Community 最新版 下载安装

cmake-gui 界面 填写
 Source code: C:/opencv4.1.1/sources
 build the linaries: C:/**/build
点击 Configure

q: The CXX/C compier identificatioin is unhnown
w: vs 2019 的 C++ 模块没有被完全安装
h: 开始菜单 选择 Visual Studio Installer 更新后 左边大选项选择通用Windows平台开发 右边小选项添加选择 C++(v142)通用Windows平台工具 ->点击 全部下载后再安装 点击修改
a: C++ Linux环境 功能模块
```
