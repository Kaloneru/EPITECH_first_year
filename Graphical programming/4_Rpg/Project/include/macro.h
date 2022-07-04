/*
** EPITECH PROJECT, 2022
** macro.h
** File description:
** all_the macro uses
*/

#ifndef MACRO_H_
    #define MACRO_H_
//  buttons //limite a 50 augmenter le malloc si besoin de plus
//  de 0 a 9 pour le menu
//  all->menu->screen
    #define PAGE_ONE_SCREEN 1
    #define OPTION_SCREEN 2
    #define CREDIT_SCREEN 3
    #define QUIT_SCREEN 4
    #define HOW_TO_PLAY_SCREEN 5

    #define GAME_SCREEN 10
    #define HOME_SCREEN 11
    #define ESSINDE_TEMPLE 12
    #define SHAMRODIA_TEMPLE_SCREEN 13
    #define TAVERNE_SCREEN 14
    #define FIGHT_SCREEN 30
    #define MENU_ATTACK 31
    #define DESCRIPTION_VERTICAL 32
    #define DESCRIPTION_TELEPORTRATON 33
    #define DESCRIPTION_FUITE 34
    #define DESCRIPTION_SATANAS 35
    #define CONSEQUENCES_VERTICAL 36
    #define CONSEQUENCES_TELEPORTATION 37
    #define CONSEQUENCES_FUITE 38
    #define CONSEQUENCES_SATANAS 39
    #define ENNEMY_TURN 40
    #define ENEMY_MESSAGE 41
    #define INVENTARY 45
    #define WIN 46
    #define LOSE 47
    #define SCREEN_RUN_AWAY 48

//  button
    #define START_GAME 0
    #define OPTION 1
    #define CREDIT 2
    #define QUIT 3
    #define HOW_TO_PLAY 4
    #define MENU 5
//  de 10 a 29 pour le jeu/menu pause
    #define PAUSE 10
//  de 30 a 39 pour le fight
    #define ATTACK 30
    #define RUN_AWAY 31
    #define BUTTON_COUP_VERTICAL 32
    #define BUTTON_TELEPORTATION 33
    #define BUTTON_FUITE 34
    #define BUTTON_SATANAS 35
    #define BUTTON_CONTINUE1 36
    #define SACOCHE 37
    #define BUTTON_CONTINUE2 38
//  fight
    #define PNJ 0
    #define MOUMOUNE 1
    #define SLIME 2
    #define BOSS 3

//fight
//  places
    #define OUTSIDE 0
    #define TOWN 1
    #define FOREST 2
    #define CURCH 3
    #define PUBLIC_HOUSE 4
//  attacks
    #define COUP_VERTICAL 0
    #define TELEPORTATION 1
    #define TENTATIVE_DE_FUITE 2
    #define VEDI_RETRO_SATANAS 3
// sprite sheet ennemy
    #define PNJ 0
    #define MONSTER 1
// num ds la sprite sheet
    #define SLIME_TO_DISPLAY 0
    #define BOSS_TO_DISPLAY 4
#endif/*MACRO_H_*/
