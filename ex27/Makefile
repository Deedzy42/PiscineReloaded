# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 17:39:17 by amoachon          #+#    #+#              #
#    Updated: 2018/11/28 17:39:19 by amoachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAGS = -Wall -Werror -Wextra
SRCS = main.c
OBJS = main.o

all : $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRCS)
	gcc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
