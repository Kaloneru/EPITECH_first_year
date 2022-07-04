/*
** EPITECH PROJECT, 2022
** my_strcut.c
** File description:
** cut a str
*/
#include "minishell.h"

char *my_strcut(char *str, int nb)
{
    int k = 0;
    char *new_str = malloc(sizeof(char) * (my_strlen(str) - nb + 1));
    int i = nb;

    while (str[i] != '\0') {
        new_str[k] = str[i];
        i++;
        k++;
    }
    new_str[k] = '\0';
    return new_str;
}
