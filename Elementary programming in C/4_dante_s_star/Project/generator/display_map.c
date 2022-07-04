/*
** EPITECH PROJECT, 2022
** print_map.c
** File description:
** desc
*/

#include "include/include.h"

void display(maze_t *maze)
{
    for (int i = 0; i != maze->row - 1; i++)
        printf("%s\n", maze->map[i]);
    printf("%s", maze->map[maze->row - 1]);
}
