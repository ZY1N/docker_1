#build the image
docker build -t teamspeak3 .

#start the container
docker run -it --rm --name teamspeak3 -p 9987:9987/udp -p 10011:10011 -p 30033:30033 teamspeak3