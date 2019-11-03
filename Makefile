##
## EPITECH PROJECT, 2019
## Make file lib
## File description:
## create exe

SRC	=	print_help.c\
		eval_expr.c\
		main.c\
#infin_add.c\

CC	=	gcc

CFLAGS	=	-W -Wall -pipe -I./include/ -g -Og

OBJ	=	$(SRC:%.c=%.o)

NAME	=	calc

all:		$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C ./lib
		$(CC) -o $(NAME) $(OBJ) -L./lib -lmy $(CFLAGS)

clean:
		rm -f $(OBJ)
		$(MAKE) -C ./lib clean

fclean: 	clean
		rm -f $(NAME)
		$(MAKE) -C ./lib fclean

re:		all
