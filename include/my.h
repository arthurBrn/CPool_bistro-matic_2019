/*
** EPITECH PROJECT, 2019
** all my_*.c
** File description:
** all fonctions day01-08
*/

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2, int i1, int i2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char *my_strcpy(char *dest, char const *src);
char *concat_params(int argc, char **argv);
int my_show_word_array(char * const *tab);
char *my_strdup(char const *src);
char **my_str_to_word_array(char const *str);
char *my_strncpy(char *dest, char const *src, int n);
int my_char_num(char c);
int find_priori_sign(char c);
int my_atoi(char *str);
char *my_do_op(char *part_calc, int sign, int bf_sign, int af_sign);
char *my_to_char(int expression, int size);
char *my_revstr(char *str);
int find_regular_sign(char c);
int find_open_par(char const *str, int i);
int find_end_par(char const *str);
char *find_expr_in_par(char const *str);
void my_revstr2(unsigned char **str);
void my_number_shift(unsigned char **resptr);
int my_find_sign(char *av);
int find_begin(char *av);
void print_help(void);
int nbr_of_sign(char *str);
char *cut_str_one_sign(char *calc_part);
char *cut_str_several_signs(char *calc_part);
void my_number_shift(unsigned char **resptr);
char *eval_expr(char const *base, char const *ops, char const *expr, unsigned int size);
char *concat_expr(char const *str, char *part_calc, int start, int end);
void syntax_error_message(void);
void error_cases(char **av);
void must_not_match(char **av);
int my_strnlen(char const *str, int i);