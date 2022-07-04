/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** menu_pause.c
*/

#include "../../include/my_rpg.h"
#include "../../include/macro.h"

static int display_pause(all_t *all)
{
    sfVector2f pos_button_menu = {150, 300};
    sfVector2f pos_button_option = {150, 425};
    sfVector2f pos_button_quit = {150, 550};
    sfVector2f pos_text_option = {195, 475};
    sfVector2f pos_text_menu = {200, 350};
    sfVector2f pos_text_quit = {205, 600};
    display_button(all, pos_button_menu, PAGE_ONE_SCREEN, PAGE_ONE_SCREEN);
    display_button(all, pos_button_quit, QUIT_SCREEN, QUIT_SCREEN);
    display_button(all, pos_button_option, OPTION_SCREEN, OPTION_SCREEN);
    pos_buttons(all, pos_button_quit, QUIT_SCREEN);
    pos_buttons(all, pos_button_option, OPTION_SCREEN);
    pos_buttons(all, pos_button_menu, PAGE_ONE_SCREEN);
    print_text_real(all, pos_text_menu, "Menu");
    print_text_real(all, pos_text_option, "Option");
    print_text_real(all, pos_text_quit, "Quit");
    return 0;
}

int menu_pause(all_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        if (all->glbv->pause == 0)
            all->glbv->pause = 1;
        else
            all->glbv->pause = 0;
    }
    if (all->glbv->pause == 1)
        display_pause(all);
    return 0;
}
