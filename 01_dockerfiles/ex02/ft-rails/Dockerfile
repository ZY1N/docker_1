# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 12:24:57 by yinzhang          #+#    #+#              #
#    Updated: 2019/10/17 12:24:58 by yinzhang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian

RUN apt-get update
RUN apt-get install -y build-essential libpq-dev nodejs sqlite3 rails gem git

ONBUILD COPY app /opt/app
ONBUILD WORKDIR /opt/app/blog
ONBUILD EXPOSE 3000

ONBUILD RUN gem install bundler:2.0.2
#ONBUILD RUN git clone https://github.com/ZY1N/ruby_hello_world.git
