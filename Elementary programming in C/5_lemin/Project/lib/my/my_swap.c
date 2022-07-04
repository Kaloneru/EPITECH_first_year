/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** desc
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
