/*
** EPITECH PROJECT, 2021
** radix_sort.c
** File description:
** ouais
*/
#include "include/include.h"
#include "include/my.h"
static int is_sorted(struct arrays* arr)
{
    for (unsigned int i = 0; i != arr->len - 1; i++) {
        if (arr->arr_a[i] > arr->arr_a[i + 1])
            return 1;
    }
    return 0;
}

static int radix_sort2(unsigned int i, int bit, struct arrays *arr)
{
    if ((bit & arr->arr_a[0]) == 0) {
        position_to_b(arr);
        my_printf("%s", "pb ");
    } else {
        rotate_a(arr);
        my_printf("%s", "ra ");
    }
    i++;
    return i;
}

void radix_sort(struct arrays *arr)
{
    int bit = 1;
    unsigned int i = 0;

    while (is_sorted(arr) == 1) {
        while (i < arr->len) {
            i = radix_sort2(i, bit, arr);
        }
        i = 0;
        bit *= 2;
        while (arr->len_b != 0) {
            position_to_a(arr);
            my_printf("pa ");
        }
    }
    my_printf("sb\n");
}
