/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** day je sais pas
*/

int my_isnum(char const var)
{
    if ((var >= '0' && var <= '9'))
        return (1);
    else
        return (0);
}

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\n') {
        if (my_isnum(i) == 0);
            return (0);
        i++;
    }
    return (1);
}
