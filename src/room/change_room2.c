/*
** EPITECH PROJECT, 2019
** change room2
** File description:
** change room
*/

#include "rpg.h"

void change_room_hall2(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos = {580 + draw->x, 420 +draw->y};

    sfSprite_setPosition(draw->ask, pos);
    sfSprite_setPosition(draw->thx, pos);
    sfSprite_setPosition(draw->less, pos);
    if (draw->y >= -297 && draw->y <= -80 && draw->x <= 160 &&
    draw->x >= -32 && draw->card_school > 0) {
        if (draw->give_card == 1 && draw->card_school > 5) {
            draw->card_school = 0;
            draw->thx_val = 1;
        } else if (draw->give_card == 1 && draw->card_school == 5) {
            sfRenderWindow_drawSprite(window, draw->less, NULL);
        } else {
            sfRenderWindow_drawSprite(window, draw->ask, NULL);
            draw->give_card = 0;
        }
    }
    if (draw->y >= -297 && draw->y <= -80 && draw->x <= 160 &&
    draw->x >= -32 && draw->thx_val == 1) {
        sfRenderWindow_drawSprite(window, draw->thx, NULL);
        if (draw->money > 30000)
            draw->money += 5000;
    }
}

void change_room_street3(sfRenderWindow *window, draw_t *draw)
{
    if (draw->x >= -742 && draw->x <= -550 && draw->y <= -15 &&
    draw->y >= -90) {
        sfRenderWindow_drawSprite(window, draw->indic, NULL);
        if (draw->dealer == 1) {
            draw->money -= 30;
            draw->dealer = 0;
            draw->take_drug += 1;
        }
    }
}
