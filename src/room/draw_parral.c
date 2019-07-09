/*
** EPITECH PROJECT, 2019
** parall
** File description:
** 2018
*/

#include "rpg.h"

void draw_cloud(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos_cloud = {draw->move_cl, 0};
    sfVector2f pos_cloud2 = {draw->move_cl + 1280, 0};

    if (draw->move_cl < -1280)
        draw->move_cl = 0;
    sfSprite_setPosition(draw->cloud, pos_cloud);
    sfSprite_setPosition(draw->cloud2, pos_cloud2);
    sfRenderWindow_drawSprite(window, draw->cloud, NULL);
    sfRenderWindow_drawSprite(window, draw->cloud2, NULL);
}

void draw_mount(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos_cloud = {draw->move_mnt, 0};
    sfVector2f pos_cloud2 = {draw->move_mnt + 1280, 0};

    if (draw->move_mnt < -1280)
        draw->move_mnt = 0;
    sfSprite_setPosition(draw->mount, pos_cloud);
    sfSprite_setPosition(draw->mount2, pos_cloud2);
    sfRenderWindow_drawSprite(window, draw->mount, NULL);
    sfRenderWindow_drawSprite(window, draw->mount2, NULL);
}

void draw_back(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos_cloud = {draw->move_back, 0};
    sfVector2f pos_cloud2 = {draw->move_back + 1280, 0};

    if (draw->move_back < -1280)
        draw->move_back = 0;
    sfSprite_setPosition(draw->back_menu, pos_cloud);
    sfSprite_setPosition(draw->back2, pos_cloud2);
    sfRenderWindow_drawSprite(window, draw->back_menu, NULL);
    sfRenderWindow_drawSprite(window, draw->back2, NULL);
}

void draw_tree(sfRenderWindow *window, draw_t *draw)
{
    sfVector2f pos_cloud = {draw->move_tree, 0};
    sfVector2f pos_cloud2 = {draw->move_tree + 1280, 0};

    if (draw->move_tree < -1280)
        draw->move_tree = 0;
    sfSprite_setPosition(draw->tree, pos_cloud);
    sfSprite_setPosition(draw->tree2, pos_cloud2);
    sfRenderWindow_drawSprite(window, draw->tree, NULL);
    sfRenderWindow_drawSprite(window, draw->tree2, NULL);
}