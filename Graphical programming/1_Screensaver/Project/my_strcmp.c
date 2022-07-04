/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** ls
*/
#include <stdio.h>

static int compare_char(char char1, char char2)
{
    if (char1 > char2)
        return 1;
    if (char1 == char2)
        return 0;
    else
        return -1;
}

int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] != str2[i])
            return compare_char(str1[i], str2[i]);
        if (str2[i] == '\0')
            return 1;
    i++;
    }
    if (str1[i - 1] == '\0' && str2[i - 1] != '\0')
        return -1;
    return 0;
}
/*
int main()
{
    printf("%i\n", my_strcmp("ba", "ba"));
}
*/
