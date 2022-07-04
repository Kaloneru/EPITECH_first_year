/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** go_up.c
*/

#include "../../include/my_rpg.h"

static int go_up_next(all_t *all)
{
        int r = 0;

    if ((r = hit_box_to_int(&all->game->colision_box, all))
    != all->menu->screen) {
        all->glbv->moov.y -= 50;
        if (r != 10) {
            all->glbv->prec_pos.x = all->glbv->moov.x;
            all->glbv->prec_pos.y = all->glbv->moov.y;
            all->glbv->moov.x = -525;
            all->glbv->moov.y = -1800;
        } else {
            all->game->pos_p.x = all->glbv->prec_pos.x;
            all->game->pos_p.y = all->glbv->prec_pos.y;
        }
    }
    all->menu->screen = r;
    return 0;
}

int go_up(all_t *all, sfVector2f pos_p)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ))
        pos_p.y -= all->glbv->vitesse * all->glbv->run;
    if (is_on_hit_box(all, pos_p) == 0) {
        if (sfKeyboard_isKeyPressed(sfKeyZ)) {
            all->glbv->moov.y += all->glbv->vitesse * all->glbv->run;
            all->glbv->player_type = 3;
        }
    } else
        go_up_next(all);
    return 0;
}