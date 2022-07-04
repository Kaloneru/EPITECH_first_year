/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** parameter
*/

#include "../../include/my_rpg.h"

void modif_rect3(all_t *all)
{
    if (all->menu->m_pos.y >= 324 && all->menu->m_pos.y <= 347) {
        all->menu->volume = 1;
        sfSound_setVolume(all->sound->music_jeu, 80);
    }
    if (all->menu->m_pos.y >= 358 && all->menu->m_pos.y <= 384) {
        all->menu->volume = 2;
        sfSound_setVolume(all->sound->music_jeu, 70);
    }
    if (all->menu->m_pos.y >= 394 && all->menu->m_pos.y <= 420) {
        all->menu->volume = 3;
        sfSound_setVolume(all->sound->music_jeu, 60);
    }
    if (all->menu->m_pos.y >= 420 && all->menu->m_pos.y <= 445) {
        all->menu->volume = 4;
        sfSound_setVolume(all->sound->music_jeu, 50);
    }
}

void modif_rect2(all_t *all)
{
    if (all->menu->m_pos.y >= 466 && all->menu->m_pos.y <= 492) {
        all->menu->volume = 5;
        sfSound_setVolume(all->sound->music_jeu, 40);
    }
    if (all->menu->m_pos.y >= 492 && all->menu->m_pos.y <= 516) {
        all->menu->volume = 6;
        sfSound_setVolume(all->sound->music_jeu, 30);
    }
    if (all->menu->m_pos.y >= 534 && all->menu->m_pos.y <= 565) {
        all->menu->volume = 7;
        sfSound_setVolume(all->sound->music_jeu, 20);
    }
    if (all->menu->m_pos.y >= 574 && all->menu->m_pos.y <= 599) {
        all->menu->volume = 8;
        sfSound_setVolume(all->sound->music_jeu, 10);
    }
}

void modif_sprite_option(all_t *all)
{
    if (all->window->event.mouseButton.type == sfEvtMouseButtonPressed
    && (all->menu->m_pos.x >= 259 && all->menu->m_pos.x <= 296)) {
        if (all->menu->m_pos.y >= 610 && all->menu->m_pos.y <= 637) {
            all->menu->volume = 9;
            sfSound_setVolume(all->sound->music_jeu, 0);
        }
        if (all->menu->m_pos.y >= 284 && all->menu->m_pos.y <= 312) {
            all->menu->volume = 0;
            sfSound_setVolume(all->sound->music_jeu, 90);
        }
        modif_rect2(all);
        modif_rect3(all);
    }
}

static void display_button_menu(all_t *all, sfVector2f pos)
{
    modif_sprite_option(all);
    sfSprite_setScale(all->sheet->button, (sfVector2f){7, 9});
    set_and_draw_pos
    (all->sheet->button, all->init->sprite1025[all->menu->volume + 3],
    all->window->window, pos);
    sfSprite_setScale(all->sheet->button, all->scale->scale3);
}

int parameter(all_t *all)
{
    sfVector2f pos_sound = {100, 250};
    sfVector2f pos_back = {100, 700};
    sfVector2f pos_text = {145, 750};
    sfVector2f pos_volume = {125, 200};
    display_button(all, pos_back, 1, 5);
    display_button_menu(all, pos_sound);
    print_text_harlow(all, pos_text, "Back");
    print_text_real(all, pos_volume, "Volume :");
    return 0;
}
