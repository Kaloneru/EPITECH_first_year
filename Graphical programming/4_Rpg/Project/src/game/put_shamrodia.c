/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** put_essinde.c
*/

#include "../../include/my_rpg.h"

int put_pnj_shamrodia(all_t *all, sfVector2f pos, int i, int j)
{
    pos.x -= 50;
    pos.y -= 50;
    if (all->shamrodia->pnj[i][j] != ' ') {
        set_and_draw_pos(all->sheet->pnj,
        all->init->sprite55[all->shamrodia->pnj[i][j] - 33],
        all->window->window, pos);
        if (pos.y > 400 && pos.y < 800) {
            print_text_pnj(all, pos);
        }
    }
    return 0;
}

int put_shamrodia(all_t *all, sfVector2f pos, int i, int j)
{
    set_and_draw_pos(all->sheet->ground,
    all->init->sprite55[all->shamrodia->map[i][j] - 33],
    all->window->window, pos);
    if (all->shamrodia->obj[i][j] != ' ')
        set_and_draw_pos(all->sheet->obj,
        all->init->sprite55[all->shamrodia->obj[i][j] - 33],
        all->window->window, pos);
    if (all->shamrodia->obj2[i][j] != ' ')
        set_and_draw_pos(all->sheet->obj,
        all->init->sprite55[all->shamrodia->obj2[i][j] - 33],
        all->window->window, pos);
    put_pnj_shamrodia(all, pos, i, j);
    set_and_draw_pos(all->sheet->players,
    all->init->sprite55[all->glbv->player_display +
    (all->glbv->player_type * 3)],
    all->window->window, all->game->pos_p);
    set_hit_box(all, pos, all->shamrodia->hit_box[i][j]);
    return 0;
}

int display_shamrodia(all_t *all)
{
    sfVector2f pos = {0,0};

    all->hit_box->hit_box = 0;
    for (int i = 0; i != 29; i++) {
        pos.y = (i * 98) + (all->glbv->moov.y);
        for (int j = 0; j != 38; j++) {
            pos.x = (j * 98) + (all->glbv->moov.x);
            verif_screen_shamrodia(all, pos, i, j);
        }
    }
    return 0;
}