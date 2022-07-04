/*
** EPITECH PROJECT, 2021
** flags.c
** File description:
** some flags
*/

#include "my.h"

int my_fourth_printf(char *s, va_list arg, int e)
{
    if (s[e] == '%') {
        if (s[e + 1] == 'b') {
            binary(va_arg(arg, int));
            e++;
        } if (s[e + 1] == '%') {
            my_putchar('%');
            e++;
        }
    }
    return e;
}

int my_third_printf(char *s, va_list arg, int e)
{
    if (s[e] == '%') {
        if (s[e + 1] == 's') {
            my_putstr(va_arg(arg, char *));
            e++;
        } if (s[e + 1] == 'o') {
            convert_octal(va_arg(arg, int));
            e++;
        }
    }
    return e;
}

int my_second_printf(char *s, va_list arg, int e)
{
    if (s[e] == '%') {
        if ((s[e + 1] == 'i') || (s[e + 1] == 'd')) {
            my_put_nbr(va_arg(arg, int));
            e++;
        } if ((s[e + 1] == 'c') || (s[e + 1] == 'C')) {
            my_putchar(va_arg(arg, int));
            e++;
        }
    }
    return e;
}
