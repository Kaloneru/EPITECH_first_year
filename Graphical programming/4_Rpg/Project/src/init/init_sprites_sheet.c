/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** init_prites_sheet.c
*/

#include "../../include/my_rpg.h"

static int init_scale(all_t *all)
{
    all->scale->scale.x = 0.15;
    all->scale->scale.y = 0.15;
    all->scale->scale2.x = 2;
    all->scale->scale2.y = 2;
    all->scale->scale25.x = 2.5;
    all->scale->scale25.y = 2.5;
    all->scale->scale3.x = 3;
    all->scale->scale3.y = 3;
    all->menu->scale_fond.x = 1.27;
    all->menu->scale_fond.y = 1.27;
    all->menu->scale_forest_two.x = 1.27;
    all->menu->scale_forest_two.y = 1.27;
    all->menu->scale_background.x = 0.95;
    all->menu->scale_background.y = 0.95;
    all->scale->inventory.x = 1.07;
    all->scale->inventory.y = 1.07;
    all->scale->scale4.x = 5;
    all->scale->scale4.y = 5;
    all->scale->scale5.x = 25;
    all->scale->scale5.y = 15;
    return 0;
}

static int set_scale_all_sprite_sheet(all_t *all)
{
    sfSprite_setScale(all->fight->sprite_fond, all->scale->scale3);
    sfSprite_setScale(all->menu->curs, all->scale->scale);
    sfSprite_setScale(all->sheet->ground, all->scale->scale2);
    sfSprite_setScale(all->sheet->button, all->scale->scale3);
    sfSprite_setScale(all->sheet->players, all->scale->scale2);
    sfSprite_setScale(all->sheet->obj, all->scale->scale2);
    sfSprite_setScale(all->sheet->enemi, all->scale->scale2);
    sfSprite_setScale(all->sheet->build, all->scale->scale2);
    sfSprite_setScale(all->sheet->pnj, all->scale->scale25);
    sfSprite_setScale(all->menu->forest, all->menu->scale_fond);
    sfSprite_setScale(all->menu->forest_two, all->menu->scale_forest_two);
    sfSprite_setScale(all->menu->sprite_background,
    all->menu->scale_background);
    sfSprite_setScale(all->game->inventory, all->scale->scale3);
    sfSprite_setScale(all->game->stats, all->scale->scale3);
    sfSprite_setScale(all->game->inventory_case, all->scale->inventory);
    return 0;
}

static int set_pos_p(all_t *all)
{
    all->game->pos_p.x = 960;
    all->game->pos_p.y = 540;
    all->glbv->player_display = 0;
    return 0;
}

static int init_hit_box(all_t *all)
{
    all->hit_box->hit_box_all = malloc(sizeof(sfIntRect) * 401);
    return 0;
}

void init_sprites_sheets(all_t *all)
{
    init_scale(all);
    init_glbv(all);
    init_solo_sprite(all);
    set_pos_p(all);
    init_hit_box(all);
    init_sprites_sheets_two(all);
    set_scale_all_sprite_sheet(all);
    init_malloc(all);
    init_all_rect(all);
    init_all_pos(all);
    init_wrandrall(all);
}
