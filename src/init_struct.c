/*
** EPITECH PROJECT, 2019
** init struct
** File description:
** 2018
*/

#include "rpg.h"

void init_struct2(draw_t *draw)
{
    draw->strengh = 10;
    draw->top_up = 0;
    draw->lvl_up = 0;
    draw->lvl = 0;
    draw->xp = 0;
    draw->hit_ped = 0;
    draw->life_ped = 100;
    draw->attack_ped = 0;
    draw->thx_val = 0;
    draw->take_drug = 0;
    draw->give_card = 0;
    draw->card_school = 0;
}

void init_struct(draw_t *draw, int female)
{
    draw->coin_clock = sfClock_create();
    draw->rect.left = 0;
    draw->rect.top = 0;
    draw->rect.width = 56;
    draw->rect.height = 56;
    if (female == 1)
        draw->female = 1;
    draw->block2 = 0;
    draw->life = 30;
    draw->attack_aer = 0;
    draw->money = 50000;
    draw->epitech_license = 0;
    draw->move_cl = 0;
    draw->move_mnt = 0;
    draw->move_back = 0;
    draw->move_tree = 0;
    draw->life_aer = 80;
    draw->hit = 0;
    draw->hit_aer = 0;
    init_struct2(draw);
}
