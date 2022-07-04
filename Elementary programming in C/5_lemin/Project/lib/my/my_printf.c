/*
** EPITECH PROJECT, 2021
** dispo_starg.c
** File description:
** desc
*/

#include "my.h"

void my_printf(char *s, ...)
{
    va_list arg;
    int e = 0;
    va_start(arg, s);

    for (; s[e] != '\0'; e++) {
        if (s[e] == '%') {
            e = my_second_printf(s, arg, e);
            e = my_third_printf(s, arg, e);
            e = my_fourth_printf(s, arg, e);
        }
        if ((s[e] != '%') && (s[e - 1] != '%'))
            my_putchar(s[e]);
    }
    va_end(arg);
}
