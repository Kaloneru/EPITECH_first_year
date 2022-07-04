/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** main
*/

#include "../include/include.h"

int main(int argc, char **argv)
{
    if (error_handling(argc, argv) == 84)
        return 84;
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1020, 32};
    sfEvent event;
    all_t *all = malloc(sizeof(all_t));

    malloc_struct(all);
    all->map->all_map = my_str_to_word_array(load_map(argv[1]), '\n');
    all->rect_menu->clock = sfClock_create();
    all->enemi->wave = 0;
    window =
        sfRenderWindow_create(video_mode,"my_defender", sfDefaultStyle, NULL);
    init_game(all);
    loop(all, window, event);
    sfClock_destroy(all->rect_menu->clock);
    close_music(all);
    return 0;
}
