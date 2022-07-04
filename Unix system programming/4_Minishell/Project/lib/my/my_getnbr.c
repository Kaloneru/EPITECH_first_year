/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** day 04 later
*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return 0;
}

int my_strlen (char const *str)
{
    int i;
    i = 0;
    
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

int my_isnum(char const var)
{
    if ((var >= '0' && var <= '9'))
        return (1);
    else
        return (0);
}

char min(char const *str, int i)
{
    int count = 0;
    
    if (my_isnum(str[i] == 1))
        return 0;
    while (i >= 0 && (str[i] == '-' || str[i] == '+')) {
        if (str[i] == '-')
            count = count + 1;
        i = i - 1;
    }
    if (count % 2 == 1)
        return 1;
    return 0; 
                       
}
    
char *my_getnbr(char const *str)
{
    int i = 0;
    int j = 0;
    char *result = malloc(sizeof(char) * my_strlen(str));
    
    while(str[i] != '\0') {
        if (my_isnum(str[i]) == 1) {
            if (min(str, i - 1) == 1) {
                result[j] = '-';
                j = j + 1;
            }
            result[j] = str[i];
            i = i + 1;
            j = j + 1;
            if (my_isnum(str[i]) == 0)
                return result;
        }
        if (my_isnum(str[i]) == 0)
            i = i + 1;
    }
    return result;
}
