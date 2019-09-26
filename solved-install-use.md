#### OpenCV
```
Ubuntu 18 Graphical


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
```
#### CentOS install
```bash
# CentOS

cd /etc/sysconfig/network-scripts
ls
vi ifcfg-enp***
ONBOOT=yes
service network restart

ip addr

ssh -p 22 user@IPaddress
```

```
Ubuntu
Q: Ubuntu18 U盘安装 出现 failed to load ldlinux.c32
A: 修改 写入方式 为 RAW (之前一直用HDD+)
```


#### Spring Boot
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

#### docker
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

#### Linux
Ubuntu Skills[https://wiki.ubuntu.org.cn/UbuntuSkills]
```
cat /etc/issue #not work in CentOS 7
sudo lsb_release -a #not work
cat /etc/lsb-releae #not work

cat /proc/version #kernel version
uname -a -s -n -r -v -m -p -i -o

```


##### CentOS install graphical user interface
yum -y groups install "GNOME Desktop"
ln -sf /lib/systemd/system/runlevel5.target /etc/systemd/system/default.target

#### Language
##### Python
```bash
apt install python-numpy
# pip install numpy
apt install python-matplotlib
# pip install matplotlib
apt install libopencv-dev python-opencv
```
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
