/*
** EPITECH PROJECT, 2019
** counter
** File description:
** counter
*/

#include "rpg.h"

void counter_parral(draw_t *draw)
{
    draw->move_cl -= 2;
    draw->move_back -= 1;
    draw->move_mnt -= 5;
    draw->move_tree -= 8;
}