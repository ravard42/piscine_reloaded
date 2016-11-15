CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SRC = srcs/main.c\
	srcs/ft_putstr.c\

OBJ = $(SRC:.c=.o)
INCLUDE = -I includes

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)

%.o : %.c
	$(CC) -o $@ -c $< $(INCLUDE) $(FLAGS)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
