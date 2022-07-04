/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my_printf
*/

#ifndef MY_H_
    #define MY_H_
char *decimal_to_binary(int nb);
char *decimal_to_octal(int nb);
char *decimal_to_majx_hexadecimal(unsigned int nb);
char *decimal_to_x_hexadecimal(unsigned int nb);
void my_printf(char *s, ...);
void my_putchar(char c);
void my_put_nbr(int nb);
void my_put_nbr_un(unsigned int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
#endif /* MY_H_  */
