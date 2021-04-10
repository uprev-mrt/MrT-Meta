FROM alpine:3.9


RUN apk add --no-cache -q -f git cmake make g++ valgrind python3 python3-pip openssh bash


RUN git clone -q https://github.com/google/googletest.git /googletest \
  && mkdir -p /googletest/build \
  && cd /googletest/build \
  && cmake .. && make && make install \
  && cd / && rm -rf /googletest

ARG PASSWORD

RUN pip3 install polypacket 
RUN pip3 install mrtutils

RUN adduser -S dev 
RUN adduser -S jenkins

# Installing the openssh and bash package, removing the apk cache

RUN sed -i s/#PermitRootLogin.*/PermitRootLogin\ yes/ /etc/ssh/sshd_config \
    && echo "root:${PASSWORD}" | chpasswd \
    && rm -rf /var/cache/apk/*
# Defining the Port 22 for service
RUN sed -ie 's/#Port 22/Port 22/g' /etc/ssh/sshd_config
RUN /usr/bin/ssh-keygen -A
RUN ssh-keygen -t rsa -b 4096 -f  /etc/ssh/ssh_host_key
ENV NOTVISIBLE "in users profile"
RUN echo "export VISIBLE=now" >> /etc/profile
EXPOSE 22
CMD ["/usr/sbin/sshd", "-D"]