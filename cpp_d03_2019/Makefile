##
## EPITECH PROJECT, 2020
## cpp_d03_2019
## File description:
## Makefile
##

NAME	=	libstring.a

NAME_COMPILE	=	prog

RM	= rm -f

SRCS	=	string00.c\
			string01.c\
			string02.c\
			string03.c\
			string04.c\
			string05.c\
			string06.c\
			string07.c\
			string08.c\
			string09.c\
			string10.c\
			string11.c\
			string12.c\
			string13.c\

OBJS	= $(SRCS:.c=.o)

FLAGS	=	-Wall -Wextra -std=gnu11 -I./ -g3

all: $(NAME)

compile:	$(NAME)
	gcc main.c -L. -lstring $(FLAGS)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) *.o

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re