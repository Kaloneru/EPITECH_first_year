/*
** EPITECH PROJECT, 2021
** str_to_arr_int.c
** File description:
** convert a char* to an int*
*/
#include "include.h"
int *str_to_arr_int(char *buff)
{
    int i = 0;
    int *arr_int = malloc(sizeof(int) * my_strlen(buff));

    while (buff[i] != '\0') {
        if(buff[i] == '.')
            arr_int[i] = 1;
	if(buff[i] == 'o')
            arr_int[i] = 0;
        if(buff[i] == '\n')
            arr_int[i] = -1;
        i++;
    }
    return arr_int;
}
