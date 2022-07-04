/*
** EPITECH PROJECT, 2021
** include.h
** File description:
** push swap
*/
#include <stdlib.h>

struct arrays {
    int *arr_a;
    int *arr_b;
    unsigned int len;
    unsigned int len_a;
    unsigned int len_b;
};

#ifndef INCLUDE_H_
    #define INCLUDE_H_
void sa(struct arrays* arr);
void position_to_b(struct arrays* arr);
void position_to_a(struct arrays* arr);
void rotate_a(struct arrays* arr);
void bubble_sort(struct arrays* arr);
void radix_sort(struct arrays *arr);
int str_to_int(char *str);
#endif /* include.h  */
