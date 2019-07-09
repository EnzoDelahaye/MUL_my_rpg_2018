/*
** EPITECH PROJECT, 2019
** disp_room
** File description:
** 2
*/

#include "rpg.h"

void disp_game_over(sfRenderWindow *window, draw_t *draw)
{
    sfRenderWindow_drawSprite(window, draw->over, NULL);
    event_lose(window);
}

void disp_big_room(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f big_room = {draw->x, draw->y};
    sfVector2f marin_text = {280 + draw->x, 65 + draw->y};
    sfVector2f marin = {230 + draw->x, 153 + draw->y};
    sfVector2f final = {380 + draw->x, 620 + draw->y};

    sfSprite_setPosition(draw->marin_pnj, marin);
    sfSprite_setPosition(draw->marin, marin_text);
    sfSprite_setPosition(draw->big_room, big_room);
    sfSprite_setPosition(draw->finl_ped, final);
    sfRenderWindow_drawSprite(window, draw->big_room, NULL);
    event_game(window, draw);
    change_big_room(window, draw);
    display_inventory(window, draw);
    draw_player(window, draw);
    sfRenderWindow_drawSprite(window, draw->finl_ped, NULL);
    fighting_ped(window, draw);
}

void disp_aeroom(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f aeroom = {draw->x, draw->y};

    sfSprite_setPosition(draw->aeroom, aeroom);
    sfRenderWindow_drawSprite(window, draw->aeroom, NULL);
    event_game(window, draw);
    change_room_aer(window, draw);
    display_inventory(window, draw);
    draw_player(window, draw);
    fighting_aer(window, draw);
}
