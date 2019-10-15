#getting base image
# or... FROM Scratch
FROM alpine

#run gets executed during building of image
RUN apk update && apk upgrade && apk add vim

#where the app does first
ENTRYPOINT vim

#things to do 
#docker build -t NAME .
  #the name is the name of the image -t tag 
  # the "." is to tell it the dockerifle is in the local dir

#to run
#docker run -it --rm NAME
