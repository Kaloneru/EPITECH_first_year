/*
** EPITECH PROJECT, 2022
** n4s
** File description:
** get_info
*/

#include "include/ai.h"

char *get_line(void)
{
    size_t len = 0;
    size_t test = -1;
    size_t return_value = 0;
    char *buffer = NULL;

    return_value = getline(&buffer, &len, stdin);
    if (OUTPUT)
        return (NULL);
    else if (INPUT)
        buffer[return_value - 1] = '\0';
    return (buffer);
}
