/*
** EPITECH PROJECT, 2021
** bigest_square.c
** File description:
** put the values into the int*
*/
#include "include.h"

void my_put_nbr(int nb)
{
    unsigned int n = nb;
    if (nb < 0) {
        my_putchar('-');
        n = -nb;
    }
    if (n > 9) {
        my_put_nbr(n / 10);
        my_put_nbr(n % 10);
    } else {
        my_putchar(n + '0');
    }
}

void my_put_arr_int(int *arr_int, char *buff)
{
    int i = 0;
    
    while (buff[i] != '\0') {
        my_put_nbr(arr_int[i]);
        my_putchar(' ');
        if (arr_int[i] == -1)
            my_putchar('\n');
        i++;
    }
}

static int min(int j, int k, int l)
{
    int val_min = j;

    if (k < j)
        val_min = k;
    if (l < val_min)
        val_min = l;
    return val_min;
}

int line_size(char *buff)
{
    int i = 0;

    while (buff[i] != '\n')
        i++;
    i++;
    return i;
}

int *bigest_square(int *arr_int, char *buff)
{
    int size = line_size(buff);
    int j;
    int k;
    int l;
    int i = size + 1 + 1;
    while (buff[i] != '\0') {
         if (arr_int[i] == 0) {
            i++;
            continue;
        }
        j = arr_int[i - 1];
        k = arr_int[i - size];
        l = arr_int[i - size - 1];
        if (j == -1 || k == -1 || l == -1) {
            i++;
            continue;
	}
	if (j >= 0 && k >= 0 && l >= 0)
            arr_int[i] = min(j, k, l) + 1;
        i++;
    }
    return arr_int;
}
