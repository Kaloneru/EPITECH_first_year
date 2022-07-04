/*
** EPITECH PROJECT, 2022
** bad.c
** File description:
** runner
*/


typedef struct bad_attack_s {
    sfTexture *texture_bad_attack01;
    sfSprite *sprite_bad_attack01;
    sfTexture *texture_bad_attack02;
    sfSprite *sprite_bad_attack02;
    sfTexture *texture_bad_attack03;
    sfSprite *sprite_bad_attack03;
    sfTexture *texture_bad_attack04;
    sfSprite *sprite_bad_attack04;
    sfTexture *texture_bad_attack05;
    sfSprite *sprite_bad_attack05;
    sfTexture *texture_bad_attack;
    sfSprite *sprite_bad_attack;
} bad_attack_t;

typedef struct bad_s {
    sfTexture *texture_bad01;
    sfSprite *sprite_bad01;
    sfTexture *texture_bad02;
    sfSprite *sprite_bad02;
    sfTexture *texture_bad03;
    sfSprite *sprite_bad03;
    sfTexture *texture_bad04;
    sfSprite *sprite_bad04;
    sfTexture *texture_bad05;
    sfSprite *sprite_bad05;
    sfVector2f posb;
    sfVector2f scaleb;
} bad_t;

typedef struct attack_s {
    sfTexture *texture_attack01;
    sfSprite *sprite_attack01;
    sfTexture *texture_attack02;
    sfSprite *sprite_attack02;
    sfTexture *texture_attack03;
    sfSprite *sprite_attack03;
    sfTexture *texture_attack04;
    sfSprite *sprite_attack04;
    sfTexture *texture_attack05;
    sfSprite *sprite_attack05;
    sfTexture *texture_attack06;
    sfSprite *sprite_attack06;
} attack_t;


    all->bad->posb = (sfVector2f){750, 750};
    all->bad->scaleb = (sfVector2f){1, 1};
    all->bad = malloc(sizeof(bad_t));
    all->attack = malloc(sizeof(attack_t));
    all->bad_attack = malloc(sizeof(bad_attack_t));


void bad(all_t *all)
{
    all->bad->texture_bad01 = sfTexture_createFromFile("sprite/bad01.png", NULL);
    all->perso->sprite_bad01 = sfSprite_create();
    all->bad->texture_bad02 = sfTexture_createFromFile("sprite/bad02.png", NULL);
    all->bad->sprite_bad02 = sfSprite_create();
    all->bad->texture_bad03 = sTexture_createFromFile("sprite/bad03.png", NULL);
    all->bad->sprite_bad03 = sfSprite_create();
    all->bad->texture_bad04 = sfTexture_createFromFile("sprite/bad04.png", NULL);
    all->bad->sprite_bad04 = sfSprite_create();
    all->bad->texture_bad05 = sfTexture_createFromFile("sprite/bad05.png", NULL);
    all->bad->sprite_bad05 = sfSprite_create();
    all->bad->texture_bad06 = sfTexture_createFromFile("sprite/bad06.png", NULL);
    all->bad->sprite_bad06 = sfSprite_create();
}

void bad_attack(all_t *all)
{
    all->bad_attack->texture_bad_attack01 = sfTexture_createFromFile("sprite/bad_attack01.png", NULL);
    all->bad_attack->sprite_bad_attack01 = sfSprite_create();
    all->bad_attack->texture_bad_attack02 = sfTexture_createFromFile("sprite/bad_attack02.png", NULL);
    all->bad_attack->sprite_bad_attack02 = sfSprite_create();
    all->bad_attack->texture_bad_attack03 = sfTexture_createFromFile("sprite/bad_attack03.png", NULL);
    all->bad_attack->sprite_bad_attack03 = sfSprite_create();
    all->bad_attack->texture_bad_attack04 = sfTexture_createFromFile("sprite/bad_attack04.png", NULL);
    all->bad_attack->sprite_bad_attack04 = sfSprite_create();
    all->bad_attack->texture_bad_attack05 = sfTexture_createFromFile("sprite/bad_attack05.png", NULL);
    all->bad_attack->sprite_bad_attack05 = sfSprite_create();
    all->bad_attack->texture_bad_attack = sfTexture_createFromFile("sprite/bad_attack.png", NULL);
    all->bad_attack->sprite_bad_attack = sfSprite_create();
}

void attack(all_t *all)
{
    all->attack->texture_attack01 = sfTexture_createFromFile("sprite/attack01.png", NULL);
    all->perso->sprite_attack01 = sfSprite_create();
    all->attack->texture_attack02 = sfTexture_createFromFile("sprite/attack02.png", NULL);
    all->attack->sprite_attack02 = sfSprite_create();
    all->attack->texture_attack03 = sTexture_createFromFile("sprite/attack03.png", NULL);
    all->attack->sprite_attack03 = sfSprite_create();
    all->attack->texture_attack04 = sfTexture_createFromFile("sprite/attack04.png", NULL);
    all->attack->sprite_attack04 = sfSprite_create();
    all->attack->texture_attack05 = sfTexture_createFromFile("sprite/attack05.png", NULL);
    all->attack->sprite_attack05 = sfSprite_create();
    all->attack->texture_attack06 = sfTexture_createFromFile("sprite/attack06.png", NULL);
    all->attack->sprite_attack06 = sfSprite_create();
}

int display_bad(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter <= 150) {
        sfRenderWindow_drawSprite(window, all->bad->sprite_bad01, NULL);
        sfSprite_setTexture(all->bad->sprite_bad01, all->bad->texture_bad01, sfFalse\);
        sfSprite_setScale(all->bad->sprite_bad01, all->bad->scalep);
        sfSprite_setPosition(all->bad->sprite_bad01, all->bad->posp);
        counter++;
    }
    if (counter > 150 && counter <= 300) {
        sfRenderWindow_drawSprite(window, all->bad->sprite_bad02, NULL);
        sfSprite_setTexture(all->bad->sprite_bad02, all->bad->texture_bad02, sfFalse);
        sfSprite_setScale(all->bad->sprite_bad02, all->bad->scalep);
        sfSprite_setPosition(all->bad->sprite_bad02, all->bad->posp);
        counter++;
    }
    if (counter > 300 && counter <= 450) {
        sfRenderWindow_drawSprite(window, all->bad->sprite_bad03, NULL);
        sfSprite_setTexture(all->bad->sprite_bad03, all->bad->texture_bad03, sfFalse);
        sfSprite_setScale(all->bad->sprite_bad03, all->bad->scalep);
        sfSprite_setPosition(all->bad->sprite_bad03, all->bad->posp);
        counter++;
    }
    if (counter > 450 && counter <= 600) {
        sfRenderWindow_drawSprite(window, all->bad->sprite_bad04, NULL);
        sfSprite_setTexture(all->bad->sprite_bad04, all->bad->texture_bad04, sfFalse);
        sfSprite_setScale(all->bad->sprite_bad04, all->bad->scalep);
        sfSprite_setPosition(all->bad->sprite_bad04, all->bad->posp);
        counter++;
    }
    if (counter > 600 && counter <= 750) {
        sfRenderWindow_drawSprite(window, all->bad->sprite_bad05, NULL);
        sfSprite_setTexture(all->bad->sprite_bad05, all->bad->texture_bad05, sfFalse);
        sfSprite_setScale(all->bad->sprite_bad05, all->bad->scalep);
        sfSprite_setPosition(all->bad->sprite_bad05, all->bad->posp);
        counter++;

    }
    if (counter > 750) {
        sfRenderWindow_drawSprite(window, all->bad->sprite_bad06, NULL);
        sfSprite_setTexture(all->bad->sprite_bad06, all->bad->texture_bad06, sfFalse);
        sfSprite_setScale(all->bad->sprite_bad06, all->bad->scalep);
        sfSprite_setPosition(all->bad->sprite_bad06, all->bad->posp);
        counter++;
        if (counter == 900)
            counter = 0;
    }    
    return counter;
}

int display_bad_attack(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter <= 150) {
        sfRenderWindow_drawSprite(window, all->bad_attack->sprite_bad_attack01, NULL);
        sfSprite_setTexture(all->bad_attack->sprite_bad_attack01, all->bad_attack->texture_bad_attack01, sfFalse);
        sfSprite_setScale(all->bad_attack->sprite_bad_attack01, all->bad_attack->scalep);
        sfSprite_setPosition(all->bad_attack->sprite_bad_attack01, all->bad_attack->posp);
        counter++;
    }
    if (counter > 150 && counter <= 300) {
        sfRenderWindow_drawSprite(window, all->bad_attack->sprite_bad_attack02, NULL);
        sfSprite_setTexture(all->bad_attack->sprite_bad_attack02, all->bad_attack->texture_bad_attack02, sfFalse);
        sfSprite_setScale(all->bad_attack->sprite_bad_attack02, all->bad_attack->scalep);
        sfSprite_setPosition(all->bad_attack->sprite_bad_attack02, all->bad_attack->posp);
        counter++;
    }
    if (counter > 300 && counter <= 450) {
        sfRenderWindow_drawSprite(window, all->bad_attack->sprite_bad_attack03, NULL);
        sfSprite_setTexture(all->bad_attack->sprite_bad_attack03, all->bad_attack->texture_bad_attack03, sfFalse);
        sfSprite_setScale(all->bad_attack->sprite_bad_attack03, all->bad_attack->scalep);
        sfSprite_setPosition(all->bad_attack->sprite_bad_attack03, all->bad_attack->posp);
        counter++;
    }
    if (counter > 450 && counter <= 600) {
        sfRenderWindow_drawSprite(window, all->bad_attack->sprite_bad_attack04, NULL);
        sfSprite_setTexture(all->bad_attack->sprite_bad_attack04, all->bad_attack->texture_bad_attack04, sfFalse);
        sfSprite_setScale(all->bad_attack->sprite_bad_attack04, all->bad_attack->scalep);
        sfSprite_setPosition(all->bad_attack->sprite_bad_attack04, all->bad_attack->posp);
        counter++;
    }
    if (counter > 600 && counter <= 750) {
        sfRenderWindow_drawSprite(window, all->bad_attack->sprite_bad_attack05, NULL);
        sfSprite_setTexture(all->bad_attack->sprite_bad_attack05, all->bad_attack->texture_bad_attack05, sfFalse);
        sfSprite_setScale(all->bad_attack->sprite_bad_attack05, all->bad_attack->scalep);
        sfSprite_setPosition(all->bad_attack->sprite_bad_attack05, all->bad_attack->posp);
        counter++;

    }
    if (counter > 750) {
        sfRenderWindow_drawSprite(window, all->bad_attack->sprite_bad_attack06, NULL);
        sfSprite_setTexture(all->bad_attack->sprite_bad_attack06, all->bad_attack->texture_bad_attack06, sfFalse);
        sfSprite_setScale(all->bad_attack->sprite_bad_attack06, all->bad_attack->scalep);
        sfSprite_setPosition(all->bad_attack->sprite_bad_attack06, all->bad_attack->posp);
        counter++;
        if (counter == 900)
            counter = 0;
    }
    return counter;
}

int display_attack(sfRenderWindow *window, int counter, all_t *all)
{
    if (counter <= 150) {
            sfRenderWindow_drawSprite(window, all->attack->sprite_attack01, NULL);
            sfSprite_setTexture(all->attack->sprite_attack01, all->attack->texture_attack01, sfFalse);
            sfSprite_setScale(all->attack->sprite_attack01, all->attack->scalep);
            sfSprite_setPosition(all->attack->sprite_attack01, all->attack->posp);
            counter++;
        }
          if (counter > 300 && counter <= 450) {
            sfRenderWindow_drawSprite(window, all->attack->sprite_attack03, NULL);
            sfSprite_setTexture(all->attack->sprite_attack03, all->attack->texture_attack03, sfFalse\
);
            sfSprite_setScale(all->attack->sprite_attack03, all->attack->scalep);
            sfSprite_setPosition(all->attack->sprite_attack03, all->attack->posp);
            counter++;
	}
        if (counter > 450 && counter <= 600) {
            sfRenderWindow_drawSprite(window, all->attack->sprite_attack04, NULL);
            sfSprite_setTexture(all->attack->sprite_attack04, all->attack->texture_attack04, sfFalse\
);
            sfSprite_setScale(all->attack->sprite_attack04, all->attack->scalep);
            sfSprite_setPosition(all->attack->sprite_attack04, all->attack->posp);
            counter++;
        }
        if (counter > 600 && counter <= 750) {
            sfRenderWindow_drawSprite(window, all->attack->sprite_attack05, NULL);
            sfSprite_setTexture(all->attack->sprite_attack05, all->attack->texture_attack05, sfFalse\
);
            sfSprite_setScale(all->attack->sprite_attack05, all->attack->scalep);
            sfSprite_setPosition(all->attack->sprite_attack05, all->attack->posp);
            counter++;
        }
        if (counter > 750) {
            sfRenderWindow_drawSprite(window, all->attack->sprite_attack06, NULL);
            sfSprite_setTexture(all->attack->sprite_attack06, all->attack->texture_attack06, sfFalse\
);
            sfSprite_setScale(all->attack->sprite_attack06, all->attack->scalep);
            sfSprite_setPosition(all->attack->sprite_attack06, all->attack->posp);
            counter++;
            if (counter == 900)
                counter = 0;
        }
    }
    return counter;
}
