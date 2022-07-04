/*
** EPITECH PROJECT, 2022
** needed_by_shell_loop.c
** File description:
** some function that are needed by the loop
*/
#include "minishell.h"

void my_exit(char *buffer)
{
    int i = 0;

    if (my_strcmp(buffer, "exit") == 0) {
        my_putstr("exit\n");
        exit(i);
    }
}

void exec_path(char *buffer, shell_t *shell)
{
    char *pathname = malloc(sizeof(char) * 100);
    char **array = str_to_word_array(buffer, ' ');
    int i = 0;
    if (shell->cd_status == 0)
        return;
    shell->cd_status = 0;
    while (shell->dest[i] != NULL) {
        pathname = my_strcat(pathname, shell->dest[i]);
        pathname = my_strcat(pathname, array[0]);
        if (access(pathname, X_OK) == 0) {
            array[0] = my_strcat_malloc(shell->dest[i], array[0]);
            execve(pathname, array, shell->envp);
            perror("fail\n");
        }
        for (int x = 0; x != 100; x++)
            pathname[x] = '\0';
        i++;
    }
    my_putstr(array[0]);
    my_putstr(": Command not found.\n"); 
}

void concat_dest(shell_t *shell)
{
    int i = 0;

    if (shell->path == NULL) {
        my_putstr("path is wrong\n");
        return;
    } else {
        shell->dest = str_to_word_array(shell->path, ':');
        for (; shell->dest[i] != NULL; i++) {
            shell->dest[i] = my_strcat_malloc(shell->dest[i], "/");
        }
    }
}
