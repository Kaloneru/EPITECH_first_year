/*
** EPITECH PROJECT, 2021
** convert.c
** File description:
** desc
*/

#include "my.h"

char *convert_octal(char dec)
{
    char *octadecimal = malloc(sizeof(char) *20);
    int e = 0;
    int dec2 = dec;

    while (dec2 != 0) {
        octadecimal[e] = dec2 % 8 + '0';
        dec2 = dec2 / 8;
        e++;
    }
    octadecimal[e] = '\0';
    my_revstr(octadecimal);
    my_putstr(octadecimal);
    return (octadecimal);
}

char *binary(int dec)
{
    char *binary = malloc(sizeof(char) * 32);
    int e = 0;
    int dec2 = dec;

    while (dec2 != 0) {
        binary[e] = dec2 % 2 + '0';
        dec2 = dec2 / 2;
        e++;
    }
    binary[e + 1] = '\0';
    my_revstr(binary);
    my_putstr(binary);
    return (binary);
}
