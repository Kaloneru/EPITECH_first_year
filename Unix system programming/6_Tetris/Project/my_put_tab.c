/*
** EPITECH PROJECT, 2021
** lib
** File description:
** my_put_tab
*/

#include "include/include.h"

void my_put_tab(char **tab)
{
    int a = 0;

    while (tab[a] != NULL) {
        my_putstr(tab[a]);
        my_putstr("\n");
        a++;
    }
}
