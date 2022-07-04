/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_other.c
*/

#include "../../include/my_rpg.h"

int init_all_pos(all_t *all)
{
    all->menu->pos_fond.x = 0;
    all->menu->pos_fond.y = 0;
    all->menu->pos_forest_two.x = 1920;
    all->menu->pos_forest_two.y = 0;
    all->menu->pos_background.x = 350;
    all->menu->pos_background.y = -50;
    all->game->inventory_pos.x = 900;
    all->game->inventory_pos.y = 200;
    all->game->stats_pos.x = 300;
    all->game->stats_pos.y = 200;
    return 0;
}

void init_all_rect(all_t *all)
{
    all->init->sprite55 = init_sprite_rect(1600, 50, 50, 40);
    all->init->sprite1025 = init_sprite_rect(1600, 50, 50, 20);
    all->init->sprite510 = init_sprite_rect(800, 50, 100, 40);
    all->init->sprite2020 = init_sprite_rect(100, 200, 200, 10);
    all->fight->rect_fond = init_sprite_rect(10, 800, 500, 5);
    all->init->sprite2010 = init_sprite_rect(200, 200, 100, 10);
    init_map(all);
}

void init_solo_sprite(all_t *all)
{
    all->menu->sprite_background =
    get_sprite("res/img/title_screen/team_rda.png");
    all->menu->curs = get_sprite("res/img/title_screen/pos_cursor.png");
    all->menu->forest = get_sprite("res/img/title_screen/forest_parralax.png");
    all->menu->forest_two =
    get_sprite("res/img/title_screen/forest_parralax.png");
    all->game->inventory = get_sprite("res/img/title_screen/inventory.png");
    all->game->inventory_case =
    get_sprite("res/img/title_screen/inventory_slot.png");
    all->game->stats = get_sprite("res/img/title_screen/stats.png");
}

void init_sprites_sheets_two(all_t *all)
{
    all->sheet->fight = get_sprite("res/img/spritesheets/fight.png");
    all->sheet->item = get_sprite("res/img/spritesheets/items.png");
    all->sheet->obj = get_sprite("res/img/spritesheets/obj.png");
    all->sheet->pnj = get_sprite("res/img/spritesheets/pnj.png");
    all->sheet->ground = get_sprite("res/img/spritesheets/ground.png");
    all->sheet->build = get_sprite("res/img/spritesheets/build.png");
    all->sheet->button = get_sprite("res/img/spritesheets/buttons.png");
    all->sheet->cust_p = get_sprite("res/img/spritesheets/cust_player.png");
    all->sheet->enemi = get_sprite("res/img/spritesheets/ennemy.png");
    all->sheet->players = get_sprite("res/img/spritesheets/player.png");
    all->fight->sprite_fond =
    get_sprite("res/fight/sprite_sheet_fond_fight.png");
}

int init_glbv(all_t *all)
{
    all->glbv->moov.x = 0;
    all->glbv->moov.y = 0;
    all->glbv->vitesse = 8;
    all->glbv->run = 1;
    all->glbv->display_money = 0;
    all->game->money = 1827;
    all->glbv->pause = 0;
    all->glbv->display_inventory = 0;
    return 0;
}
