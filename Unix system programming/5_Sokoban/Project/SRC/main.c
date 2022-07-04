/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** sokoban main
*/
#include <ncurses.h>
#include <string.h>
#include "../include/include.h"
#include <stdlib.h>

static void make_sokoban(inf_t *inf, point_t *point)
{
    get_point(inf, point);
    get_pos(inf);
    get_box(inf);
    check_walls(inf);
    check_line(inf);
}

static void init(inf_t *inf, char **argv, point_t *point)
{
    set_structures(argv, inf, point);
    get_buffer(open_and_read(argv[1]) , inf);
    check_perso(inf);
}

static void information(void)
{
    my_putstr("USAGE\n\t./my_sokoban map\nDESCRIPTION\n\tmap");
    my_putstr("file representing the warehouse map, containing");
    my_putstr("'#' for walls, 'P' for the player, 'X' for the boxes");
    my_putstr("and 'O' for storage locations.\n");
}

static int make_sokoban2(inf_t *inf, point_t *point, char **argv)
{
    init(inf, argv, point);
    if (inf->end == 3)
        return 84;
    make_sokoban(inf, point);
    if (inf->nb_box != inf->nb_o || inf->end == 3)
        return 84;
    sokoban(inf);
    if (inf->end == 2)
        return 1;
    return 0;
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return 84;
    if (my_strcmp(argv[1], "-h") == 0) {
        information();
        return 0;
    }
    inf_t *inf = malloc(sizeof(inf_t));
    point_t *point = malloc(sizeof(point_t));
    return make_sokoban2(inf, point, argv);
}
