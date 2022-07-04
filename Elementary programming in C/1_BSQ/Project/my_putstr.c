/*
** EPITECH PROJECT, 2021
** my_putsr
** File description:
** cpool day 4 task
*/
#include "include.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}
