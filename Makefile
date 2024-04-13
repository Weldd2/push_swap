NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

LIBFT = libft/libft.a
FTPRINTF = libft/libftprintf.a

SRC = main.c parse_arg.c node.c node_utils.c push.c swap.c rotate.c rrotate.c algo.c math.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(FTPRINTF)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all
	$(MAKE) clean
	clear
	./push_swap 2 5 7 1 6 3 9 4 8