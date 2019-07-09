/*
** EPITECH PROJECT, 2019
** changeroom
** File description:
** 2018
*/

#include "rpg.h"

void change_big_room(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos_ped = {380 + draw->x, 650 + draw->y};

    sfSprite_setPosition(draw->pnj, pos_ped);
    if (draw->x <= 184 && draw->x >= 120 && draw->y <= 198 &&
    draw->y >= 195) {
        draw->menu = 5;
        draw->x = 336;
        draw->y = -112;
    }
    if (draw->x <= 464 && draw->x >= 296 && draw->y <= 250 &&
    draw->y >= 130) {
        sfRenderWindow_drawSprite(window, draw->marin, NULL);
        sfRenderWindow_drawSprite(window, draw->marin_pnj, NULL);
    }
}

void change_room_aer(sfRenderWindow *window, draw_t *draw)
{
    if (draw->x <= -168 && draw->x >= -200 && draw->y <= 188 &&
    draw->y >= 118) {
        draw->menu = 3;
        draw->y = -207;
        draw->x = 152;
    }
    if (draw->x <= 376 && draw->x >= 296 && draw->y >= -170 &&
    draw->y <= -167) {
        draw->menu = 6;
        draw->y = 160;
        draw->x = 160;
    }
}

void change_room_hall(sfRenderWindow *window, draw_t *draw)
{
    if (sfSprite_getPosition(draw->hall).x >= 210 &&
    sfSprite_getPosition(draw->hall).x <= 232 &&
    sfSprite_getPosition(draw->hall).y >= -250 &&
    sfSprite_getPosition(draw->hall).y <= -147) {
        draw->menu = 5;
        draw->x = -88;
        draw->y = 128;
    }
    if (draw->x >= -496 && draw->x <= -440 && draw->y <= -602 &&
    draw->y >= -618) {
        draw->menu = 2;
        draw->x = -910;
        draw->y = -50;
    }
    if (draw->y >= -297 && draw->y <= -80 && draw->x <= 160 &&
    draw->x >= -32 && draw->card_school == 0 && draw->thx_val == 0)
        sfRenderWindow_drawSprite(window, draw->bubble, NULL);
    change_room_hall2(window, draw);
}

void change_room_street2(draw_t *draw)
{
    if (sfSprite_getPosition(draw->back).x >= -1400 &&
    sfSprite_getPosition(draw->back).x <= 700 &&
    sfSprite_getPosition(draw->back).y >= -478 &&
    sfSprite_getPosition(draw->back).y <= -472)
        draw->block2 = 1;
    else
        draw->block2 = 0;
    if (sfSprite_getPosition(draw->back).x >= -950 &&
    sfSprite_getPosition(draw->back).x <= -880 &&
    sfSprite_getPosition(draw->back).y >= -25 &&
    sfSprite_getPosition(draw->back).y <= -12) {
        draw->menu = 3;
        draw->x = -472;
        draw->y = -492;
        if (draw->epitech_license == 0) {
        draw->money -= 30000;
        draw->epitech_license = 1;
        }
    }
}

void change_room_street(sfRenderWindow *window, draw_t *draw)
{
    if (sfSprite_getPosition(draw->back).x >= -1400 &&
    sfSprite_getPosition(draw->back).x <= -960 &&
    sfSprite_getPosition(draw->back).y >= -18 &&
    sfSprite_getPosition(draw->back).y <= -12)
        draw->block = 1;
    else if (sfSprite_getPosition(draw->back).x >= -875 &&
    sfSprite_getPosition(draw->back).x <= 700 &&
    sfSprite_getPosition(draw->back).y >= -18 &&
    sfSprite_getPosition(draw->back).y <= -12)
        draw->block = 1;
    else
        draw->block = 0;
    change_room_street2(draw);
    change_room_street3(window, draw);
}
