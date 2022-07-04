/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** my_printf
*/

#include "../include/printf.h"

void basic(char *str, int i, va_list arg)
{
    switch (str[i]) {
        case 'd':
        case 'i':
            my_put_nbr(va_arg(arg, int));
            break;
        case 'c':
        case 'C':
            my_putchar(va_arg(arg, int));
            break;
        case 's':
            my_putstr(va_arg(arg, char *));
            break;
        case 'o':
            my_put_nbr(octal_converter(va_arg(arg, unsigned int)));
            break;
        case 'x':
            my_putstr(hexal_converter(va_arg(arg, unsigned int)));
            break;
    }
}

void basics(char *str, int i, va_list arg)
{
    switch (str[i]) {
        case 'X':
            my_putstr(hexal_big(va_arg(arg, unsigned int)));
            break;
        case 'b':
            my_put_nbr(binary_converter(va_arg(arg, unsigned int)));
            break;
        case 'S':
            scase(va_arg(arg, char *));
            break;
        case '%':
            my_putchar('%');
            break;
    }
}

void format(char *str, int i, va_list arg)
{
    switch (str[i]) {
        case 'o':
            my_putchar('0');
            my_put_nbr(octal_converter(va_arg(arg, unsigned int)));
            break;
        case 'X':
            my_putstr("0X");
            my_putstr(hexal_big(va_arg(arg, unsigned int)));
            break;
        case 'x':
            my_putstr("0x");
            my_putstr(hexal_converter(va_arg(arg, unsigned int)));
            break;
        case 'd':
            my_putlongnbr(va_arg(arg, int));
            break;
    }
}

void my_printf(char *str, ...)
{
    va_list arg;

    va_start(arg, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%' && (str[i + 1] == '#' || str[i + 1] == 'l')) {
            i = i + 2;
            format(str, i, arg);
        } else if (str[i] == '%') {
            i = i + 1;
            basic(str, i, arg);
            basics(str, i, arg);
        } else
            my_putchar(str[i]);
    }
    va_end(arg);
}
