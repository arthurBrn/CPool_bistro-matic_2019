##
## EPITECH PROJECT, 2019
## Make file lib
## File description:
## create exe

SRC	=	conv.c\
		print_help.c\
		main.c

CC	=	gcc

CFLAGS	=	-W -Wall -pipe -I./include/

OBJ	=	$(SRC:%.c=%.o)

NAME	=	eval_expr

all:		$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C ./lib
		$(CC) -o $(NAME) $(OBJ) -L./lib -lmy

clean:
		rm -f $(OBJ)
		$(MAKE) -C ./lib clean

fclean: 	clean
		rm -f $(NAME)
		$(MAKE) -C ./lib fclean

re:		all
