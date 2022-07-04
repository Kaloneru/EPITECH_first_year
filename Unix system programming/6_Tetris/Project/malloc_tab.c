/*
** EPITECH PROJECT, 2022
** mysocoban
** File description:
** malloc_tab
*/

#include "include/include.h"

char **mem_alloc_2d_char_array(int rows, int columns)
{
    int i = 0;
    char **arr = malloc(sizeof(char *) * (rows + 1));

    while (i < rows) {
        arr[i] = malloc(sizeof(char) * columns);
        i = i + 1;
    }
    return (arr);
}
