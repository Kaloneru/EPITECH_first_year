/*
** EPITECH PROJECT, 2021
** include.h
** File description:
** bsq
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#ifndef INCLUDE_H_
    #define INCLUDE_H_
void my_put_nbr(int nb);
void my_put_arr_int(int *arr_int, char *buff);
int *bigest_square(int *arr_int, char *buff);
int line_size(char *buff);
void my_putchar(char c);
char *put_x(char *buff, int *arr_int);
int *str_to_arr_int(char *buff);
int my_putstr(char const *str);
int my_strlen(char const *str);
#endif /*INCLUDE_H_*/
