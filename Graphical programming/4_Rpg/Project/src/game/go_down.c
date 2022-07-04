/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** go_down.c
*/

#include "../../include/my_rpg.h"

int go_down_next(all_t *all)
{
    int r = 0;

    if ((r = hit_box_to_int(&all->game->colision_box, all))
    != all->menu->screen) {
        all->game->pos_p.y -= 50;
        if (r != 10) {
            all->glbv->prec_pos.x = all->glbv->moov.x;
            all->glbv->prec_pos.y = all->glbv->moov.y;
            all->glbv->moov.x = -525;
            all->glbv->moov.y = -1800;
        } else {
            all->glbv->moov.x = all->glbv->prec_pos.x;
            all->glbv->moov.y = all->glbv->prec_pos.y;
        }
    }
    all->menu->screen = r;
    return 0;
}

int go_down(all_t *all, sfVector2f pos_p)
{
    if (sfKeyboard_isKeyPressed(sfKeyS))
        pos_p.y += all->glbv->vitesse * all->glbv->run;
    if (is_on_hit_box(all, pos_p) == 0) {
        if (sfKeyboard_isKeyPressed(sfKeyS)) {
            all->glbv->moov.y -= all->glbv->vitesse * all->glbv->run;
            all->glbv->player_type = 0;
        } else
            go_down_next(all);
    }
    return 0;
}