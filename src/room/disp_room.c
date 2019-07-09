/*
** EPITECH PROJECT, 2019
** disp_room
** File description:
** 1
*/

#include "rpg.h"

void open_prof(sfRenderWindow *window, draw_t *draw)
{
    sfEvent event;

    draw->effect = NULL;
    event_open(window, draw, event);
}

void open_settings(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos_minus = {470, 325};
    sfVector2f pos_plus = {770, 315};

    event_settings(window, draw);
    sfSprite_setPosition(draw->volm, pos_minus);
    sfSprite_setPosition(draw->volp, pos_plus);
    sfRenderWindow_drawSprite(window, draw->page_sett, NULL);
    sfRenderWindow_drawSprite(window, draw->volm, NULL);
    sfRenderWindow_drawSprite(window, draw->volp, NULL);

}

void display_menu(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos_play = {510, 225};
    sfVector2f pos_sett = {510, 345};
    sfVector2f pos_quit = {510, 465};

    draw_back(window, draw);
    draw_cloud(window, draw);
    draw_mount(window, draw);
    draw_tree(window, draw);
    sfSprite_setPosition(draw->play, pos_play);
    sfSprite_setPosition(draw->quit, pos_quit);
    sfSprite_setPosition(draw->settings, pos_sett);
    sfRenderWindow_drawSprite(window, draw->menu_sprite, NULL);
    sfRenderWindow_drawSprite(window, draw->play, NULL);
    sfRenderWindow_drawSprite(window, draw->settings, NULL);
    sfRenderWindow_drawSprite(window, draw->quit, NULL);
    event_menu(window, draw);
}

void display_street(sfRenderWindow *window, draw_t *draw, ticles_t *ticles)
{
    sfVector2f street = {draw->x, draw->y};
    sfVector2f poschool = {1202 + draw->x, 360 + draw->y};
    sfVector2f pos10balles = {1255 + draw->x, 280 + draw->y};

    sfSprite_setPosition(draw->indic, pos10balles);
    sfSprite_setPosition(draw->school, poschool);
    sfSprite_setPosition(draw->back, street);
    sfRenderWindow_drawSprite(window, draw->back, NULL);
    sfRenderWindow_drawSprite(window, draw->school, NULL);
    if (sfClock_getElapsedTime(draw->clock).microseconds /
    1000000.0 >= 0.0000002)
        event_game(window, draw);
    change_room_street(window, draw);
    display_inventory(window, draw);
    display_particles(window, ticles, draw);
    draw_player(window, draw);
}

void display_hall(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f street = {draw->x, draw->y};
    sfVector2f pos_pnj = {500 + draw->x, 480 + draw->y};
    sfVector2f pos_help = {580 + draw->x, 420 + draw->y};

    sfSprite_setPosition(draw->bubble, pos_help);
    sfSprite_setPosition(draw->hall, street);
    sfSprite_setPosition(draw->pnj, pos_pnj);
    sfRenderWindow_drawSprite(window, draw->hall, NULL);
    if (sfClock_getElapsedTime(draw->clock).microseconds /
    1000000.0 >= 0.0000002)
        event_game(window, draw);
    draw_player(window, draw);
    sfRenderWindow_drawSprite(window, draw->pnj, NULL);
    display_inventory(window, draw);
    change_room_hall(window, draw);
}
