/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** algo
*/

#include "../include/my_rpg.h"

static void display_curs(all_t *all)
{
    sfVector2f m_pos = {all->menu->m_pos.x, all->menu->m_pos.y};
    sfSprite_setPosition(all->menu->curs, m_pos);
    sfRenderWindow_drawSprite(all->window->window, all->menu->curs, NULL);
}

static void close_window(all_t *all)
{
    while (sfRenderWindow_pollEvent(all->window->window, &all->window->event))
        if (all->window->event.type == sfEvtClosed)
            sfRenderWindow_close(all->window->window);
}

static int moov_is_pressed(void)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ))
        return 1;
    if (sfKeyboard_isKeyPressed(sfKeyS))
        return 1;
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        return 1;
    if (sfKeyboard_isKeyPressed(sfKeyD))
        return 1;
    return 0;
}

static void divise(all_t *all)
{
    if (sfTime_asSeconds
    (sfClock_getElapsedTime(all->window->clock)) >= 0.02) {
        sfClock_restart(all->window->clock);
        all->glbv->dont_moov = 0;
        if (moov_is_pressed() == 1)
            all->glbv->dont_moov = 1;
        all->glbv->time++;
        if (all->glbv->time >= 10000)
            all->glbv->time = 0;
        if (all->glbv->time % (5 / all->glbv->run) == 0) {
            all->glbv->player_display += all->glbv->dont_moov;
            if (all->glbv->player_display >= 3)
                all->glbv->player_display = 0;
        }
        sfRenderWindow_clear(all->window->window, sfBlack);
        if (all->menu->screen < 9)
            menu(all);
        else if (all->menu->screen >= 9 && all->menu->screen < 29)
            game(all);
        else
            fight(all, 2);
        display_curs(all);
    }
}

int loop(all_t *all)
{
    init_sprites_sheets(all);
    init_pos_buttons(all);
    init_music(all);
    play_music_in_loop(all->sound->music_jeu, all->sound->buff_music_jeu);
    all->menu->screen = 1;
    all->menu->screen_before = 1;
    all->glbv->time = 0;
    all->menu->volume = 5;
    sfSound_setVolume(all->sound->music_jeu, 40);
    sfRenderWindow_setFramerateLimit(all->window->window, 60);
    sfRenderWindow_setMouseCursorVisible(all->window->window, sfFalse);
    while (sfRenderWindow_isOpen(all->window->window)) {
        if (all->menu->screen_before > 45) {
            all->wrandrall->lifepoint_left = all->wrandrall->lifepoint_left;
            all->wrandrall->mana_left = all->wrandrall->mana_left;
            all->wrandrall->stamina_left = all->wrandrall->stamina;
        }
        sfRenderWindow_display(all->window->window);
        close_window(all);
        all->menu->m_pos =
        sfMouse_getPositionRenderWindow(all->window->window);
        divise(all);
        sfRenderWindow_display(all->window->window);
        all->menu->screen_before = all->menu->screen;
    }
    return 0;
}
