/*
** EPITECH PROJECT, 2019
** load sprite pt2
** File description:
** 2018
*/

#include "rpg.h"

void draw_all_menu_9(draw_t *draw)
{
    draw->win_ped = sfSprite_create();
    draw->win_text = sfTexture_createFromFile("spri/win_fight.png", NULL);
    sfSprite_setTexture(draw->win_ped, draw->win_text, sfTrue);
    draw->life_print = sfSprite_create();
    draw->life_prt_text = sfTexture_createFromFile("spri/life_print.png", NULL);
    sfSprite_setTexture(draw->life_print, draw->life_prt_text, sfTrue);
    draw->finl_ped = sfSprite_create();
    draw->finl_ped_txt = sfTexture_createFromFile("spri/final.png", NULL);
    sfSprite_setTexture(draw->finl_ped, draw->finl_ped_txt, sfTrue);
    draw->fist = sfSprite_create();
    draw->fist_text = sfTexture_createFromFile("spri/fist.png", NULL);
    sfSprite_setTexture(draw->fist, draw->fist_text, sfTrue);
}

void draw_all_menu_8(draw_t *draw)
{
    draw->agrow = sfSprite_create();
    draw->agrow_text = sfTexture_createFromFile("spri/defi.png", NULL);
    sfSprite_setTexture(draw->agrow, draw->agrow_text, sfTrue);
    draw->card = sfSprite_create();
    draw->card_text = sfTexture_createFromFile("spri/carte.png", NULL);
    sfSprite_setTexture(draw->card, draw->card_text, sfTrue);
    draw->next = sfSprite_create();
    draw->next_text = sfTexture_createFromFile("spri/next.png", NULL);
    sfSprite_setTexture(draw->next, draw->next_text, sfTrue);
    draw->ask = sfSprite_create();
    draw->ask_text = sfTexture_createFromFile("spri/dem_card.png", NULL);
    sfSprite_setTexture(draw->ask, draw->ask_text, sfTrue);
    draw->thx = sfSprite_create();
    draw->thx_text = sfTexture_createFromFile("spri/merci.png", NULL);
    sfSprite_setTexture(draw->thx, draw->thx_text, sfTrue);
    draw->less = sfSprite_create();
    draw->less_text = sfTexture_createFromFile("spri/less.png", NULL);
    sfSprite_setTexture(draw->less, draw->less_text, sfTrue);
    draw_all_menu_9(draw);
}

void draw_all_menu_7(draw_t *draw)
{
    draw->coin = sfSprite_create();
    draw->coin_text = sfTexture_createFromFile("spri/coin.png", NULL);
    sfSprite_setTexture(draw->coin, draw->coin_text, sfTrue);
    draw->coin_clock = sfClock_create();
    draw->heart = sfSprite_create();
    draw->heart_text = sfTexture_createFromFile("spri/heart.png", NULL);
    sfSprite_setTexture(draw->heart, draw->heart_text, sfTrue);
    draw->blood = sfSprite_create();
    draw->blood_text = sfTexture_createFromFile("spri/blood.png", NULL);
    sfSprite_setTexture(draw->blood, draw->blood_text, sfTrue);
    draw->over = sfSprite_create();
    draw->over_text = sfTexture_createFromFile("spri/gameover.png", NULL);
    sfSprite_setTexture(draw->over, draw->over_text, sfTrue);
    draw->flame = sfSprite_create();
    draw->flame_text = sfTexture_createFromFile("spri/flame.png", NULL);
    sfSprite_setTexture(draw->flame, draw->flame_text, sfTrue);
    draw->drug = sfSprite_create();
    draw->drug_text = sfTexture_createFromFile("spri/drug.png", NULL);
    sfSprite_setTexture(draw->drug, draw->drug_text, sfTrue);
    draw_all_menu_8(draw);
}
