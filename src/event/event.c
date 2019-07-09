/*
** EPITECH PROJECT, 2019
** event
** File description:
** 2018
*/

#include "rpg.h"

void event_settings(sfRenderWindow *window, draw_t *draw)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed || event.key.code == sfKeyQ)
            sfRenderWindow_close(window);
        if (event.key.code == sfKeyEscape) {
            if (draw->menu != 0) {
                draw->menu = 0;
                draw->pause = 0;
            }
            else  draw->menu = 1;
        }
    }
}

void event_menu2(sfRenderWindow *window, draw_t *draw, sfEvent event)
{
    if (event.mouseButton.x >
    sfSprite_getPosition(draw->quit).x &&
    event.mouseButton.x < sfSprite_getPosition(draw->quit).x + 250 &&
    event.mouseButton.y > sfSprite_getPosition(draw->quit).y &&
    event.mouseButton.y < sfSprite_getPosition(draw->quit).y + 100)
        sfRenderWindow_close(window);
    if (event.mouseButton.x >
    sfSprite_getPosition(draw->settings).x &&
    event.mouseButton.x < sfSprite_getPosition(draw->settings).x + 250 &&
    event.mouseButton.y > sfSprite_getPosition(draw->settings).y &&
    event.mouseButton.y < sfSprite_getPosition(draw->settings).y + 100) {
        draw->menu = 4;
    }
}

void event_menu(sfRenderWindow *window, draw_t *draw)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed || event.key.code == sfKeyQ)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonPressed) {
            if (event.mouseButton.x > sfSprite_getPosition(draw->play).x &&
            event.mouseButton.x < sfSprite_getPosition(draw->play).x + 250 &&
            event.mouseButton.y > sfSprite_getPosition(draw->play).y &&
            event.mouseButton.y < sfSprite_getPosition(draw->play).y + 100) {
                if (draw->menu != 0) draw->pause = 0;
                else draw->menu = 1;
            }
            event_menu2(window, draw, event);
        }
    }
}

void event_game(sfRenderWindow *window, draw_t *draw)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed || event.key.code == sfKeyQ)
            sfRenderWindow_close(window);
        (draw->y >= -297 && draw->y <= -80 && draw->x <= 160 &&
        draw->x >= -32 && draw->card_school > 0 &&
        sfKeyboard_isKeyPressed(sfKeyA)) ? (draw->give_card = 1) :
        (sfKeyboard_isKeyPressed(sfKeyA) && (draw->x >= -742 && draw->x <= -550
        && draw->y <= -15 && draw->y >= -90)) ? draw->dealer = 1 :
        (sfKeyboard_isKeyPressed(sfKeyLeft)) ? key_left(draw, window) :
        (sfKeyboard_isKeyPressed(sfKeyRight)) ? key_right(draw, window) :
        (sfKeyboard_isKeyPressed(sfKeyDown)) ? key_down(draw, window) :
        (sfKeyboard_isKeyPressed(sfKeyUp)) ? key_up(draw, window) :
        sfRenderWindow_drawSprite(window, draw->player3, NULL);
        (sfKeyboard_isKeyPressed(sfKeyEscape)) ? draw->pause = 1 : 0;
        event_game2(window, draw);
    }
    sfClock_restart(draw->clock);
}

void event_open(sfRenderWindow *window, draw_t *draw, sfEvent event)
{
    int count = 0;

    draw->effect = sfMusic_createFromFile("sound/profeffect.ogg");
    (draw->prof < 2) ?
    sfRenderWindow_drawSprite(window, draw->prof1_spri, NULL) :
    (draw->prof >= 2 && draw->prof < 4) ?
    sfRenderWindow_drawSprite(window, draw->prof2_spri, NULL) :
    (draw->prof >= 4 && draw->prof < 6) ?
    sfRenderWindow_drawSprite(window, draw->prof3_spri, NULL) :
    (draw->prof >= 6 && draw->prof < 8) ?
    sfRenderWindow_drawSprite(window, draw->prof4_spri, NULL) :
    (draw->prof >= 8 && draw->prof < 10) ?
    sfRenderWindow_drawSprite(window, draw->prof5_spri, NULL) : 0;
    (draw->prof >= 10) ? draw->menu = 2 : 0;
    if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
        count = 0;
        while (count < 2500) count++;
        draw->prof += 1;
        sfMusic_play(draw->effect);
    } while (sfRenderWindow_pollEvent(window, &event))
        if (event.type == sfEvtClosed) sfRenderWindow_close(window);
}
