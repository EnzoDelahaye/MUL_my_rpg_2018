/*
** EPITECH PROJECT, 2019
** fighting
** File description:
** fighting
*/

#include "rpg.h"

void fighting_aer3(sfRenderWindow *window, draw_t *draw)
{
    if (draw->life_aer <= 0)
        sfRenderWindow_drawSprite(window, draw->flame, NULL);
    if (draw->x <= 168 && draw->x >= -16 && draw->y <= 196 &&
    draw->y >= 72 && draw->life_aer <= 0)
        sfRenderWindow_drawSprite(window, draw->next, NULL);
}

void fighting_aer2(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos = {470 + draw->x, 190 + draw->y};
    sfVector2f scale = {0.05, 0.05};
    sfVector2f pos_next = {520 + draw->x, 120 + draw->y};

    sfSprite_setPosition(draw->next, pos_next);
    sfSprite_setScale(draw->flame, scale);
    sfSprite_setPosition(draw->flame, pos);
    if (draw->x <= 168 && draw->x >= -16 && draw->y <= 196 &&
    draw->y >= 72 && draw->hit_aer == 1) {
        draw->life_aer -= 1;
        sfRenderWindow_drawSprite(window, draw->flame, NULL);
    }
    if (draw->life_aer == 0) {
        draw->xp = 1;
        draw->life = 30;
        draw->money += 60;
        draw->card_school += 5;
    }
    fighting_aer3(window, draw);
}

void fighting_aer(sfRenderWindow *window, draw_t *draw)
{
    if (draw->x <= 168 && draw->x >= -16 && draw->y <= 196 &&
    draw->y >= 72 && draw->life_aer > 0) {
        draw->attack_aer += 1;
    } else
        draw->attack_aer = 0;
    if (draw->attack_aer >= 60) {
        if (draw->hit < 20) {
            sfRenderWindow_drawSprite(window, draw->blood, NULL);
            sfRenderWindow_drawSprite(window, draw->life_print, NULL);
            draw->hit += 1;
        } else {
            draw->attack_aer = 0;
            draw->life -= 10;
            draw->hit = 0;
        }
    }
    if (draw->life == 0)
        draw->menu = 7;
    fighting_aer2(window, draw);
}
