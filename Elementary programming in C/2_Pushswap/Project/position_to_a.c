/*
** EPITECH PROJECT, 2021
** position_to_a.c
** File description:
** take the first element from l_b and move it to the first position on\
 the l_a list (nothing will happen if l_b is empty).
*/
#include "include/include.h"
void position_to_a(struct arrays* arr)
{
    for (unsigned int i = arr->len_a; i != 0; i--)
        arr->arr_a[i] = arr->arr_a[i - 1];
    arr->arr_a[0] = arr->arr_b[0];
    for (unsigned int i = 0; i != arr->len_b - 1 ;i++)
        arr->arr_b[i] = arr->arr_b[i + 1];
    arr->len_a += 1;
    arr->len_b -= 1;
}
