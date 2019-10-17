FROM debian:9.8

EXPOSE 22 80 443
RUN apt-get update && apt-get -y upgrade
RUN apt-get -y install curl openssh-server ca-certificates postfix
RUN curl -LO https://packages.gitlab.com/install/repositories/gitlab/gitlab-ce/script.deb.sh
RUN chmod 777 ./script.deb.sh && ./script.deb.sh
#RUN EXTERNAL_URL="http://gitlab.example.com" When you do get one...
RUN apt install -y gitlab-ce
ENTRYPOINT (/opt/gitlab/embedded/bin/runsvdir-start &) && gitlab-ctl reconfigure && /bin/bash



#apt-get update
#apt-get install -y build-essential libpq-dev nodejs sqlite3 rails gem git
#git clone https://github.com/ZY1N/ruby_hello_world.git
#cd ruby_hello_world/blog/
#gem install bundler:2.0.2


#docker build -t ex03 .
#docker run -it --rm -p 8080:80 -p 8022:22 -p 8443:443 --privileged  ex03