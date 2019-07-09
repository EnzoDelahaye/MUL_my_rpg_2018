/*
** EPITECH PROJECT, 2019
** open_a_window
** File description:
** 2018
*/

#include "rpg.h"

void draw_menu_parral2(draw_t *draw)
{
    draw->mount2 = sfSprite_create();
    draw->mnt2_text = sfTexture_createFromFile("spri/parall/fond3.png", NULL);
    sfSprite_setTexture(draw->mount2, draw->mnt2_text, sfTrue);
    draw->cloud2 = sfSprite_create();
    draw->clou2_te = sfTexture_createFromFile("spri/parall/fond2.png", NULL);
    sfSprite_setTexture(draw->cloud2, draw->clou2_te, sfTrue);
    draw->tree2 = sfSprite_create();
    draw->tre2_te = sfTexture_createFromFile("spri/parall/fond4.png", NULL);
    sfSprite_setTexture(draw->tree2, draw->tre2_te, sfTrue);
    draw->back2 = sfSprite_create();
    draw->bac2_text = sfTexture_createFromFile("spri/parall/fond1.png", NULL);
    sfSprite_setTexture(draw->back2, draw->bac2_text, sfTrue);
}

void draw_menu_parral(draw_t *draw)
{
    draw->mount = sfSprite_create();
    draw->mnt_text = sfTexture_createFromFile("spri/parall/fond3.png", NULL);
    sfSprite_setTexture(draw->mount, draw->mnt_text, sfTrue);
    draw->cloud = sfSprite_create();
    draw->cloud_text = sfTexture_createFromFile("spri/parall/fond2.png", NULL);
    sfSprite_setTexture(draw->cloud, draw->cloud_text, sfTrue);
    draw->tree = sfSprite_create();
    draw->tree_text = sfTexture_createFromFile("spri/parall/fond4.png", NULL);
    sfSprite_setTexture(draw->tree, draw->tree_text, sfTrue);
    draw->back_menu = sfSprite_create();
    draw->bac_text = sfTexture_createFromFile("spri/parall/fond1.png", NULL);
    sfSprite_setTexture(draw->back_menu, draw->bac_text, sfTrue);
    draw_menu_parral2(draw);
}

void draw_all_menu_6(draw_t *draw)
{
    draw->marin = sfSprite_create();
    draw->marin_text = sfTexture_createFromFile("spri/travaux.png", NULL);
    sfSprite_setTexture(draw->marin, draw->marin_text, sfTrue);
    draw->marin_pnj = sfSprite_create();
    draw->marpnj_text = sfTexture_createFromFile("spri/marin.png", NULL);
    sfSprite_setTexture(draw->marin_pnj, draw->marpnj_text, sfTrue);
    draw->invent = sfSprite_create();
    draw->invent_text = sfTexture_createFromFile("spri/inventory.png", NULL);
    sfSprite_setTexture(draw->invent, draw->invent_text, sfTrue);
    draw_menu_parral(draw);
    draw_all_menu_7(draw);
}

void draw_all_menu_5(draw_t *draw)
{
    draw->indic = sfSprite_create();
    draw->indic_text = sfTexture_createFromFile("spri/indic.png", NULL);
    sfSprite_setTexture(draw->indic, draw->indic_text, sfTrue);
    if (draw->female == 1) {
        draw->player1 = sfSprite_create();
        draw->player1_text = sfTexture_createFromFile("spri/p/fem1.png", NULL);
        sfSprite_setTexture(draw->player1, draw->player1_text, sfTrue);
        draw->player2 = sfSprite_create();
        draw->player2_text = sfTexture_createFromFile("spri/p/fem2.png", NULL);
        sfSprite_setTexture(draw->player2, draw->player2_text, sfTrue);
        draw->player3 = sfSprite_create();
        draw->player3_text = sfTexture_createFromFile("spri/p/fem3.png", NULL);
        sfSprite_setTexture(draw->player3, draw->player3_text, sfTrue);
        draw->player4 = sfSprite_create();
        draw->player4_text = sfTexture_createFromFile("spri/p/fem4.png", NULL);
        sfSprite_setTexture(draw->player4, draw->player4_text, sfTrue);
    } draw->big_room = sfSprite_create();
    draw->big_room_text = sfTexture_createFromFile("spri/bigroom.png", NULL);
    sfSprite_setTexture(draw->big_room, draw->big_room_text, sfTrue);
    draw_all_menu_6(draw);
}

void draw_all_menu_4(draw_t *draw)
{
    draw->volm = sfSprite_create();
    draw->volmtext = sfTexture_createFromFile("spri/volm.png", NULL);
    sfSprite_setTexture(draw->volm, draw->volmtext, sfTrue);
    draw->volp = sfSprite_create();
    draw->volptext = sfTexture_createFromFile("spri/volp.png", NULL);
    sfSprite_setTexture(draw->volp, draw->volptext, sfTrue);
    draw->hall = sfSprite_create();
    draw->hall_text = sfTexture_createFromFile("spri/Hall.png", NULL);
    sfSprite_setTexture(draw->hall, draw->hall_text, sfTrue);
    draw->pnj = sfSprite_create();
    draw->pnj_text = sfTexture_createFromFile("spri/pnj.png", NULL);
    sfSprite_setTexture(draw->pnj, draw->pnj_text, sfTrue);
    draw->aeroom = sfSprite_create();
    draw->aeroom_text = sfTexture_createFromFile("spri/aeroom.png", NULL);
    sfSprite_setTexture(draw->aeroom, draw->aeroom_text, sfTrue);
    draw->bubble = sfSprite_create();
    draw->bubble_text = sfTexture_createFromFile("spri/bubble.png", NULL);
    sfSprite_setTexture(draw->bubble, draw->bubble_text, sfTrue);
    draw_all_menu_5(draw);
}
