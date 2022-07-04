/*
** EPITECH PROJECT, 2021
** disp_stdarg.c
** File description:
** bootstrap printf
*/
#include "fonctions.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

static void zero(char *string)
{
    if (my_strlen(string) == 1)
        my_putstr("00");
    if (my_strlen(string) == 2)
        my_putstr("0");
}

static void sfonc(char *str)
{
    int i = 0;
    char *string = malloc(sizeof(char) *my_strlen(str));

    while (str[i] != '\0') {
        if (str[i] >= '!' && str[i] <= '~') {
            my_putchar(str[i]);
            i++;
        }
        else {
            my_putchar('\\');
            zero(string);
            my_putstr(decimal_to_octal(str[i]));
            i++;
        }
    }
}

static void simple_case(char *str, int i, va_list arg)
{
    switch (str[i]) {
        case 'X':
            my_putstr(decimal_to_majx_hexadecimal(va_arg(arg, unsigned int)));
            break;
        case 'b':
            my_putstr(decimal_to_binary(va_arg(arg, unsigned int)));
            break;
        case 'S':
            sfonc(va_arg(arg, char *));
            break;
        case '%':
            my_putchar('%');
            my_putchar(' ');
            break;
    }
}

static void simple_case2(char *str, int i, va_list arg)
{
    switch (str[i]) {
        case 'c':
            my_putchar(va_arg(arg, int));
            break;
        case 'C':
            my_putchar(va_arg(arg, int));
            break;
        case 's':
            my_putstr(va_arg(arg, char *));
            break;
        case 'i':
            my_put_nbr(va_arg(arg, int));
            break;
    }
}

static void simple_case3(char *str, int i, va_list arg)
{
    switch (str[i]) {
        case 'd':
            my_put_nbr(va_arg(arg, int));
            break;
	case 'x':
            my_putstr(decimal_to_x_hexadecimal(va_arg(arg, unsigned int)));
            break;
        case 'p':
            my_putstr("0x");
            my_putstr(decimal_to_x_hexadecimal(va_arg(arg, int)));
            break;
        case 'u':
            my_put_nbr_un(va_arg(arg, unsigned int));
            break;
    }
}

static void porcent(char *str, int i, va_list arg)
{
    if (str[i] == '#' && str[i + 1] == 'x') {
        my_putstr("0x");
        my_putstr(decimal_to_x_hexadecimal(va_arg(arg, unsigned int)));
    }
    if (str[i] == '#' && str[i + 1] == 'X') {
        my_putstr("0X");
        my_putstr(decimal_to_x_hexadecimal(va_arg(arg, unsigned int)));
    }
    if (str[i] == '#' && str[i + 1] == 'o') {
        my_putstr("0");
        my_putstr(decimal_to_x_hexadecimal(va_arg(arg, unsigned int)));
    }
}

void my_printf(char *s, ...)
{
    va_list arg;
    int i =  0;

    va_start(arg, s);
    while (s[i] != '\0') {
        if (s[i] != '%' && s[i - 1] != '%') {
            my_putchar(s[i]);
        }
        else if (s[i] == '%') {
            i++;
            porcent(s, i, arg);
            simple_case(s, i, arg);
            simple_case2(s, i, arg);
            simple_case3(s, i, arg);
        }
        i++;
    }
    va_end(arg);
}/*
int main(void)
{
    char str [5];
    my_strcpy(str , "toto");
    str[1] = 6;
    my_printf("%S\n", str);
    my_printf("Hello %s My favorite number is %d and %i and my name start with %c and I got 69%% at my_printf %c%c", "world !", 42, 7, 'T', '!', '\n');
    my_printf("%c%c", 'c', 'm');
}
*/
