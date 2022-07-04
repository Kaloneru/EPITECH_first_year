/*
** EPITECH PROJECT, 2021
** bubble_sort.c
** File description:
** sort
*/
#include "include/my.h"
#include "include/include.h"
#include <stdio.h>

int is_sorted(struct arrays* arr)
{
    for (unsigned int i = 0; i != arr->len - 1; i++) {
        if (arr->arr_a[i] > arr->arr_a[i + 1])
            return 1;
    }
    return 0;
}

int is_sorted_arr_a(struct arrays* arr)
{
    for (unsigned int i = 0; i != arr->len_a - 1; i++) {
	if (arr->arr_a[i] > arr->arr_a[i + 1])
            return 1;
    }
    return 0;
}

void bubble_sort3(struct arrays* arr)
{
    while (arr->len_b != 0) {
        pa(arr);
        my_printf("pa ");
    }
}

void bubble_sort2(struct arrays* arr)
{
    while (is_sorted_arr_a(arr) == 1) {
        if (arr->arr_a[0] > arr->arr_a[1]) {
            sa(arr);
            my_printf("sa ");
        } else if (arr->arr_a[0] <= arr->arr_a[1]) {
            pb(arr);
            my_printf("pb ");
        }
    }
}

void bubble_sort(struct arrays* arr)
{
    while (is_sorted(arr) == 1) {
        while (is_sorted_arr_a(arr) == 1) {
        if (arr->arr_a[0] > arr->arr_a[1]) {
            sa(arr);
            my_printf("sa ");
        } else if (arr->arr_a[0] <= arr->arr_a[1]) {
            pb(arr);
            my_printf("pb ");
	}
        while (arr->len_b != 0) {
            pa(arr);
            my_printf("pa ");
        }
    }
    my_printf("\n");
}
