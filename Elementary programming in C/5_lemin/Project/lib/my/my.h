/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** desc
*/

#ifndef MY_H_
    #define MY_H_
    #include <unistd.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <stdarg.h>
    #include <stdlib.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_atoi(char const *str);
char *my_revstr(char *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_isneg(int nb);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_strcmp(char const *s1, char const *s2);
int my_is_prime(int nb);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strdup(char const *src);
int my_compute_factorial_it(int nb);
int my_compute_power_rec(int nb, int p);
char *int_to_str(int nb);
char **str_to_word_array(char *str, char sep);
int my_compute_factorial_rec(int nb);
int my_showmem(char const *str, int size);
int my_str_islower(char const *str);
char *convert_octal(char dec);
char *binary(int dec);
void my_printf(char *s, ...);
int my_second_printf(char *s, va_list arg, int e);
int my_third_printf(char *s, va_list arg, int e);
int my_fourth_printf(char *s, va_list arg, int e);
int my_strstr(char *str, char const *to_find);
#endif
