# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 12:24:50 by yinzhang          #+#    #+#              #
#    Updated: 2019/10/17 12:24:51 by yinzhang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM ft-rails:on-build
EXPOSE 3000
#WORKDIR ruby_hello_world/blog/
WORKDIR /opt/app/blog
CMD ["rails", "s", "-b", "0.0.0.0", "-p", "3000"]

#build the image of the ft-rails folder
#docker build -t ft-rails:on-build .

#build this image
#docker build -t ex02 .

#run this image
#docker run -it --rm -p 3000:3000 ex02
