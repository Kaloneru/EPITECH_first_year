/*
** EPITECH PROJECT, 2022
** get execve
** File description:
** bs minishel
*/

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include "fonctions.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i = i + 1;
    return i;
}

char **str_to_word_array2(char *str, char sep)
{
    char **tab = mem_alloc_2d_char_array(rows(str, sep), my_strlen(str));
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        if (str[i] == sep) {
            tab[j][k] = '/';
            i++;
            j++;
            k = 0;
        }
        tab[j][k] = str[i];
        i++;
        k++;
    }
    tab[j][k] = '/';
    return (tab);
}

char **str_to_word_array(char *str, char sep)
{
    char **tab = mem_alloc_2d_char_array(rows(str, sep), my_strlen(str));
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        if (str[i] == sep) {
            i++;
            j++;
            k = 0;
        }
        tab[j][k] = str[i];
        i++;
        k++;
    }
    tab[j][k - 1] = '\0';
    return (tab);
}

char *my_strcat(char *src1, char const *src2)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src1) + my_strlen(src2)));
    int i = 0;
    int d = 0;

    while (src1[i] != '\0') {
        dest[i] = src1[i];
        i++;
    }
    while (src2[d] != '\0') {
        dest[i] = src2[d];
        i++;
        d++;
    }
    dest[i] = '\0';
    return dest;
}

/*char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int d = 0;

    while (src[d] != '\0') {
        dest[i] = src[d];
        i += 1;
        d += 1;
    }
    dest[i -17] = '\0';
    return dest;
}*/

void get_env(env_t *env, char **envp)
{
    for (int i = 0; envp[i] != NULL; i++) {
        if (envp[i][0] == 'P' && envp[i][1] == 'A' && envp[i][2] == 'T' && envp[i][3] == 'H') {
            env->env = malloc(sizeof(char) * my_strlen(envp[i]));
            env->env = envp[i];
        }
    }
    while (env->env[0] != '~') {
        for (int i = 0; env->env[i] != '\0'; i++)
            env->env[i] = env->env[i + 1];
    }
    env->path = mem_alloc_2d_char_array(rows(env->env, ':'), my_strlen(env->env) + 1);
    env->path = str_to_word_array2(env->env, ':');
}

int arr_len(char **array)
{
    int i = 0;

    while (array[i] != NULL)
        i++;
    return i;
}

void exec_fork(env_t *env, char **buffer, char **envp, int i)
{
    int ok = 0;
    pid_t pid = fork();

    if (pid == -1)
        write(2, "fork error\n", 11);
    else if (pid == 0)
        execve(my_strcat(env->path[i], buffer[0]), buffer, envp);
    else
        waitpid(pid, &ok, WCONTINUED | WUNTRACED);
}

int get_execve(int argc, char **buffer, char **envp, env_t *env)
{
    int ok = 1;
    char *command;

    get_env(env, envp);
    for (int i = 0; env->path[i] != NULL; i++) {
        if (access(my_strcat(env->path[i], buffer[0]), F_OK) != -1) {
            exec_fork(env, buffer, envp, i);
            ok = 0;
            break;
        }
    }
    if (buffer[0][0] == 'c' && buffer[0][1] == 'd') {
        if (opendir(buffer[1]) == -1)
            write(2, "No such file or directory\n", 27);
        else if (buffer[2] != NULL)
            write (2, "cd : too many arguments", 24);
        else {
              chdir(buffer[1]);
              ok = 0;
        }
    }
    if (ok == 1) {
        command = my_strcat(buffer[0], "command not found\n");
        write(2, command, my_strlen(command));
    }
    return 0;
}
