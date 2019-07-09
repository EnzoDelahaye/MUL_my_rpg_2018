/*
** EPITECH PROJECT, 2019
** fight2
** File description:
** fight2
*/

#include "rpg.h"

void fighting_ped2(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos = {410 + draw->x, 660 + draw->y};
    sfVector2f scale = {0.05, 0.05};
    sfVector2f pos_ped = {440 + draw->x, 550 + draw->y};

    sfSprite_setPosition(draw->win_ped, pos_ped);
    sfSprite_setScale(draw->flame, scale);
    sfSprite_setPosition(draw->flame, pos);
    if (draw->x <= 256 && draw->x >= 56 && draw->y <= -270 &&
    draw->y >= -330 && draw->hit_ped == 1) {
        draw->life_ped -= 1;
        sfRenderWindow_drawSprite(window, draw->flame, NULL);
    }
    if (draw->life_ped == 0)
        draw->card_school += 15;
    if (draw->x <= 256 && draw->x >= 56 && draw->y <= -270 &&
    draw->y >= -330 && draw->life_ped <= 0)
        sfRenderWindow_drawSprite(window, draw->win_ped, NULL);
    if (draw->life_ped <= 0)
        sfRenderWindow_drawSprite(window, draw->flame, NULL);
}

void fighting_ped(sfRenderWindow *window, draw_t *draw)
{
    if (draw->x <= 256 && draw->x >= 56 && draw->y <= -270 &&
    draw->y >= -330 && draw->life_ped > 0) {
        draw->attack_ped += 1;
    } else
        draw->attack_ped = 0;
    if (draw->attack_ped >= 40) {
        if (draw->hit < 20) {
            sfRenderWindow_drawSprite(window, draw->blood, NULL);
            draw->hit += 1;
        }else {
            draw->attack_ped = 0;
            draw->life -= 10;
            draw->hit = 0;
        }
    }
    if (draw->life == 0)
        draw->menu = 7;
    fighting_ped2(window, draw);
}
