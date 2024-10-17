FROM ubuntu:latest

RUN apt update && apt install -y emacs-nox vim build-essential autoconf cmake git golang-go openmpi-bin libopenmpi-dev

COPY testing/aws-s3.sh /
WORKDIR /
RUN ./aws-s3.sh

COPY . /ior
WORKDIR /ior

