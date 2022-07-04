/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** created for bootstrap
*/
#include <stddef.h>

int my_strlen(char *str);

char *my_strstr(char *str , char const *to_find)
{
    int j = 0;

    if (my_strlen(str) == 0)
        return (str);
    for (int i = 0; str[i] != '\0'; i = i + 1) {
        if (to_find[j] != str[i])
            j = 0;
        if (to_find[j] == str[i])
            j++;
        if (to_find[j] == '\0')
            return (&str[i - j + 1]);
    }
    return NULL;
}
