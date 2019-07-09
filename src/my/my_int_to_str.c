/*
** EPITECH PROJECT, 2019
** int to str
** File description:
** 2018
*/

#include "rpg.h"

char *my_revstr(char *str)
{
    int i = 0;
    int c = 0;
    char z = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    i = i - 1;

    while (i > c) {
        z = str[c];
        str[c] = str[i];
        str[i] = z,
        c = c + 1;
        i = i - 1;
    }
    return (str);
}

char *my_int_to_str(int num)
{
    int i = 0;
    char *str = malloc(sizeof(char) * 10);

    if (num == 0)
        str[i] = '0';
    while (num > 0) {
        str[i] = (num % 10) + 48;
        num = num / 10;
        i++;
    }
    str[i] = '\0';
    return (my_revstr(str));
}
