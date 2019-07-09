/*
** EPITECH PROJECT, 2019
** inventory
** File description:
** 2
*/

#include "rpg.h"

void top_up(sfRenderWindow *window, draw_t *draw)
{
    if (draw->lvl == 1 && draw->top_up == 0) {
        draw->life += 10;
        draw->strengh += 10;
        draw->top_up = 1;
    }
}

void disp_coin(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos = {1000, 25};

    sfSprite_setTextureRect(draw->coin, draw->rect);
    sfSprite_setPosition(draw->coin, pos);
    sfRenderWindow_drawSprite(window, draw->coin, NULL);
}
