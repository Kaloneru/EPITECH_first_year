/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** page_one
*/

#include "../../include/my_rpg.h"
#include "../../include/macro.h"

void display_button(all_t *all, sfVector2f pos, int screen, int hit_box_nb)
{
    if (mouse_on_button(all->menu->m_pos,
    all->menu->hit_box_pos[hit_box_nb]) == 0)
        set_and_draw_pos
        (all->sheet->button,
        all->init->sprite1025[0], all->window->window, pos);
    else {
        set_and_draw_pos
        (all->sheet->button, all->init->sprite1025[1],
        all->window->window, pos);
        if (all->window->event.mouseButton.type == sfEvtMouseButtonPressed)
            set_and_draw_pos
            (all->sheet->button,  all->init->sprite1025[2],
            all->window->window, pos);
        if (all->window->event.mouseButton.type == sfEvtMouseButtonReleased)
            all->menu->screen = screen;
    }
}

static int page_one_next(all_t *all)
{
    sfVector2f pos_game = {885, 475};
    sfVector2f pos_option = {595, 400};
    sfVector2f pos_credit = {445, 650};
    sfVector2f pos_quit = {1155, 550};
    sfVector2f pos_how = {1240, 350};

    print_text_real(all, pos_game, "Start game");
    print_text_real(all, pos_credit, "Credit");
    print_text_real(all, pos_quit, "Quit");
    print_text_real(all, pos_option, "Option");
    print_text_real(all, pos_how, "How to play");
    return 0;
}

void page_one(all_t *all)
{
    sfVector2f pos_game = {870, 425};
    sfVector2f pos_option = {550, 350};
    sfVector2f pos_credit = {400, 600};
    sfVector2f pos_how_to_play = {1220, 300};
    sfVector2f pos_quit = {1100, 500};

    pos_buttons(all, pos_game, START_GAME);
    pos_buttons(all, pos_option, OPTION);
    pos_buttons(all, pos_credit, CREDIT);
    pos_buttons(all, pos_how_to_play, HOW_TO_PLAY);
    pos_buttons(all, pos_quit, QUIT);
    display_button(all, pos_game, 10, START_GAME);
    display_button(all, pos_option, 2, OPTION);
    display_button(all, pos_credit, 3, CREDIT);
    display_button(all, pos_how_to_play, 5, HOW_TO_PLAY);
    display_button(all, pos_quit, 4, QUIT);
    page_one_next(all);
}
