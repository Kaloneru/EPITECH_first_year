/*
** EPITECH PROJECT, 2022
** modif_rect.c
** File description:
** modif the volume sprites
*/

#include "../../include/include.h"

static int modif_volume_four(all_t *all, int i)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && (all->menu->m_pos.y > 758 && all->menu->m_pos.y < 830)
        && i == 1 && all->menu->m_pos.x < 1000) {
        all->sound->volume = 9;
        i = 0;
    }
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && (all->menu->m_pos.y > 830 && all->menu->m_pos.y < 902)
        && i == 1 && all->menu->m_pos.x < 1000) {
        all->sound->volume = 10;
        i = 0;
    }
    return i;
}

static int modif_volume_three(all_t *all, int i)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && (all->menu->m_pos.y > 542 && all->menu->m_pos.y < 614)
        && i == 1 && all->menu->m_pos.x < 1000) {
        all->sound->volume = 6;
        i = 0;
    }
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && (all->menu->m_pos.y > 614 && all->menu->m_pos.y < 686)
        && i == 1 && all->menu->m_pos.x < 1000) {
        all->sound->volume = 7;
        i = 0;
    }
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && (all->menu->m_pos.y < 686 && all->menu->m_pos.y < 758)
        && i == 1 && all->menu->m_pos.x < 1000) {
        all->sound->volume = 8;
        i = 0;
    }
    return i;
}

static int modif_volume_two(all_t *all, int i)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && (all->menu->m_pos.y > 328 && all->menu->m_pos.y < 398)
        && i == 1 && all->menu->m_pos.x < 1000) {
        all->sound->volume = 3;
        i = 0;
    }
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && (all->menu->m_pos.y > 398 && all->menu->m_pos.y < 470)
        && i == 1 && all->menu->m_pos.x < 1000) {
        all->sound->volume = 4;
        i = 0;
    }
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && (all->menu->m_pos.y > 470 && all->menu->m_pos.y < 542)
        && i == 1 && all->menu->m_pos.x < 1000) {
        all->sound->volume = 5;
        i = 0;
    }
    return i;
}

static int modif_volume_one(all_t *all, int i)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && (all->menu->m_pos.y > 0 && all->menu->m_pos.y < 182)
        && i == 1 && all->menu->m_pos.x < 1000) {
        all->sound->volume = 0;
        i = 0;
    }
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && (all->menu->m_pos.y > 182 && all->menu->m_pos.y < 254)
        && i == 1 && all->menu->m_pos.x < 1000) {
        all->sound->volume = 1;
        i = 0;
    }
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && (all->menu->m_pos.y > 254 && all->menu->m_pos.y < 328)
        && i == 1 && all->menu->m_pos.x < 1000) {
        all->sound->volume = 2;
        i = 0;
    }
    return i;
}

void modif_rect(all_t *all, int i)
{
    i = modif_volume_one(all, i);
    i = modif_volume_two(all, i);
    i = modif_volume_three(all, i);
    i = modif_volume_four(all, i);
}
