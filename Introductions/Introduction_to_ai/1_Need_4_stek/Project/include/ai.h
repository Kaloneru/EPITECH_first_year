/*
** EPITECH PROJECT, 2022
** ai.h
** File description:
** desc
*/

#ifndef AI_H_
    #define AI_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stddef.h>

#ifndef READ_SIZE
#define READ_SIZE (1)
#endif

#define OUTPUT (return_value == test || buffer == NULL)
#define INPUT (return_value > 0 && buffer[return_value - 1] == '\n')

typedef struct n4s_s {
    double right;
    double left;
    double front;
    char *end;
} n4s_t;

int algo(n4s_t *n4s);
char *get_line(void);
int get_all_info(n4s_t *n4s, char *line);
int my_str_cmp(char *str1, char *str2);
int my_strlen(char const *str);

#endif
