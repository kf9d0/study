Docker CE
```
sudo apt-get remove docker docker-engine docker.io
sudo apt-get install apt-transport-https ca-certificates curl gnupg2 software-properties-common
curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo apt-key add 
sudo add-apt-repository \
   "deb [arch=amd64] https://mirrors.tuna.tsinghua.edu.cn/docker-ce/linux/ubuntu \
   $(lsb_release -cs) \
   stable"
sudo apt-get update
sudo apt-get install docker-ce
systemctl enable docker
systemctl start docker

# 阿里云Docker加速器
sudo mkdir -p /etc/docker
sudo tee /etc/docker/daemon.json <<-'EOF'
{
  "registry-mirrors": ["https://**.mirror.aliyuncs.com"] #aliyun zhuanshu jingxiang jiasuqi
}
EOF
sudo systemctl daemon-reload
sudo systemctl restart docker

docker run hello-world
docker run -it ubuntu bash
docker run -it centos /bin/bash

docker ps -a  # Look up containerID
sudo docker cp host_path containerID:container_path
sudo docker cp containerID:container_path host_path

docker commit containerID(root@...) ubuntu-test(ImageName)

docker images | grep ubuntu-test
docker inspect ubuntu-test


docker run -it ubuntu-test [bash]

docker container ls -a     #获得容器信息
docker container ls -a  -p   #获得容器id
docker container stop <container ID>
docker container rm  <container ID>
docker container stop $(docker container ls -a -q)
docker container rm $(docker container ls -a -q)

docker  tag  旧镜像名  新镜像名
docker  tag  镜像id  仓库：标签
docker rmi <Repository:tag>
docker image rm ImageID
```
