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
