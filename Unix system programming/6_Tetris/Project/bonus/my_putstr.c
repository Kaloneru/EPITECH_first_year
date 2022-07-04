/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** my_putstr
*/

#include "include/include.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
