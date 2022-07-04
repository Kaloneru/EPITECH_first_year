/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** put_world.c
*/

#include "../../include/my_rpg.h"

int display_world(all_t *all)
{
    sfVector2f pos = {0,0};

    all->hit_box->hit_box = 0;
    for (int i = 0; i != 199; i++) {
        pos.y = (i * 98) + (all->glbv->moov.y) - 3000;
        for (int j = 0; j != 399; j++) {
            pos.x = (j * 98) + (all->glbv->moov.x) - 9000;
            verif_screen(all, pos, i, j);
        }
    }
    for (int i = 0; i != 199; i++) {
        pos.y = (i * 98) + (all->glbv->moov.y) - 3000;
        for (int j = 0; j != 399; j++) {
            pos.x = (j * 98) + (all->glbv->moov.x) - 9000;
            verif_screen2(all, pos, i, j);
        }
    }
    display_world_two(all, pos);
    return 0;
}

int put_pnj_home(all_t *all, sfVector2f pos, int i, int j)
{
    pos.x -= 50;
    pos.y -= 50;
    if (all->home->pnj[i][j] != ' ') {
        set_and_draw_pos(all->sheet->pnj,
        all->init->sprite55[all->home->pnj[i][j] - 33],
        all->window->window, pos);
        if (pos.y > 400 && pos.y < 800)
            print_text_pnj(all, pos);
    }
    return 0;
}

int put_home(all_t *all, sfVector2f pos, int i, int j)
{
    set_and_draw_pos(all->sheet->ground,
    all->init->sprite55[all->home->map[i][j] - 33], all->window->window, pos);
    if (all->home->obj[i][j] != ' ')
        set_and_draw_pos(all->sheet->obj,
        all->init->sprite55[all->home->obj[i][j] - 33],
        all->window->window, pos);
    if (all->home->obj2[i][j] != ' ')
        set_and_draw_pos(all->sheet->obj,
        all->init->sprite55[all->home->obj2[i][j] - 33],
        all->window->window, pos);
    put_pnj_home(all, pos, i, j);
    set_and_draw_pos(all->sheet->players,
    all->init->sprite55[all->glbv->player_display +
    (all->glbv->player_type * 3)],
    all->window->window, all->game->pos_p);
    set_hit_box(all, pos, all->home->hit_box[i][j]);
    return 0;
}

int display_home(all_t *all)
{
    sfVector2f pos = {0,0};

    all->hit_box->hit_box = 0;
    for (int i = 0; i != 29; i++) {
        pos.y = (i * 98) + (all->glbv->moov.y);
        for (int j = 0; j != 38; j++) {
            pos.x = (j * 98) + (all->glbv->moov.x);
            verif_screen_home(all, pos, i, j);
        }
    }
    return 0;
}