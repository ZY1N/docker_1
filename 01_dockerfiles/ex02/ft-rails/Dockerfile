FROM debian

RUN apt-get update
RUN apt-get install -y build-essential libpq-dev nodejs sqlite3 rails gem git

ONBUILD COPY app /opt/app
ONBUILD WORKDIR /opt/app/blog
ONBUILD EXPOSE 3000

ONBUILD RUN gem install bundler:2.0.2
#ONBUILD RUN git clone https://github.com/ZY1N/ruby_hello_world.git
