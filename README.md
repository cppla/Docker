# Docker
Docker collection by  cpp.la

# clickhouse-cluster-for-arm
快速拉起ClickHouse on ARM64    

# unixbench
快速测试服务器CPU性能   

docker build -f unixbench/Dockerfile -t unixbench .    
docker run -ti --name=unixbench unixbench ./Run    

# MyIsMy
榨干闲置的服务器资源

docker build -f Dockerfile -t real .    
docker run -d --restart=always --name=real  real 
