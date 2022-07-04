/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** mooc
*/

#include "../../include/my_rpg.h"
#include "../../include/macro.h"

int hit_box_to_int(sfIntRect *rect, all_t *all)
{
    if (rect->height - rect->top == 184)
        return HOME_SCREEN;
    if (rect->height - rect->top == 185)
        return SHAMRODIA_TEMPLE_SCREEN;
    if (rect->height - rect->top == 186)
        return TAVERNE_SCREEN;
    if (rect->height - rect->top == 187)
        return ESSINDE_TEMPLE;
    if (rect->height - rect->top == 95)
        return GAME_SCREEN;
    if (rect->height - rect->top >= 97 && rect->height - rect->top <= 100)
        lunch_fight(all);
    return all->menu->screen;
}

static int go_left(all_t *all, sfVector2f pos_p)
{
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        pos_p.x -= all->glbv->vitesse * all->glbv->run;
    if (is_on_hit_box(all, pos_p) == 0) {
        if (sfKeyboard_isKeyPressed(sfKeyQ)){
            all->glbv->moov.x += all->glbv->vitesse * all->glbv->run;
            all->glbv->player_type = 1;
        }
    }
    return 0;
}

static int go_right(all_t *all, sfVector2f pos_p)
{
    if (sfKeyboard_isKeyPressed(sfKeyD))
        pos_p.x += all->glbv->vitesse * all->glbv->run;
    if (is_on_hit_box(all, pos_p) == 0) {
        if (sfKeyboard_isKeyPressed(sfKeyD)) {
            all->glbv->moov.x -= all->glbv->vitesse * all->glbv->run;
            all->glbv->player_type = 2;
        }
    }
    return 0;
}

int moov(all_t *all)
{
    sfVector2f pos_p;
    pos_p.x = all->game->pos_p.x;
    pos_p.y = all->game->pos_p.y;

    go_up(all, pos_p);
    go_down(all, pos_p);
    go_left(all, pos_p);
    go_right(all, pos_p);
    all->glbv->run = 1;
    if (sfKeyboard_isKeyPressed(sfKeyLShift))
        all->glbv->run = 5;
    return 0;
}
