CC = gcc

CFLAGS += -c -Wall -Wextra -Werror -I.

SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c \

SRC_FILES = $(SRCS)

OBJS = $(SRC_FILES:.c=.o)

NAME = libft.a

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)



