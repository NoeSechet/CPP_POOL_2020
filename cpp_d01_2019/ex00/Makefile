##
## EPITECH PROJECT, 2020
## cpp_d01_2019
## File description:
## Makefile
##

NAME	= z

CC	= gcc

RM	= rm -f

SRCS = ./z.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I
CFLAGS += -Wall -Wextra -std=gnu11

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
