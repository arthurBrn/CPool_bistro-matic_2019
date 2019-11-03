##
## EPITECH PROJECT, 2019
## Make file tests
## File description:
## create exe unit_test
##

SRC	=	test_eval_expr_2.c\
		../eval_expr.c\
		test_my_to_char.c\
		test_my_do_op.c\
		test_my_revstr.c\
		test_return_res.c\
		test_parenthesis.c\
		test_my_concat_strings.c\
		test_nbr_of_sign.c


#../eval_expr.c\
#		eval_expr_test_2.c\
#		test_eval_expr_return_res.c


CFLAGS	=	-I../include/

LDFLAGS	=	-Wall -Wextra --coverage -lcriterion -lgcov

OBJ	=	$(SRC:%.c=%.o)

CC	=	gcc

NAME	=	unit_test

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) -L../lib/ -lmy

clean:
		rm -f $(OBJ)

fclean: 	clean
		$(RM)  $(NAME)
		$(RM) $(OBJ)
re: 		fclean all
