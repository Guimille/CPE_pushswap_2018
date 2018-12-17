##
## EPITECH PROJECT, 2018
## make file pushswap
## File description:
## 1
##

SRCS= ./src/my_pushswap.c \
      ./src/my_putchar.c \
      ./src/my_getnbr.c \
      ./src/my_put_nbr.c \
      ./src/my_strlen.c \
      ./src/my_swap.c \
      ./src/my_functions.c \
      ./src/my_putstr.c

CC = gcc

NAME = push_swap

CFLAGS += -Wextra -Wall -Werror
CFLAGS += -ansi -pedantic
CFLAGS += -I.

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) -g

clean:
	rm -rvf $(OBJS)

fclean:		clean
	rm -rvf $(NAME)

re: fclean all

.PHONY: all clean fclean re
