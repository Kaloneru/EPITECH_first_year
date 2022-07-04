/*
** EPITECH PROJECT, 2022
** fonctions.h
** File description:
** fonction
*/

#ifndef FONCTION_H_
    #define FONCTIONS_H_

typedef struct env_s {
    char *env;
    char **path;
} env_t ;

char **mem_alloc_2d_char_array(int rows, int columns);
int get_execve(int argc, char **argv, char **envp, env_t *env);
void get_env(env_t *env, char **envp);
char **str_to_word_array(char *str, char sep);
int rows(char *str, char sep);
char *del_spaces(char *str);
int my_strlen(char const *str);
#endif
