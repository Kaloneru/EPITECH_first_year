/*
** EPITECH PROJECT, 2022
** infos_loop.c
** File description:
** get information needed by the loop
*/
#include "minishell.h"

static void get_path(shell_t *shell)
{
    shell->path = malloc(sizeof(char) * my_strlen(shell->envp[0]));
    int i = 0;

    while (shell->envp[i] != NULL) {
        if (my_strncmp("PATH=", shell->envp[i], 4) == 0)
            shell->path = my_strchr(shell->envp[i], '=') + 1;
        i++;
    }
}

static void display_header(shell_t *shell)
{
    my_putstr("[");
    my_putstr(get_new_env(shell, "PWD"));
    my_putstr("@");
    my_putstr(get_new_env(shell, "HOSTNAME"));
    my_putstr("]");
    my_putstr("$ ");
}

void get_info_from_buffer(shell_t *shell)
{
    display_header(shell);
    get_path(shell);
    concat_dest(shell);
}
