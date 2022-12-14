
FROM ubuntu:18.04 as dev

#prevent prompts during installs
ENV DEBIAN_FRONTEND=noninteractive

#passwords as arguments so they can be changed
ARG DEV_PW=password
ARG JENKINS_PW=jenkins

ENV LC_CTYPE en_US.UTF-8
ENV LANG en_US.UTF-8




# Install system dependencies
RUN apt update -qq && apt install -qq -y --no-install-recommends \
        gcc \
        git \
        g++ \
        wget \
        make \
        lcov \
        cmake \ 
        doxygen \
        libgtest-dev \
        valgrind \
        python3\ 
        python3-pip\
        gdb \
        python3-setuptools \ 
        locales \
        astyle \
        plantuml \
        texlive \
        latexmk \
        texlive-science \
        texlive-formats-extra \ 
        tex-gyre 




#For Ubuntu Versions older than 20.04, the gtest lib must be built and installed manually for CMake integration
WORKDIR /usr/src/gtest
RUN cmake CmakeLists.txt
RUN make 
RUN make install

# Add user dev to the image
RUN adduser --quiet dev && \
    echo "dev:$DEV_PW" | chpasswd && \
    chown -R dev /home/dev 


RUN pip3 install mrtutils Sphinx breathe sphinx_rtd_theme recommonmark sphinxcontrib-plantuml


#Copy the latest release of plantuml. Ubuntu 18.04 package manager has an older one without timing diagram support
RUN wget https://github.com/plantuml/plantuml/releases/download/v1.2022.1/plantuml-1.2022.1.jar -O /usr/share/plantuml/plantuml.jar

######################################################################################################
#                           Stage: jenkins                                                           #
######################################################################################################
FROM dev as jenkins

ARG JENKINS_PW

ENV LC_CTYPE en_US.UTF-8
ENV LANG en_US.UTF-8


#install jenkins dependencies
RUN apt install -qq -y --no-install-recommends openjdk-8-jdk  openssh-server ca-certificates
RUN adduser --quiet jenkins && \
    echo "jenkins:$JENKINS_PW" | chpasswd && \
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
