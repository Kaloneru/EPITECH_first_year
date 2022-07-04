/*
** EPITECH PROJECT, 2022
** moov.c
** File description:
** to separate the fonction moov
*/
#include "../include/include.h"

/*
    key to move right = 67;
    key to move left = 68;
    key to move low = 66;
    key to move high = 65;
    key to reset the map = 32
*/

static void moov3(inf_t *inf, int key)
{
    if (key == 68 &&
        inf->map[inf->pos[0]][inf->pos[1] - 1] != '#') {
        moov_left(inf);
    }
    reset_point(inf);
    if (key == 32) {
        get_buffer(inf->buffer, inf);
        get_pos(inf);
    }
}

static void moov2(inf_t *inf, int key)
{
    if (key == 67 &&
        inf->map[inf->pos[0]][inf->pos[1] + 1] != '#') {
        moov_right(inf);
    }
    if (key == 65 &&
        inf->map[inf->pos[0] - 1][inf->pos[1]] != '#') {
        moov_high(inf);
    }
    if (key == 66 &&
        inf->map[inf->pos[0] + 1][inf->pos[1]] != '#') {
        moov_low(inf);
    }
}

void moov(inf_t *inf, int key)
{
    moov2(inf, key);
    moov3(inf, key);
    put_map(inf);
}
