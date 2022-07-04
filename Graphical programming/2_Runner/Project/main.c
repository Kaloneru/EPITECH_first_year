/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** ouais
*/
#include "include/ouais.h"
#include "include/include.h"
#include "include/my.h"

void help(void)
{
    my_printf("    usage:\n./my_runner map/map1.txt");
}

int second_main(sfRenderWindow *window, int counter, all_t *all, \
                map_t *map, char **argv)
{
    if (menu(all, window) == 0) {
        display_menu(window, all);
    }
    if (menu(all, window) == 1 && my_strcmp(argv[1],\
                                            "map/map1.txt") == 0) {
        counter = display_map1(window, counter, all, map);
    }
    if (menu(all, window) == 2)
        counter = display_death(window, counter, all, map);
    if (menu(all, window) == 3)
        counter = display_game_over(all, counter, window);
    if (menu(all, window) == 4)
        counter = display_win(window, all, counter);
    return counter;
}
/*faire une fonction qui free tout*/
int main(int argc, char **argv)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1020, 32};
    sfEvent event;
    int counter = 0;
    all_t *all = malloc(sizeof(all_t));
    map_t *map = malloc(sizeof(map_t));
    
    convert_map(get_map(argv[1], map), map);
    set_values(all, map);   
    play_music(all);
    window = sfRenderWindow_create(\
        video_mode,"my_runner", sfClose | sfResize, NULL);
    if (argc != 2)
        return 84;
    if (my_strcmp(argv[1], "-h") == 0) {
        help();
        return 0;
    }
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event))
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        sfRenderWindow_clear(window, sfBlack);
        counter = second_main(window, counter, all, map, argv);
    }
    return 0;
}
