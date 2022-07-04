/*
** EPITECH PROJECT, 2021
** str_to_float.c
** File description:
** take a string and make a float
*/
#include <stdio.h>
int my_compute_power_rec(int nb, int p);

float fonction(float result, int j, int i, char *str)
{
    if (str[i] == '.') {
        i++;
        while (str[i] != '\0') {
            result = result * 10 + str[i] - '0';
            i++;
            j++;
        }
    }
    if (j == 1)
        result = result / 10;
    if (j == 2)
        result = result / 100;
    if (str[0] == '-')
        result = result * (-1);
    return result;
}

float str_to_float(char *str)
{
    float result = 0;
    int i = 0;
    int j = 0;

    if (str[0] == '-')
        i++;
    while (str[i] != '\0' && str[i] != '.') {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return fonction(result, j, i, str);
}
