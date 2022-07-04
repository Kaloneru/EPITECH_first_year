/*
** EPITECH PROJECT, 2021
** printf.h
** File description:
** desc
*/

#ifndef PRINTF_H_
    #define PRINTF_H_
#include <stdarg.h>

void my_printf(char *str, ...);
long int my_putlongnbr(int nb);
int octal_converter(unsigned int n);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *hexal_converter(unsigned int n);
char *hexal_big(unsigned int n);
int binary_converter(unsigned int n);
char *octal_ascii(unsigned int n);
void scase(char *str);
char *my_strcpy(char *dest, char const *src);
#endif
