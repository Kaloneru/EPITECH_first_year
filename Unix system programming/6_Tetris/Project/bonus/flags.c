/*
** EPITECH PROJECT, 2022
** duo_stumper
** File description:
** main
*/

#include "include/include.h"

int check_struct(all_t *all)
{
    if (all->parameter->map_size_x > 50 || all->parameter->map_size_y > 20) {
        write(2, "Column cannot exceed 50 and row cannot exceed 20!\n", 50);
        return -1;
    }
    if (all->parameter->map_size_x * all->parameter->map_size_y < 20) {
        write(2, "The grid must hargve at least 20 slots!\n", 38);
        return -1;
    }
    return 0;
}

static void key_input(all_t *all, char **argv, int i)
{
    all->parameter->key_drop = all->parameter->key_drop;
    argv[0][0] = argv[0][0];
    i = i;
}

static void take_map_size(all_t *all, char **argv, int i)
{
    int x = 0;
    int s = 0;
    int l = 0;
    char **map_size = mem_alloc_2d_char_array(3, 4);
    while (argv[i][x] != '=')
        x++;
    x++;
    while (argv[i][x] != '\0') {
        if (argv[i][x] == ',') {
            x++;
            s++;
            l = 0;
        }
        map_size[s][l] = argv[i][x];
        x++;
        l++;
    }
    all->parameter->map_size_y = atoi(map_size[1]);
    all->parameter->map_size_x = atoi(map_size[0]);
}

static void other_input(all_t *all, char **argv, int i)
{
    if (argv[i][2] == 'h')
        i = i;
    if (argv[i][2] == 'k')
        key_input(all, argv, i);
    if (argv[i][2] == 'm')
        take_map_size(all, argv, i);
    if (argv[i][2] == 'w')
        all->parameter->without_next = true;
    if (argv[i][2] == 'd')
        all->parameter->debug = true;
}

int fill_struct(all_t *all, int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        if (my_strcmp("-d", argv[i]) == 0 && argv[i + 1] != NULL)
            all->parameter->key_drop = atoi(argv[i + 1]);
        if (my_strcmp("-l", argv[i]) == 0 && argv[i + 1] != NULL)
            all->parameter->key_left = atoi(argv[i + 1]);
        if (my_strcmp("-r", argv[i]) == 0 && argv[i + 1] != NULL)
            all->parameter->key_right = atoi(argv[i + 1]);
        if (my_strcmp("-t", argv[i]) == 0 && argv[i + 1] != NULL)
            all->parameter->key_turn = atoi(argv[i + 1]);
        if (my_strcmp("-q", argv[i]) == 0 && argv[i + 1] != NULL)
            all->parameter->key_quit = atoi(argv[i + 1]);
        if (my_strcmp("-L", argv[i]) == 0 && argv[i + 1] != NULL)
            all->parameter->level = atoi(argv[i + 1]);
        if (my_strcmp("-p", argv[i]) == 0 && argv[i + 1] != NULL)
            all->parameter->key_pause = atoi(argv[i + 1]);
        if (my_strcmp("-w", argv[i]) == 0 && argv[i + 1] != NULL)
            all->parameter->without_next = true;
        if (my_strcmp("-D", argv[i]) == 0 && argv[i + 1] != NULL)
            all->parameter->debug = true;
        if (argv[i][0] == '-' && argv[i][1] == '-')
            other_input(all, argv, i);
    }
    return 0;
}
