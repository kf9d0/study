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

### Ubuntu 环境 只用图像界面
#### 系统配置
```
# 常备U盘 真机编译运行 开发环境 图形化IDE 视觉图像开发
Q: Ubuntu18 U盘安装 出现 failed to load ldlinux.c32
A: 修改 写入方式 为 RAW (之前一直用HDD+)

```

#### Computer Vision 环境
```
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

vim /etc/docker/daemon.json
{
  "registry-mirrors": ["https://**.mirror.aliyuncs.com"] #aliyun zhuanshu jingxiang jiasuqi
}

docker run hello-world
docker run -it ubuntu bash

docker images
```


### Win10 环境
#### Win10 必选环境
```
Windows设置文件夹共享，运行 ，添加新的本地账户file，
mac Ubuntu, Connect to Server: smb://192.168.0.106/ 输入user和密码
```

#### Win10 可选环境 测试 试过之后想删就删

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

#### Win10 未来环境



### IDE 使用
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
