# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 14:23:05 by ekolehma          #+#    #+#              #
#    Updated: 2019/10/28 14:21:53 by ekolehma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILENAME = testfunctions

SRCS = ./test_*.c ./main.c

OBJECTS = ./test_*.o ./main.o

HEADER = ./includes

LIBRARY = libft.a

FLAGS = -Wall -Wextra -Werror

all: $(FILENAME)

$(FILENAME):
	gcc -c $(FLAGS) $(SRCS) -I $(HEADER)
	gcc -o $(FILENAME) $(OBJECTS) libft.a

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(FILENAME)

re: fclean all
