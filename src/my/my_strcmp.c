/*
** EPITECH PROJECT, 2018
** my_strncmp
** File description:
** 2018
*/

#include "rpg.h"

int my_strcmp(char const *s1, char const *s2)
{
    int	i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')) i++;
    return (s1[i] - s2[i]);
}
