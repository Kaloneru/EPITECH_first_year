/*
** EPITECH PROJECT, 2021
** fonction_used2.c
** File description:
** ouais
*/
#include "include.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));
    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(width * height * 32 / 8);
    return framebuffer;
}

int my_put_line_rand_col(framebuffer_t *buffer, int x0, int x1)
{
    int y0 = rand() % 600;
    int y1 = rand() % 600;
    int abs_x0_x1 = abs(x1 - x0);
    int bigest_x = x0 < x1 ? 1 : -1;
    int abs_y0_y1 = abs(y1 - y0);
    int bigest_y = y0 < y1 ? 1 : -1;
    int error = (abs_x0_x1 > abs_y0_y1 ? abs_x0_x1 : -abs_y0_y1) / 2;
    int error2;
    int rambo[4] = {rand() % 255, rand() % 255, rand() % 255, rand() % 255};

    while (1) {
        my_put_pixel_rand(buffer, x0, y0, rambo);
        if (x0 == x1 && y0 == y1)
            return (EXIT);
        error2 = error;
        if (error2 > -abs_x0_x1) {
            error -= abs_y0_y1;
            x0 += bigest_x;
        }
        if (error2 < abs_y0_y1) {
            error += abs_x0_x1;
            y0 += bigest_y;
        }
    }
}

int my_put_line(framebuffer_t *buffer, sfColor color, int x0, int x1, int y2, int y3)
{
    int y0 = random_y(y2, y3);
    int y1 = random_y(y2, y3);
    int abs_x0_x1 = abs(x1 - x0);
    int bigest_x = x0 < x1 ? 1 : -1;
    int abs_y0_y1 = abs(y1 - y0);
    int bigest_y = y0 < y1 ? 1 : -1;
    int error = (abs_x0_x1 > abs_y0_y1 ? abs_x0_x1 : -abs_y0_y1) / 2;
    int error2;
    
    while  (1) {
        my_put_pixel(buffer, x0, y0, color);
        if (x0 == x1 && y0 == y1)
            return (EXIT);
        error2 = error;
        if (error2 > -abs_x0_x1) {
            error = error - abs_y0_y1;
            x0 = x0 + bigest_x;
        }
        if (error2 < abs_y0_y1) {
            error = error + abs_x0_x1;
            y0 = y0 + bigest_y;
        }
    }
}


void fonction3(framebuffer_t *framebuffer)
{
     for (int i = 0; i != 200; i++) {
         my_put_line(framebuffer, sfBlue, 0, 350, 0, 300);
         my_put_line(framebuffer, sfWhite, 0, 799, 0, 600);
         my_put_line(framebuffer, sfRed, 350, 799, 0, 43);
         my_put_line(framebuffer, sfRed, 350, 799, 86, 129);
         my_put_line(framebuffer, sfRed, 350, 799, 172, 215);
         my_put_line(framebuffer, sfRed, 350, 799, 258, 300);
         my_put_line(framebuffer, sfRed, 0, 799, 343, 386);
         my_put_line(framebuffer, sfRed, 0, 799, 429, 472);
         my_put_line(framebuffer, sfRed, 0, 799, 515, 558);
     }
}

int fonction(framebuffer_t *framebuffer, char **argv)
{
    if (my_strcmp(argv[1], "1") == 0)
        fonction1(framebuffer);
    if (my_strcmp(argv[1], "2") == 0)
        fonction2(framebuffer);
    if (my_strcmp(argv[1], "3") == 0)
        fonction3(framebuffer);
    return 0;
}
