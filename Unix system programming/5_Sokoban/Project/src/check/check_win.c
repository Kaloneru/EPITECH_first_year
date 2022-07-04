/*
** EPITECH PROJECT, 2022
** check_win.c
** File description:
** check if you win
*/
#include "../../include/include.h"
#include <stddef.h>

int check_bord(inf_t *inf, int i, int j)
{
    if ((inf->map[i + 1][j] == '#' || inf->map[i - 1][j] == '#') \
        && \
        (inf->map[i][j + 1] == '#' || inf->map[i][j - 1] == '#'))
        return 1;
    return 0;
}

int check_loose(inf_t *inf)
{
    int i = 0;
    int j = 0;
    int box_dead = 0;
    int find_box = 0;

    while (find_box != inf->nb_box) {
        if (inf->map[i][j] == '\0') {
            i++;
            j = 0;
        }
        if (inf->map[i][j] == 'X')
            find_box++;
        if (inf->map[i][j] == 'X' && check_bord(inf, i, j) == 1) {
            box_dead++;
        }
        j++;
    }
    if (box_dead == inf->nb_box)
        return 1;
    return 0;
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
    if (check_loose(inf) == 1)
        inf->end = 2;
}
