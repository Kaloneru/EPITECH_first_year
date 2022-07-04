/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** desc
*/

#include "include/include.h"

static void display(maze_t *maze)
{
    for (int i = 0; i != maze->row - 1; i++)
        printf("%s\n", maze->map[i]);
    printf("%s", maze->map[maze->row - 1]);
}

static void type_of_maze(int argc, char **argv, maze_t *maze)
{
    if (argc == 3) {
        imperfect(maze);
        display(maze);
    }
    if (argc == 4 && strcmp(argv[3], "perfect") == 0)
        display(maze);
}

int main(int argc, char **argv)
{
    maze_t *maze = malloc(sizeof(maze_t));

    if (argc != 3 && argc != 4)
        return 84;
    maze->row = atoi(argv[1]);
    maze->col = atoi(argv[2]);
    malloc_maze(maze);
    big_generator(maze);
    type_of_maze(argc, argv, maze);
    return 0;
}
