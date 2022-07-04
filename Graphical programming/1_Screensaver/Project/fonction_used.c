/*
** EPITECH PROJECT, 2021
** fonction_used.c
** File description:
** ouais
*/
#include "include.h"

void framebuffer_destroy(framebuffer_t *framebuffer)
{
    free(framebuffer->pixels);
    free(framebuffer);
}

void my_put_pixel_rand(framebuffer_t *framebuffer, unsigned int x, unsigned int y, int *rand_col)
{
    framebuffer->pixels[0 + 4 * (y * framebuffer->width + x)] = rand_col[1];
    framebuffer->pixels[1 + 4 * (y * framebuffer->width + x)] = rand_col[2];
    framebuffer->pixels[2 + 4 * (y * framebuffer->width + x)] = rand_col[3];
    framebuffer->pixels[3 + 4 * (y * framebuffer->width + x)] = rand_col[4];
}

void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color)
{
    framebuffer->pixels[4 * (y * framebuffer->width+x) ] = color.r;
    framebuffer->pixels[4 * (y * framebuffer->width+x) + 1] = color.g;
    framebuffer->pixels[4 * (y * framebuffer->width+x) + 2] = color.b;
    framebuffer->pixels[4 * (y * framebuffer->width+x) + 3] = color.a;
}

int random_x()
{
    return(rand() % 800);
}

int random_y(int y2, int y3)
{
    int ran = rand() % y3;
      while (ran < y2)
          ran = rand() % y3;
    return ran;
}
