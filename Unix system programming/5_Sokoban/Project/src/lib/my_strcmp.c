/*
** EPITECH PROJECT, 2021
** library
** File description:
** my_strcmp.c
*/

int my_strlen(char const *str);

int my_strcmp(char *s1, char *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);
    int cmp = 0;

    if (len1 != len2)
        return (-1);
    for (int i = 0; s1[i] != '\0'; i++)
        if (s1[i] == s2[i])
            cmp++;
    if (cmp == len1)
        return (0);
    return (-1);
}
