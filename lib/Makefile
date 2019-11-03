##
## EPITECH PROJECT, 2019
## Make file libmy
## File description:
## create exe
##

SRC	=	my_putchar.c\
		parenthesis.c\
		my_putstr.c\
		my_put_nbr.c\
		my_str_isalpha.c\
		my_getnbr.c\
		my_strlen.c\
		my_char_num.c\
		find_priori_sign.c\
		my_atoi.c\
		my_do_op.c\
		my_to_char.c\
		my_revstr.c\
		find_regular_sign.c\
		my_number_shift.c\
		my_revstr2.c\
		my_find_sign.c\
		find_begin.c\
		my_strcmp.c\
		my_str_isnum.c\
		cut_str_one_sign.c\
		cut_str_several_signs.c\
		nbr_of_sign.c\
		concat_expr.c\

CFLAGS	=	-I../include/

OBJ	=	$(SRC:%.c=%.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re: 		fclean all
