/*
** EPITECH PROJECT, 2022
** duo_stumper
** File description:
** map_generator
*/

#include "include/include.h"

static void malloc_grid(all_t *all)
{
    all->map->map = malloc(sizeof(char *) * (all->parameter->map_size_y + 10));
    for (int i = 0; i < all->parameter->map_size_y + 2; i++)
        all->map->map[i] =
            malloc(sizeof(char) * all->parameter->map_size_x + 20);
}

static void end_grid(all_t *all, int i)
{
    for (int j = 0; j < all->parameter->map_size_x + 2; j++) {
        if (j == 0 || j == all->parameter->map_size_x + 1)
            all->map->map[i][j] = '+';
        else
            all->map->map[i][j] = '-';
    }
    all->map->map[i][all->parameter->map_size_x + 2] = '\0';
}

static void all_grid(all_t *all, int i)
{
    for (int j = 0; j < all->parameter->map_size_x + 2; j++) {
        if (j == 0)
            all->map->map[i][j] = '|';
        else if (j == all->parameter->map_size_x + 1)
            all->map->map[i][j] = '|';
        else
            all->map->map[i][j] = ' ';
    }
    all->map->map[i][all->parameter->map_size_x + 2] = '\0';
}

void map_generator(all_t *all)
{
    int i = 0;

    malloc_grid(all);
    for (; i < all->parameter->map_size_y + 2; i++) {
        if (i == all->parameter->map_size_y + 1)
            end_grid(all, i);
        else if (i == 0)
            end_grid(all, i);
        else
            all_grid(all, i);
    }
    all->map->map[all->parameter->map_size_y + 2] = NULL;
}
