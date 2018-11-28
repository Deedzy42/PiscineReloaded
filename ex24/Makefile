# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 17:36:24 by amoachon          #+#    #+#              #
#    Updated: 2018/11/28 17:36:27 by amoachon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCSDIR = ./srcs
FLAGS = -Wall -Werror -Wextra
SRCS = ft_putchar.c			\
	   ft_putstr.c			\
	   ft_strcmp.c			\
	   ft_strlen.c			\
	   ft_swap.c
OBJS = ft_putchar.o			\
	   ft_putstr.o			\
	   ft_strcmp.c			\
	   ft_strlen.o			\
	   ft_swap.o

all : $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRCDIR)/$(SRCS)
	ar rv $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

