/*
** EPITECH PROJECT, 2021
** rotate_a.c
** File description:
** rotate l_a toward the beginning, the first element will become the last.
*/
#include "include/include.h"
void rotate_a(struct arrays* arr)
{
    int ret = arr->arr_a[0];

    for (unsigned int i = 0; i != arr->len_a - 1 ;i++)
        arr->arr_a[i] = arr->arr_a[i + 1];
    arr->arr_a[arr->len_a - 1] = ret;
}
