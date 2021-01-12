##
## EPITECH PROJECT, 2020
## cpp_d06_2019
## File description:
## Makefile
##

NAME	= my_cat

CC	= g++

RM	= rm -f

SRCS	= ./cat.cpp

OBJS	= $(SRCS:.cpp=.o)

CPPFLAGS = -I
CPPFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re