/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** desc
*/

#include "include/ai.h"

static int verif_is_on_wall(n4s_t *n4s)
{
    if (n4s->front == 0)
        return 1;
    if (n4s->right == 0)
        return 1;
    if (n4s->left == 0)
        return 1;
    return 0;
}

static int begin(n4s_t *n4s)
{
    dprintf(1, "start_simulation\n");
    get_line();
    dprintf(1, "car_forward:0.6\n");
    get_line();
    n4s->end = "No further info";
    return 0;
}

static int loop(n4s_t *n4s)
{
    char *line = NULL;
    while (my_str_cmp(n4s->end, "Track Cleared") != 0) {
        dprintf(1, "get_info_lidar\n");
        line = get_line();
        if (get_all_info(n4s, line) == -1)
            return -1;
        algo(n4s);
        if (verif_is_on_wall(n4s) == 1)
            break;
    }
    return 0;
}

static int end(void)
{
    dprintf(1, "car_forward:0\n");
    get_line();
    dprintf(1, "stop_simulation\n");
    get_line();
    return 0;
}

int main(void)
{
    n4s_t *n4s = malloc(sizeof(n4s_t));
    begin(n4s);
    loop(n4s);
    end();
    return 0;
}
