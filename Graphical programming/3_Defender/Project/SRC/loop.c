/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** loop
*/

#include "../include/include.h"

static void close_window(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event))
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
}

static void divise(all_t *all, sfRenderWindow *window, sfEvent event)
{
    if (sfTime_asSeconds
        (sfClock_getElapsedTime(all->rect_menu->clock)) >= 0.05) {
        sfClock_restart(all->rect_menu->clock);
        sfRenderWindow_clear(window, sfBlack);
        if (all->menu->menu1 < 9)
            menu(all, window);
        else
            game_lunch(all, window, event);
    }
}

void loop(all_t *all, sfRenderWindow *window, sfEvent event)
{
    sfRenderWindow_setFramerateLimit(window, all->global_values->frame);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        close_window(window, event);
        all->menu->m_pos = sfMouse_getPositionRenderWindow(window);
        divise(all, window, event);
        sfRenderWindow_display(window);
    }
}
