#https://www.hostinger.com/tutorials/how-to-make-a-teamspeak-3-server/ 

FROM debian

ENV TS3SERVER_LICENSE=accept
WORKDIR /home/teamspeak
EXPOSE 9987/udp 10011 30033
RUN apt-get update && apt-get -y upgrade && apt-get install -y wget bzip2
RUN wget https://files.teamspeak-services.com/releases/server/3.9.1/teamspeak3-server_linux_amd64-3.9.1.tar.bz2
RUN tar xvf teamspeak3-server_linux_amd64-3.9.1.tar.bz2

WORKDIR /home/teamspeak/teamspeak3-server_linux_amd64
ENTRYPOINT sh ts3server_minimal_runscript.sh

#from is the base container
#env needs to be set to accept
# we need to expose the ports so its possible to connect to via -p
# other stuff is self explainatory