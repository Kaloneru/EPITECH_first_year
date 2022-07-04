/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** put_map
*/

#include "../../include/include.h"
#include "../../include/menu.h"

void put_all(all_t *all, int y, int x, sfRenderWindow *window)
{
    sfVector2f pos = {x * 100, y * 100};
    sfSprite_setPosition(all->sprite->sprite, pos);
    if (all->map->all_map[y][x] == ' ')
        set_and_draw
            (all->sprite->sprite, all->sprite->sprite_rect[19], window);
    if (all->map->all_map[y][x] == 'X')
        set_and_draw
            (all->sprite->sprite, all->sprite->sprite_rect[18], window);
}

int put_map(all_t *all, sfRenderWindow *window)
{
    int x = 0;
    int y = 0;

    while (all->map->all_map[y] != NULL) {
        x = 0;
        while (all->map->all_map[y][x] != '\0') {
            put_all(all, y, x, window);
            x++;
        }
        y++;
    }
    sfVector2f pos = {1500, 100};
    sfSprite_setPosition(all->sprite->sprite, pos);
    set_and_draw(all->sprite->sprite, all->map->castle, window);
    return 0;
}
