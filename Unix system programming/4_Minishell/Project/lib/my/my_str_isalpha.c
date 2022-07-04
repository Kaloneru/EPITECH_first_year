/*
** EPITECH PROJECT, 2021
** my_str_isalpha.c
** File description:
** day0aucunes idées
*/

int my_isalpha(char const var)
{
    if ((var >= 'a' && var <= 'z') || (var >= 'A' && var <= 'Z'))
        return (1);
    else
        return (0);
}

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\n') {
        if (my_isalpha(str[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}
