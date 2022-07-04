/*
** EPITECH PROJECT, 2022
** check_line.c
** File description:
** check if a map with only one way can be solve
*/
#include "../../include/include.h"
#include <stdlib.h>

static void check_order(inf_t *inf, char *elem)
{
    if (my_strcmp(elem, "POX") == 0)
        inf->end = 3;
    if (my_strcmp(elem, "XOP") == 0)
        inf->end = 3;
    if (my_strcmp(elem, "XPO") == 0)
        inf->end = 3;
    if (my_strcmp(elem, "OPX") == 0)
        inf->end = 3;
}

void check_line3(inf_t *inf, char *elem)
{
    int j = 0;

    for (int i = 1; inf->map[1][i] != '#'; i++) {
        if (inf->map[1][i] != ' ') {
            elem[j] = inf->map[1][i];
            j++;
        }
    }
    check_order(inf , elem);
}

void check_line2(inf_t *inf, char *elem)
{
    int j = 0;

    for (int i = 1; inf->map[i][1] != '#'; i++) {
        if (inf->map[i][1] != ' ') {
            elem[j] = inf->map[i][1];
            j++;
        }
    }
    check_order(inf, elem);
}

void check_line(inf_t *inf)
{
    int x = my_strlen(inf->map[0]);
    int y = my_tablen(inf->map) - 2;
    char elem[4];

    if (x == 3) {
        check_line2(inf, elem);
    }
    if (y == 3) {
        check_line3(inf, elem);
    }
}
