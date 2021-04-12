# TODO multistage build to build backend api based on os, then copy those over to front end and cli areas and build each
# FROM <image for building the c++ side> as base build
# WORKDIR ./API
# CMD run some build step for the backend

# COPY --from=build out/build/x86-Debug/UCI_lib/UCI_lib /out
# COPY --from=build out/build/x86-Debug/UCI_lib/UCI_lib/UCI_lib_x86 /out

FROM ubuntu:20.04 as dev

ENV DEBIAN_FRONTEND=noninteractive


# Install system dependencies
RUN apt update -qq && apt install -qq -y --no-install-recommends \
        gcc \
        git \
        g++ \
        wget \
        make \
        lcov \
        cmake \ 
        libgtest-dev \
        valgrind \
        python3\ 
        python3-pip\
        gdb \
        ca-certificates


# Add user dev to the image
RUN adduser --quiet dev && \
# Set password for the jenkins user (you may want to alter this).
    echo "dev:password" | chpasswd && \
    mkdir /home/dev/.m2 && \
    mkdir /home/dev/dev && \
    chown -R dev /home/dev 


RUN pip3 install polypacket 
RUN pip3 install mrtutils

#Stage to add jenkins support 
FROM dev as jenkins
RUN apt install apt install -qq -y --no-install-recommends openjdk-8-jdk  openssh-server ca-certificates
RUN adduser --quiet jenkins && \
# Set password for the jenkins user (you may want to alter this).
    echo "jenkins:jenkins" | chpasswd && \
    mkdir /home/jenkins/.m2 && \
    mkdir /home/jenkins/jenkins && \
    chown -R jenkins /home/jenkins 
#JENKINS END

# Setup SSH server
RUN mkdir /var/run/sshd
RUN echo 'root:password' | chpasswd
RUN sed -i 's/#*PermitRootLogin prohibit-password/PermitRootLogin yes/g' /etc/ssh/sshd_config

# SSH login fix. Otherwise user is kicked off after login
RUN sed -i 's@session\s*required\s*pam_loginuid.so@session optional pam_loginuid.so@g' /etc/pam.d/sshd

ENV NOTVISIBLE="in users profile"
RUN echo "export VISIBLE=now" >> /etc/profile

EXPOSE 22
CMD ["/usr/sbin/sshd", "-D"]
