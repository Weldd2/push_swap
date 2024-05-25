NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = char/ft_isalnum.c char/ft_isalpha.c char/ft_isascii.c char/ft_isdigit.c char/ft_isprint.c \
       char/ft_tolower.c char/ft_toupper.c convert/ft_atoi.c convert/ft_atoi_base.c convert/ft_bin_to_int.c \
       convert/ft_itoa.c get_next_line/ft_get_next_line.c get_next_line/ft_get_next_line_utils.c \
       io/ft_putchar_fd.c io/ft_putendl_fd.c io/ft_putnbr_fd.c io/ft_putstr_fd.c \
       list/ft_lstadd_back.c list/ft_lstadd_front.c list/ft_lstclear.c list/ft_lstdelone.c list/ft_lstiter.c \
       list/ft_lstlast.c list/ft_lstmap.c list/ft_lstnew.c list/ft_lstsize.c \
       math/ft_pow.c math/ft_abs.c mem/ft_bzero.c mem/ft_calloc.c mem/ft_memchr.c mem/ft_memcmp.c mem/ft_memcpy.c  mem/ft_freetab.c \
       mem/ft_free.c mem/ft_memmove.c mem/ft_memset.c mem/ft_realloc.c str/ft_split.c str/ft_str_end_with.c str/ft_str_start_with.c \
       str/ft_strchr.c str/ft_strdup.c str/ft_strequals.c str/ft_striteri.c str/ft_strjoin.c str/ft_strlcat.c \
       str/ft_strlcpy.c str/ft_strlen.c str/ft_strmapi.c str/ft_strncmp.c str/ft_strnstr.c str/ft_strrchr.c \
       str/ft_strtrim.c str/ft_substr.c
SRCSBONUS = list/ft_lstnew.c list/ft_lstadd_front.c list/ft_lstsize.c list/ft_lstlast.c list/ft_lstadd_back.c \
            list/ft_lstdelone.c list/ft_lstclear.c list/ft_lstiter.c list/ft_lstmap.c
OBJS = $(SRCS:.c=.o)
OBJSBONUS = $(SRCSBONUS:.c=.o)
HEADERS = libft.h char/char.h convert/convert.h get_next_line/ft_get_next_line.h io/io.h list/list.h mem/mem.h str/str.h

debug: CFLAGS+=-g

ifeq ($(OS),Windows_NT)
	RM = cmd /c del /Q /F
else
	RM = rm -rf
endif

all: $(NAME)

debug: $(NAME)

bonus: $(OBJS) $(OBJSBONUS)
	ar rcs $(NAME) $(OBJS) $(OBJSBONUS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus debug
