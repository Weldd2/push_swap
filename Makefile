NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

LIBFT_DIR = libft
PRINTF_DIR = $(LIBFT_DIR)/printf

LIBFT = $(LIBFT_DIR)/libft.a
FTPRINTF = $(PRINTF_DIR)/libftprintf.a

SRC = main.c \
	instructions/push.c instructions/swap.c instructions/rotate.c instructions/rrotate.c \
	algorithm/algo.c \
	node/node.c node/node_utils.c \
	parsing/parse_arg.c

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(FTPRINTF) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(FTPRINTF):
	$(MAKE) -C $(PRINTF_DIR)

$(NAME): $(OBJ) $(LIBFT) $(FTPRINTF)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(FTPRINTF)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

run :
	$(MAKE) all
	$(MAKE) clean
	clear
	./push_swap 5 2 7 1 6 3 9 4 8