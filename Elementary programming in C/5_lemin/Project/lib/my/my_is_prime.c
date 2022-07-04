/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** desc
*/

#include "my.h"

int my_is_prime(int nb)
{
    if (nb < 2)
        return 0;
    if (nb == 2 || nb == 3 || nb == 5)
        return 1;
    if (nb % 2 == 0)
        return 0;
    for (int i = 3; (i * i) <= nb; i = i + 2) {
        if (nb % i == 0)
            return 0;
    }
    return 0;
}
