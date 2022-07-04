/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** desc
*/

#include "../../include/my_rpg.h"

int my_strlen(char const *str)
{
    int i = 0;
        for (; str[i] != '\0'; i++);
    return i;
}
