FROM ubuntu:latest
    LABEL maintainer="kosarevsky2000@yandex.ru"
    RUN apt-get update
    RUN apt-get install -y clang
    WORKDIR /root/test/
    COPY HomeWorkMult-5-2.cpp .
    RUN clang++ HomeWorkMult-5-2.cpp -o HomeWorkMult-5-2-clang
    CMD ["./HomeWorkMult-5-2-clang"]