/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** display_screen.c
*/

#include "../../include/my_rpg.h"

int put_build(all_t *all, sfVector2f pos, int i, int j)
{
    if (all->game->build[i][j] != ' ') {
        pos.y += 198;
        set_and_draw_pos(all->sheet->build,
        all->init->sprite2010[all->game->build[i][j] - 23],
        all->window->window, pos);
        pos.y -= 198;
    }
    return 0;
}

int put_build_two(all_t *all, sfVector2f pos, int i, int j)
{
    if (all->game->build[i][j] != ' ')
        set_and_draw_pos(all->sheet->build,
        all->init->sprite2010[all->game->build[i][j] - 33],
        all->window->window, pos);
    if (all->game->enemi[i][j] != ' ')
        set_and_draw_pos(all->sheet->enemi,
        all->init->sprite55[all->game->enemi[i][j] - 33],
        all->window->window, pos);
    put_pnj(all, pos, i, j);
    return 0;
}

int display_world_two(all_t *all, sfVector2f pos)
{
    set_and_draw_pos(all->sheet->players,
    all->init->sprite55[all->glbv->player_display +
    (all->glbv->player_type * 3)],
    all->window->window, all->game->pos_p);
    for (int i = 0; i != 199; i++) {
        pos.y = (i * 98) + (all->glbv->moov.y) - 3000;
        for (int j = 0; j != 399; j++) {
            pos.x = (j * 98) + (all->glbv->moov.x) - 9000;
            verif_screen3(all, pos, i, j);
        }
    }
    return 0;
}

int display_screen(all_t *all)
{
    if (all->menu->screen == 10) {
        display_world(all);
        return 0;
    }
    all->glbv->run = 1;
    if (all->menu->screen == 11)
        display_home(all);
    if (all->menu->screen == 12)
        display_essinde(all);
    if (all->menu->screen == 13)
        display_shamrodia(all);
    if (all->menu->screen == 14)
        display_taverne(all);
    return 0;
}
