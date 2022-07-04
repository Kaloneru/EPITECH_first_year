/*
** EPITECH PROJECT, 2022
** obstacle.c
** File description:
** runner
*/
#include "include/include.h"
#include "include/ouais.h"

void obstacle(all_t *all)
{
    all->obstacle->texture_obstacle01 = sfTexture_createFromFile(\
        "sprite/first_obstacle.png", NULL);
    all->obstacle->sprite_obstacle01 = sfSprite_create();
}

int random_x02(void)
{
    int x = rand() % 2000;

    while (x < 1000)
        x = rand() % 2000;
    return x;
}

int random_x01(void)
{
    int x = rand() % 4000;

    while (x < 2000)
        x = rand() % 4000;
    return x;
}

void obstacle_if(all_t *all, map_t *map)
{
    if (map->i_map == 30)
        all->game->screen = 4;
    all->obstacle->pos_ob01.x -= 2;
    if (all->obstacle->pos_ob01.x <= -150) {
        all->obstacle->pos_ob01.x = \
            (my_atoi(map->map[map->i_map]) \
             - (my_atoi(map->map[map->i_map - 2])));
        all->score += 1;
    } else {
        all->obstacle->pos_ob01_2.x -= 2;
        if (all->obstacle->pos_ob01_2.x <= -150) {
            all->obstacle->pos_ob01_2.x = \
                (my_atoi(map->map[map->i_map + 1]) \
                 - (my_atoi(map->map[map->i_map - 1])));
            map->i_map += 2;
            all->score += 1;
        }
    }
}

/*void obstacle_if(all_t *all)
{
    int rand = random_x01();
    
    all->obstacle->pos_ob01.x -= 2;
    if (all->obstacle->pos_ob01.x <= -150)
        all->obstacle->pos_ob01.x = rand;
    all->obstacle->pos_ob01_2.x -= 2;
    if (all->obstacle->pos_ob01_2.x <= -150)
        all->obstacle->pos_ob01_2.x = rand + random_x02();
        }*/

void display_obstacle_inf(sfRenderWindow *window, all_t *all)
{
    sfRenderWindow_drawSprite(window,\
                              all->obstacle->sprite_obstacle01, NULL);
    sfSprite_setTexture(\
        all->obstacle->sprite_obstacle01, \
                        all->obstacle->texture_obstacle01, sfFalse);
    sfSprite_setScale(\
        all->obstacle->sprite_obstacle01, all->obstacle->scale_ob01);
    sfSprite_setPosition(\
        all->obstacle->sprite_obstacle01, all->obstacle->pos_ob01);

    sfRenderWindow_drawSprite(\
        window, all->obstacle->sprite_obstacle01, NULL);
    sfSprite_setTexture(all->obstacle->sprite_obstacle01, \
                        all->obstacle->texture_obstacle01, sfFalse);
    sfSprite_setScale(\
        all->obstacle->sprite_obstacle01, all->obstacle->scale_ob01);
    sfSprite_setPosition(\
        all->obstacle->sprite_obstacle01, all->obstacle->pos_ob01_2);
}
