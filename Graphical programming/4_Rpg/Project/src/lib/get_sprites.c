/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** get_sprites.c
*/

#include "../../include/my_rpg.h"

sfSprite *get_sprite(char *img)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture;

    texture = sfTexture_createFromFile (img, NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    return sprite;
}
