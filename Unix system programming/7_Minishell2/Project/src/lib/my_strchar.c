/*
** EPITECH PROJECT, 2022
** my_strchar.c
** File description:
** find
*/
char *my_strchr(char *str, int c)
{
    while (*str != '\0') {
        if (*str == c)
            return str;
        str++;
    }
    return str;
}