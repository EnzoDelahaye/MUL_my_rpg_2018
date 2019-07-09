/*
** EPITECH PROJECT, 2019
** inventory
** File description:
** 2018
*/

#include "rpg.h"

void disp_xp(sfRenderWindow *window, draw_t *draw)
{
    if (draw->xp >= 1 && draw->xp < 100)
        draw->xp += 0.5;
    if (draw->xp == 100) {
        if (draw->lvl_up < 100) {
            draw->lvl_up += 1;
            print_text(window, "+", 200, 0);
            print_text(window, my_int_to_str(1), 220, 0);
        }
        if (draw->lvl_up == 100) {
            draw->lvl += 1;
            draw->lvl_up = 0;
            draw->xp = 0;
        }
    }
    print_text(window, "Level :", 0, 0);
    print_text(window, my_int_to_str(draw->lvl), 170, 0);
    print_text(window, "Xp :", 0, 50);
    print_text(window, my_int_to_str(draw->xp), 100, 50);
}

void disp_drug(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos = {1010, 215};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(draw->drug, scale);
    sfSprite_setPosition(draw->drug, pos);
    if (draw->take_drug >= 1) {
        sfRenderWindow_drawSprite(window, draw->drug, NULL);
        print_text2(window, my_int_to_str(draw->take_drug), 1005, 205);
    }
}

void disp_card(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos = {1065, 215};
    sfVector2f fist = {985, 140};

    sfSprite_setPosition(draw->fist, fist);
    sfSprite_setPosition(draw->card, pos);
    sfRenderWindow_drawSprite(window, draw->fist, NULL);
    print_text(window, my_int_to_str(draw->strengh), 1064, 142);
    if (draw->card_school > 1) {
        sfRenderWindow_drawSprite(window, draw->card, NULL);
        print_text2(window, my_int_to_str(draw->card_school), 1060, 205);
    }
}

void move_rect(draw_t *draw, int offset, int max_value)
{
    int val = draw->rect.left + offset;

    if (val < max_value)
        draw->rect.left = draw->rect.left + offset;
    else
        draw->rect.left = 0;
}

void display_inventory(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f invent = {980, 0};
    sfVector2f heart = {1000, 81};
    int offset = 56;
    int max_value = 560;

    sfSprite_setPosition(draw->invent, invent);
    sfRenderWindow_drawSprite(window, draw->invent, NULL);
    if (sfClock_getElapsedTime(draw->coin_clock).microseconds /
    1000000.0 >= 0.05) {
        move_rect(draw, offset, max_value);
        sfClock_restart(draw->coin_clock);
    } disp_coin(window, draw);
    disp_drug(window, draw);
    disp_card(window, draw);
    sfSprite_setPosition(draw->heart, heart);
    sfRenderWindow_drawSprite(window, draw->heart, NULL);
    print_text(window, my_int_to_str(draw->money), 1060, 25);
    print_text(window, my_int_to_str(draw->life), 1060, 81);
    disp_xp(window, draw);
    top_up(window, draw);
}
