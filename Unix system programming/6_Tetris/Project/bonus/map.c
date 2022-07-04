/*
** EPITECH PROJECT, 2022
** map.c
** File description:
** deal with the map
*/
#include "include/include.h"

void size_map(all_t *all)
{
    int x = 0;
    int y = 0;
    char *nop = "size up your teminal";

    getmaxyx(stdscr, y, x);
    if (all->parameter->map_size_x + 2 > x || all->parameter->map_size_y + 2 > y)
        mvprintw(LINES/2, COLS/2 - my_strlen(nop)/2, "%s", nop);
    else
        put_map(all);
}

char **cpy(char **form)
{
    char **tab = mem_alloc_2d_char_array(4, 4);
    for (int i = 0; i != 3; i++) {
        for (int j = 0; j != 3; j++) {
            tab[i][j] = form[i][j];
        }
        tab[i][3] = '\0';
    }
    tab[3] = NULL;
    return tab;
}
