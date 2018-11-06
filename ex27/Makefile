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
