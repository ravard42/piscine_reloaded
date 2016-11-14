CC = gcc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = 	srcs/ft_putchar.c\
		srcs/ft_putstr.c\
	  	srcs/ft_strlen.c\
		srcs/ft_strcmp.c\
		srcs/ft_swap.c\

OBJ = $(SRC:.c=.o)
INCLUDE = ./includes

all : $(NAME)

$(NAME) : $(OBJ)
	ar -r $(NAME) $^

%.o : %.c
	$(CC) -o $@ -c $< -I $(INCLUDE) $(FLAGS)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
