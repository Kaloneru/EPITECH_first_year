/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** fight_split.c
*/

#include "../../include/my_rpg.h"
#include "../../include/macro.h"

int display_fond(all_t *all, int fond)
{
    set_and_draw(all->fight->sprite_fond,
    all->fight->rect_fond[fond], all->window->window);
    return 0;
}

void display_enemy(all_t *all)
{
    sfVector2f pos = {1200, 300};
    sfVector2f pos_life = {1100, 325};

    if (all->ennemy->type == PNJ) {
        sfSprite_setScale(all->sheet->pnj, all->scale->scale4);
        set_and_draw_pos(all->sheet->pnj,
        all->init->sprite55[all->ennemy->pnj],
        all->window->window, pos);
    }
    if (all->ennemy->type == MONSTER) {
        sfSprite_setScale(all->sheet->enemi, all->scale->scale4);
        if (all->ennemy->monster == SLIME_TO_DISPLAY)
            set_and_draw_pos(all->sheet->enemi,
            all->init->sprite55[all->ennemy->monster],
            all->window->window, pos);
        if (all->ennemy->monster == BOSS_TO_DISPLAY)
            set_and_draw_pos(all->sheet->enemi,
            all->init->sprite55[4], all->window->window, pos);
    }
    print_text_real(all, pos_life, display_stats("PV : ",
    all->ennemy->life_left, all->ennemy->life));
    sfSprite_setScale(all->sheet->pnj, all->scale->scale2);
    sfSprite_setScale(all->sheet->enemi, all->scale->scale2);
}

int display_wrandrall(all_t *all)
{
    sfVector2f pos_life_wrandrall = {600, 425};
    sfVector2f pos = {400, 400};

    set_and_draw_pos(all->sheet->players, all->init->sprite55[7],
    all->window->window, pos);
    print_text_real(all, pos_life_wrandrall, display_stats("PV : ",
    all->wrandrall->lifepoint_left, all->wrandrall->lifepoint));
    return 0;
}

int display_text_bar1(all_t *all, int screen)
{
    sfVector2f pos = {300, 500};
    sfVector2f pos_continue = {1600, 800};
    sfVector2f pos_button_continue = {1640, 880};

    sfSprite_setScale(all->sheet->button, all->scale->scale5);
    set_and_draw_pos(all->sheet->button, all->init->sprite1025[0],
    all->window->window, pos);
    sfSprite_setScale(all->sheet->button, all->scale->scale4);
    display_button(all, pos_continue, screen, BUTTON_CONTINUE1);
    print_text_real_size(all, pos_button_continue, "continue", 30);
    return 0;
}

int display_text_bar2(all_t *all, int screen)
{
    sfVector2f pos = {300, 500};
    sfVector2f pos_continue = {25, 800};
    sfVector2f pos_button_continue = {65, 880};

    sfSprite_setScale(all->sheet->button, all->scale->scale5);
    set_and_draw_pos(all->sheet->button, all->init->sprite1025[0],
    all->window->window, pos);
    sfSprite_setScale(all->sheet->button, all->scale->scale4);
    display_button(all, pos_continue, screen, BUTTON_CONTINUE2);
    print_text_real_size(all, pos_button_continue, "continue", 30);
    return 0;
}
