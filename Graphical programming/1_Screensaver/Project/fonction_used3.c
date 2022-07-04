/*
** EPITECH PROJECT, 2021
** fonction_used3.c
** File description:
** screensaver
*/
#include "include.h"

int rand_number(int intt)
{
    return(rand() % intt);
}

void fonctionh(void)
{
    my_printf("   usage : ./screensaver animation id\n");
    my_printf("   animation id is the ID of the animaton you want to execute andfrom 1 to 4\n")\
;
    my_printf("   -d print the descrption of the animations\n");
    my_printf("   -h print the usage of the binary file\n");
}

void fonctiond(void)
{
    my_printf("   animation 1 : random lines, print some randoms line of a random color\n");
    my_printf("   animation 2 : random colones, print 34 col of random colors\n");
    my_printf("   animation 3 : america fuck yeah, print a animate usa flag\n");
    my_printf("   animation 4 : DVD, print the screensaver of dvd but in a simple way\n");
}

void fonction1(framebuffer_t *framebuffer)
{
    my_put_line_rand_col(framebuffer, 0, 799);
}

void fonction2(framebuffer_t *framebuffer)
{
    for (int x0 = 0; x0 < 800; x0 = x0 + 24) {
        my_put_line_rand_col(framebuffer, x0, x0 + 12);
    }
}
