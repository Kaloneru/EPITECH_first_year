/*
** EPITECH PROJECT, 2022
** shell_loop.c
** File description:
** the loop
*/
#include "minishell.h"

static char *del_last_char(char *buffer)
{
    char *last = malloc(sizeof(char) * my_strlen(buffer));
    int i = 0;

    while (buffer[i] != '\n') {
        last[i] = buffer[i];
        i++;
    }
    last[i] = '\0';
    return last;
}

void exec_fork(shell_t *shell, char *buffer)
{
    my_exit(buffer);
    command_cd(shell, buffer);
    if (fork() == 0) {
        if (my_strncmp("./", buffer, 2) == 0 ||
            my_strncmp("/", buffer, 1) == 0) {
            exec(buffer, shell);
            return;
        } else
            exec_path(buffer, shell);
        return;
    } else
        wait(shell->wstatus);
}

void shell_loop(shell_t *shell)
{
    char *buffer = NULL;
    size_t lenth = 0;
    shell->cd_status = 1;

    while (1) {
        get_info_from_buffer(shell);
        if (getline(&buffer, &lenth, stdin) == -1)
            break;
        buffer = del_last_char(buffer);
        buffer = del_spaces(buffer);
        shell->command = str_to_word_array(buffer, ';');
        for (int i = 0; shell->command[i] != NULL; i++) {
            exec_fork(shell, del_spaces(shell->command[i]));
            shell->cd_status = 1;
        }
    }
}
