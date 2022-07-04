/*
** EPITECH PROJECT, 2021
** my_atoi.c
** File description:
** atoi
*/

int my_atoi(char *str)
{
    int x = 0;
    int i = 0;
    int neg = 1;

    if (str[i] == '-') {
        neg = -1;
        i++;
    }
    while (str[i] != '\0') {
        x = x * 10 + str[i] - '0';
        i = i + 1;
    }
    return (x * neg);
}
