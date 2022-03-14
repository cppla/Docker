FROM debian:latest

MAINTAINER cppla https://cpp.la

RUN apt update && apt install -y wget make libtime-hires-perl time procps file gcc locales && wget --no-check-certificate http://dl.cpp.la/Shell/UnixBench.tgz && tar -zxvf UnixBench.tgz 

WORKDIR /UnixBench
