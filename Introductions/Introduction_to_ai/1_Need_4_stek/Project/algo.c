/*
** EPITECH PROJECT, 2022
** n4s
** File description:
** algo
*/

#include "include/ai.h"

static int verif_need_turn(n4s_t *n4s)
{
    if (n4s->front < 600)
        return 1;
    if (n4s->right <= 550)
        return 1;
    if (n4s->left <= 550)
        return 1;
    return 0;
}

static double turn_wheel(n4s_t *n4s)
{
    double wheel = 0;
    if (n4s->front < 600)
        wheel = (70 / (n4s->left - n4s->right));
    if (n4s->right <= 550)
        wheel += 0.1 - (0.1 * n4s->right / 550);
    if (n4s->left <= 550)
        wheel -= 0.1 - (0.1 * n4s->left / 550);
    return wheel;
}

int algo(n4s_t *n4s)
{
    if (verif_need_turn(n4s) == 1) {
        dprintf(1, "wheels_dir:%f\n", turn_wheel(n4s));
        get_line();
    }
    return 0;
}
