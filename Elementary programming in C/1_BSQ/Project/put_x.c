/*
** EPITECH PROJECT, 2021
** put_x.c
** File description:
** put x in buff
*/
#include "include.h"
static int bigest_value(int *arr_int, char *buff)
{
    int max_value = 0;
    int i = 0;

    while (buff[i] != '\0') {
        if (arr_int[i] > max_value)
            max_value = arr_int[i];
        i++;
    }
    return max_value;
}

static int indice_bigest_value(int *arr_int, char *buff)
{
    int i = 0;
    int value = bigest_value(arr_int, buff);
    while (arr_int[i] != value) {
        i++;
    }
    return i;
}

char *put_x(char *buff, int *arr_int)
{
    int size = line_size(buff);
    int max = bigest_value(arr_int, buff);
    int i = indice_bigest_value(arr_int, buff);
    int k = 0;

    for (int k = 0; k != max; k++) {
        for (int j = 0; j != max; j++) {
            buff[i] = 'x';
            i = i - 1; 
            }
        i = i - size + max;
    }
    return buff;
}
