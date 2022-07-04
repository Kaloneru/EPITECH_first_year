/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main push sap
*/
#include "include/include.h"
#include "include/my.h"

int main(int argc, char **argv)
{
    struct arrays arr;

    arr.len = argc - 1;
    arr.len_a = argc - 1;
    arr.len_b = 0;
    arr.arr_a = malloc(sizeof(int) * arr.len_a);
    for (int i = 0; i != argc - 1; i++) {
        arr.arr_a[i] = str_to_int(argv[i + 1]);
    }
    arr.arr_b = malloc(sizeof(int) * arr.len_a);
    radix_sort(&arr);
}
