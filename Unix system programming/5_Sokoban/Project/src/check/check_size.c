/*
** EPITECH PROJECT, 2022
** check_size.c
** File description:
** check the size of the window
*/
#include "../../include/include.h"
#include <ncurses.h>

int my_tablen(char **tab)
{
    int i = 0;

    while (tab[i] != NULL)
        i++;
    return i + 2;
}

void check_size(inf_t *inf, int key)
{
    int x = 0;
    int y = 0;

    getmaxyx(stdscr, y, x);
    if (x < my_strlen(inf->map[0]) || y < my_tablen(inf->map))
        mvprintw(LINES/2, COLS/2, "resize your terminal");
    else
        moov(inf, key);
}
