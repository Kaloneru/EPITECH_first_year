/*
** EPITECH PROJECT, 2022
** mini.h
** File description:
** desc
*/

#ifndef MINISHELL_H
    #define MINISHELL_H
    #include <stddef.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/wait.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <signal.h>
    #include <stdio.h>
    #include <stdbool.h>

typedef struct shell_s {
    char *pwd;
    char *path;   
    int *wstatus;
    int cd_status;
    char *hostname;
    char **envp;
    char **command;
    char **dest;
} shell_t;

//loop
void shell_loop(shell_t *shell);
void exec_path(char *buffer, shell_t *shell);
void my_exit(char *buffer);
void exec(char *buffer, shell_t *shell);

//infos/parcing
void concat_dest(shell_t *shell);
void get_info_from_buffer(shell_t *shell);
char *del_spaces(char *buffer);
char **new_malloc(int i, int j);
int array_len(char **arr);

//env
char *get_new_env(shell_t *shell, char *buffer);

//cd
void get_new_pwd(shell_t *all, char *value);
void get_new_old_pwd(shell_t *shell, char *value);
void command_cd(shell_t *shell, char *buffer);

//lib
void my_putchar(char c);
int my_putstr(char const *str);
char *my_strchr(char *str, int c);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
int my_strncmp(char *a, char *b, int nb);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat_malloc(char const *s1, char const *s2);
char *my_strcat(char *dest, char const *src);
char **str_to_word_array(char *str, char separator);
char *my_strcut(char *str, int nb);

#endif /*MINISHELL_H*/
