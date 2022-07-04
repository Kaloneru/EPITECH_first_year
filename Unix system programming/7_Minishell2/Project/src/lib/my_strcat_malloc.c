/*
** EPITECH PROJECT, 2021
** my_strcat_malloc.c
** File description:
** concat two strings
*/
#include "minishell.h"

char *my_strcat_malloc(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    char *str = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
    int k = 0;

    while (s1[i] != '\0') {
        str[i] = s1[i];
        k++;
        i++;
    }
    while (s2[j] != '\0') {
        str[j + k] = s2[j];
        j++;
    }
    str[j + k] = '\0';
    return str;
}
