/*
** EPITECH PROJECT, 2022
** sokoban.c
** File description:
** sokoban
*/
#include <stdlib.h>
#include "../include/include.h"
#include <ncurses.h>
#include <string.h>

int set_color(inf_t *inf, int color, int i, int j)
{
    if (inf->map[i][j] == '#')
        color = 1;
    if (inf->map[i][j] == 'P')
        color = 4;
    if (inf->map[i][j] == ' ')
        color = 0;
    if (inf->map[i][j] == 'O')
        color = 6;
    if (inf->map[i][j] == 'X')
        color = 3;
    if (inf->map[i][j] == 'X' && pos_box_point(inf, i, j) == 1)
        color = 2;
    return color;
}

void put_map(inf_t *inf)
{
    int i = 0;
    int j = 0;
    int color;

    colors();
    while (inf->map[i] != NULL) {
        j = 0;
        while (inf->map[i][j] != '\0') {
            color = set_color(inf, color, i, j);
            attron(COLOR_PAIR(color));
            mvprintw(LINES/2 - my_tablen(inf->map)/2 + i + 1,
                     COLS/2 - my_strlen(inf->map[0])/2 + j,
                     "%c", inf->map[i][j]);
            j++;
            attroff(COLOR_PAIR(color));
        }
        i++;
    }
}

void sokoban(inf_t *inf)
{
    int key;

    initscr();
    noecho();
    while (key != '\n') {
        check_size(inf, key);
        check_end(inf);
        if (inf->end != 0) {
            end(inf);
            break;
        }
        key = getch();
        clear();
    }
    endwin();
}
