/*
** EPITECH PROJECT, 2022
** menu.c
** File description:
** runner
*/
#include "include/include.h"
#include "include/ouais.h"

void display_menu(sfRenderWindow *window, all_t *all)
{
    all->menu->texture_menu = sfTexture_createFromFile(\
        "sprite/menu.png", NULL);
    all->menu->sprite_menu = sfSprite_create();
    sfSprite_setTexture(all->menu->sprite_menu, \
                        all->menu->texture_menu, sfFalse);
    sfSprite_setScale(all->menu->sprite_menu, \
                      all->menu->scale_menu);
    sfSprite_setPosition(all->menu->sprite_menu, \
                         all->menu->pos_menu);
    sfRenderWindow_drawSprite(window, all->menu->sprite_menu, NULL);
}

void win(all_t *all)
{
    all->game->texture_win = sfTexture_createFromFile(\
        "sprite/victory.png", NULL);
    all->game->sprite_win = sfSprite_create();
}

int display_win(sfRenderWindow *window, all_t *all, int counter)
{
    if (counter >= 0) {
        sfSprite_setTexture(all->game->sprite_win, \
                            all->game->texture_win, sfFalse);
        sfSprite_setScale(all->game->sprite_win, all->game->scalewi);
        sfSprite_setPosition(\
            all->game->sprite_win, all->game->pos_wi);
        sfRenderWindow_drawSprite(\
            window, all->game->sprite_win, NULL);
        counter++;
    }
    if (counter == 2000)
	all->game->screen = 0;
    return counter;
}

int menu(all_t *all, sfRenderWindow *window)
{
    sfVector2i m_pos = {0, 0};

    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        m_pos = sfMouse_getPositionRenderWindow(window);
    }
    if (((m_pos.x >= 820 && m_pos.x <= 1175) && \
         (m_pos.y >= 315 && m_pos.y <= 400)) && \
        all->game->screen == 0) {
        all->game->screen = 1;
        return 1;
        }
    if (all->game->screen == 1)
        return 1;
    if (all->game->screen == 2)
        return 2;
    if (all->game->screen == 3)
        return 3;
    if (all->game->screen == 4)
        return 4;
    return 0;
}

int display_map1(sfRenderWindow *window, \
                 int counter, all_t *all, map_t *map)
{
    parallax_if(all);
    display_parallax(window, all);
    obstacle_if(all, map);
    display_obstacle_inf(window, all);
    counter = display_perso(window, counter, all);
    display_score(window, all);
    return counter;
}
