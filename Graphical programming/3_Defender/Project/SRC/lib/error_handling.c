/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** error handling
*/

#include "../../include/include.h"

int error_handling(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    if (open(argv[1], O_RDONLY) == -1)
        return 84;
    return 0;
}
