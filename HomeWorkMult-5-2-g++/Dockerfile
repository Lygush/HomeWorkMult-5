FROM ubuntu:latest
    LABEL maintainer="kosarevsky2000@yandex.ru"
    RUN apt-get update
    RUN apt-get install -y g++
    WORKDIR /root/test/
    COPY HomeWorkMult-5-2.cpp .
    RUN g++ HomeWorkMult-5-2.cpp -o HomeWorkMult-5-2-g++
    CMD ["./HomeWorkMult-5-2-g++"]