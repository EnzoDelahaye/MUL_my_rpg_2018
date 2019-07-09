/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** display characters of a string
*/

#include "rpg.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] !=  '\0')
        my_putchar(str[i++]);
    return (0);
}