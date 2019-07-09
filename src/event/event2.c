/*
** EPITECH PROJECT, 2019
** event2
** File description:
** event2
*/

#include "rpg.h"

void event_game2(sfRenderWindow *window, draw_t *draw)
{
    (sfKeyboard_isKeyPressed(sfKeyA) && draw->x <= 168 && draw->x >= -16 &&
    draw->y <= 196 && draw->y >= 72 && draw->menu == 5) ? (draw->hit_aer = 1) :
    (sfKeyboard_isKeyPressed(sfKeyA) && draw->x <= 256 && draw->x >= 56 &&
    draw->y <= -270 && draw->y >= -330 && draw->menu == 6) ?
    (draw->hit_ped = 1) : 0;
}

void event_lose(sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed || event.key.code == sfKeyQ)
            sfRenderWindow_close(window);
    }
}
