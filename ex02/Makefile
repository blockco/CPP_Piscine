# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpassafa <rpassafa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 20:49:58 by rpassafa          #+#    #+#              #
#    Updated: 2017/07/03 20:50:51 by rpassafa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: tests.o
	g++ -o tests tests.o Account.class.o
tests.o:
	g++ -c tests.cpp Account.class.cpp
clean:
	rm -f tests.o Account.class.o
fclean: clean
	rm -f tests
re: fclean all
