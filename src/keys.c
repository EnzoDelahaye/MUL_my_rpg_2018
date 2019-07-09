/*
** EPITECH PROJECT, 2019
** keys
** File description:
** keys
*/

#include "rpg.h"

void key_left(draw_t *draw, sfRenderWindow *window)
{
    sfVector2f scale = {1, 1};
    sfVector2f scale_chnge = {1.02, 1.02};
    static int j = 0;

    (j == 0) ? sfSprite_setScale(draw->player1, scale) :
    sfSprite_setScale(draw->player1, scale_chnge);
    (j == 0) ? j++ : j--;
    draw->turn_player = 3;
    draw->x += 8;
}

void key_right(draw_t *draw, sfRenderWindow *window)
{
    sfVector2f scale = {1, 1};
    sfVector2f scale_chnge = {1.02, 1.02};
    static int j = 0;

    (j == 0) ? sfSprite_setScale(draw->player2, scale) :
    sfSprite_setScale(draw->player2, scale_chnge);
    (j == 0) ? j++ : j--;
    draw->turn_player = 2;
    draw->x -= 8;
}

void key_up(draw_t *draw, sfRenderWindow *window)
{
    sfVector2f scale = {1, 1};
    sfVector2f scale_chnge = {1.02, 1.02};
    static int j = 0;

    (j == 0) ? sfSprite_setScale(draw->player4, scale) :
    sfSprite_setScale(draw->player4, scale_chnge);
    (j == 0) ? j++ : j--;
    draw->turn_player = 1;
    if (draw->block == 0)
    draw->y += 5;
}

void key_down(draw_t *draw, sfRenderWindow *window)
{
    sfVector2f scale = {1, 1};
    sfVector2f scale_chnge = {1.02, 1.02};
    static int j = 0;

    (j == 0) ? sfSprite_setScale(draw->player3, scale) :
    sfSprite_setScale(draw->player3, scale_chnge);
    (j == 0) ? j++ : j--;
    draw->turn_player = 0;
    if (draw->block2 == 0)
        draw->y -= 5;
}
