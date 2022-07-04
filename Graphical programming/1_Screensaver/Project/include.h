/*
** EPITECH PROJECT, 2021
** include.h
** File description:
** ouais
*/

#define ERROR 84
#define EXIT_HELP 1
#define EXIT_OPTIONS 2
#define EXIT 0
#include <SFML/Graphics.h>
#include <string.h>
#include <ncurses.h>
#include <stdlib.h>
#include "include/my.h"

#ifndef FRAMEBUFFER_H_
    #define FRAMEBUFFER_H_
struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
};
typedef struct framebuffer framebuffer_t;
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color);
#endif    /* FRAMEBUFFER_H_ */

#ifndef INCLUDE_H_
    #define INCLUDE_H_
void my_put_pixel_rand(framebuffer_t *framebuffer, unsigned int x, unsigned int y, int *rand_col);
int my_put_line(framebuffer_t *buffer, sfColor color, int x0, int x1, int y2, int y3);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color);
int fonction(framebuffer_t *framebuffer, char **argv);
void fonction3(framebuffer_t *framebuffer);
void fonctionh(void);
void fonctiond(void);
void fonction1(framebuffer_t *framebuffer);
void fonction2(framebuffer_t *framebuffer);
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
int my_strcmp(const char *str1, const char *str2);
int my_put_line_rand_col(framebuffer_t *buffer, int x0, int x1);
int random_x();
int random_y();
int rand_number(int intt);
void framebuffer_destroy(framebuffer_t *framebuffer);
#endif /*INCLUDE_H_*/
