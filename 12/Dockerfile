FROM ubuntu:14.04

RUN apt-get update
RUN apt install -y strace gcc-multilib gdb-multiarch nano bsdmainutils hexcurse build-essential

RUN mkdir /demo
WORKDIR /demo
COPY Makefile *.c .
RUN sed -ie 's/-no-pie//' Makefile

