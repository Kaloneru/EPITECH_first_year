/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** mouse_on_button
*/

#include "../../include/my_rpg.h"

int mouse_on_button(sfVector2i m_pos, sfIntRect rect)
{
    int x = m_pos.x;
    int y = m_pos.y;
    int x1 = rect.left;
    int x2 = rect.width;
    int y1 = rect.top;
    int y2 = rect.height;

    if ((x > x1 && x < x2) && (y > y1 && y < y2))
        return 1;
    return 0;
}
