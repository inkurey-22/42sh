/*
** EPITECH PROJECT, 2024
** my_strcpy
** File description:
** copy un str
*/

#include <stddef.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
