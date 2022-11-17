# MyIsMy
我的小鸡是我的，你的小鸡是你的。拒绝OneMan拒绝超售！ not Share，not Idle        


# Debian    

```
apt update && apt install gcc -y    

wget --no-check-certificate https://raw.githubusercontent.com/cppla/MyIsMy/main/real.c && gcc real.c -o real && ./real    
```

# Centos

```
yum update && yum install gcc -y    

wget --no-check-certificate https://raw.githubusercontent.com/cppla/MyIsMy/main/real.c && gcc real.c -o real && ./real    
```

# 加入后台    
```
nohup ./real &
```    

# Docker    
```
docker build -f Dockerfile -t real .
docker run -d --restart=always --name=real  real
```
