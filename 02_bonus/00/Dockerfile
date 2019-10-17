# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 12:25:35 by yinzhang          #+#    #+#              #
#    Updated: 2019/10/17 12:25:37 by yinzhang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM ubuntu

RUN apt-get update
RUN apt-get install git python vim -y
#RUN apt-get install apt-get install python-pip
#RUN pip install turtle
#RUN apt-get install python-tk -y
RUN git clone https://github.com/ZY1N/Python-Fractal-Snake.git
RUN touch job.sh
RUN echo "#!/bin/sh\npython ./Python-Fractal-Snake/python.py\nsleep 2m" > job.sh
#RUN touch hi.py
#RUN echo "print(\"helloworld!\")" > hi.py

#RUN echo "while True:\n    print(\"hello world\")" > infinite.py

#RUN echo "import random\nimport curses\n\ns = curses.initscr()\ncurses.curs_set(0)\nsh, sw = s.getmaxyx()\nw = curses.newwin(sh, sw, 0, 0)\nw.keypad(1)\nw.timeout(25)\n\nsnk_x = sw/4\nsnk_y = sh/2\nsnake = [\n	    [snk_y, snk_x],\n    [snk_y, snk_x-1],\n    [snk_y, snk_x-2]\n]\n\nfood = [sh/2, sw/2]\nw.addch(food[0], food[1], curses.ACS_PI)\n\nkey = curses.KEY_RIGHT\n\nwhile True:\n    next_key = w.getch()\n    key = key if next_key == -1 else next_key\n\n    if snake[0][0] in [0, sh] or snake[0][1] in [0, sw] or snake[0] in snake[1:]:\n    	curses.endwin()\n    	quit()\n\n    new_head = [snake[0][0], snake[0][1]]\n\n    if key == curses.KEY_DOWN:\n    	new_head[0] += 1\n    if key == curses.KEY_UP:\n    	new_head[0] -= 1\n    if key == curses.KEY_LEFT:\n    	new_head[1] -= 1\n    if key == curses.KEY_RIGHT:\n    	new_head[1] += 1\n\n    snake.insert(0, new_head)\n\n    if snake[0] == food:\n        food = None\n        while food is None:\n            nf = [\n	        random.randint(1, sh-1),\n                random.randint(1, sw-1)\n	    ]\n	    food = nf if nf not in snake else None\n        w.addch(food[0], food[1], curses.ACS_PI)\n    else:\n        tail = snake.pop()\n        w.addch(tail[0], tail[1], ' ')\n\n    w.addch(snake[0][0], snake[0][1], curses.ACS_CKBOARD)" > infinite.py

ENTRYPOINT python ./Python-Fractal-Snake/python.py
# && python infinite.py

#########################################################

#docker build -t snake .
#docker run -it --rm snake
#sh job.sh
