/*
** EPITECH PROJECT, 2021
** message.c
** File description:
** message
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int **mem_alloc_2d_int_array(int rows, int columns);
int get_rows(int message_size, int key_size);

int calculator(int **key_matrix, int **message_matrix, int columns,
int *coordinates)
{
    int res = 0;
    int k = 0;

    while (k != columns) {
        res = res + message_matrix[coordinates[0]][k]
        * key_matrix[k][coordinates[1]];
        k++;
    }
    return (res);
}

int **allocate_memory(int rows, int columns)
{
    int **result = mem_alloc_2d_int_array(rows, columns);

    for (int i = 0; i != rows; i++)
        for (int j = 0; j != columns; j++)
            result[i][j] = 0;
    return (result);
}

int **calculus(int **key_matrix, int **message_matrix,
char *key, char *message)
{
    int columns = ceil(sqrt(strlen(key)));
    int message_size = strlen(message);
    int rows = get_rows(message_size, columns);
    int **result = allocate_memory(rows, columns);
    int coordinates[2];

    for (int i = 0; i != rows; i++)
        for (int j = 0; j != columns; j++) {
            coordinates[0] = i;
            coordinates[1] = j;
            result[i][j] = calculator(key_matrix, message_matrix,
            columns, coordinates);
        }
    return (result);
}

int print_letter(int **encrypted_message, int *coordinates)
{
    if (coordinates[2] == coordinates[0] - 1
    && coordinates[3] == coordinates[1] - 1) {
        printf("%d\n", encrypted_message[coordinates[2]][coordinates[3]]);
        return (0);
    }
    printf("%d ", encrypted_message[coordinates[2]][coordinates[3]]);
    return (0);
}

int print_message(int **encrypted_message, char *key, char *message)
{
    int columns = ceil(sqrt(strlen(key)));
    int message_size = strlen(message);
    int rows = get_rows(message_size, columns);
    int coordinates[4];

    coordinates[0] = rows;
    coordinates[1] = columns;
    for (int i = 0; i != rows; i++)
        for (int j = 0; j != columns; j++) {
            coordinates[2] = i;
            coordinates[3] = j;
            print_letter(encrypted_message, coordinates);
        }
    return (0);
}
