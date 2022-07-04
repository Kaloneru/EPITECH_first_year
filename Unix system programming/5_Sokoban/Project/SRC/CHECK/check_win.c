/*
** EPITECH PROJECT, 2022
** check_win.c
** File description:
** check if you win
*/
#include "../../include/include.h"
#include <stddef.h>

void check_bord(inf_t *inf, int i, int j)
{
    if ((inf->map[i + 1][j] == '#' || inf->map[i - 1][j] == '#') \
        && \
        (inf->map[i][j + 1] == '#' || inf->map[i][j - 1] == '#'))
        inf->end = 2;
}

void check_loose(inf_t *inf)
{
    int i = 0;
    int j = 0;
    int find_box = 0;

    while (find_box != inf->nb_box) {
        if (inf->map[i][j] == '\0') {
            i++;
            j = 0;
        }
        if (inf->map[i][j] == 'X') {
            find_box++;
            check_bord(inf, i, j);
        }
        j++;
    }
}

void check_end(inf_t *inf)
{
    int ok = 0;
    int i = 0;
    int x = 0;
    int y = 0;

    while (i != inf->nb_o) {
        x = inf->pos_o[i][0];
        y = inf->pos_o[i][1];
        if (inf->map[x][y] == 'X')
            ok++;
        i++;
    }
    if (ok == inf->nb_o)
        inf->end = 1;
    check_loose(inf);
}
