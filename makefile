NAME = exo

SRC = ft_strlen.c\
					ft_putstr.c\
					ft_putchar.c\
					ft_itoa.c\
					ft_calloc.c\
					ft_memset.c\
					ex1.c\
					ex2.c\
					ex3.c\
					ex4.c\
					ex5.c\
					main.c

CC = gcc

CFLAGS = -Werror -Wextra -Wall

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) $(SRC)

all : $(NAME)

clean : 
		rm -rf $(OBJ)

fclean : clean 
		rm -rf $(NAME)
re : fclean all