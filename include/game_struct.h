/*
** EPITECH PROJECT, 2019
** structure
** File description:
** 2018
*/

#ifndef STRUCT_H_
#define STRUCT_H_

/*
**  GAME STRUCTURE
*/

typedef struct s_draw
{
    sfSprite *win_ped;
    sfTexture *win_text;
    sfSprite *life_print;
    sfTexture *life_prt_text;
    sfSprite *agrow;
    sfTexture *agrow_text;
    sfSprite *less;
    sfTexture *less_text;
    sfSprite *ask;
    sfTexture *ask_text;
    sfSprite *thx;
    sfTexture *thx_text;
    sfSprite *next;
    sfTexture *next_text;
    sfSprite *card;
    sfTexture *card_text;
    sfSprite *drug;
    sfTexture *drug_text;
    sfSprite *flame;
    sfTexture *flame_text;
    sfSprite *over;
    sfTexture *over_text;
    sfSprite *blood;
    sfTexture *blood_text;
    sfSprite *prof1_spri;
    sfTexture *prof1_text;
    sfSprite *prof2_spri;
    sfTexture *prof2_text;
    sfSprite *prof3_spri;
    sfTexture *prof3_text;
    sfSprite *prof4_spri;
    sfTexture *prof4_text;
    sfSprite *prof5_spri;
    sfTexture *prof5_text;
    sfSprite *menu_sprite;
    sfTexture *menu_text;
    sfSprite *play;
    sfTexture *play_text;
    sfSprite *settings;
    sfTexture *set_tings;
    sfSprite *page_sett;
    sfTexture *page_settings;
    sfSprite *volm;
    sfTexture *volmtext;
    sfSprite *volp;
    sfTexture *volptext;
    sfSprite *quit;
    sfTexture *quit_text;
    sfSprite *back;
    sfTexture *back_text;
    sfSprite *hall;
    sfTexture *hall_text;
    sfSprite *pnj;
    sfTexture *pnj_text;
    sfSprite *aeroom;
    sfTexture *aeroom_text;
    sfSprite *indic;
    sfTexture *indic_text;
    sfSprite *bubble;
    sfTexture *bubble_text;
    sfSprite *player1;
    sfTexture *player1_text;
    sfSprite *player2;
    sfTexture *player2_text;
    sfSprite *player3;
    sfTexture *player3_text;
    sfSprite *player4;
    sfTexture *player4_text;
    sfSprite *school;
    sfTexture *school_text;
    sfSprite *big_room;
    sfTexture *big_room_text;
    sfSprite *marin;
    sfTexture *marin_text;
    sfSprite *marin_pnj;
    sfTexture *marpnj_text;
    sfSprite *invent;
    sfTexture *invent_text;
    sfSprite *cloud;
    sfTexture *cloud_text;
    sfSprite *back_menu;
    sfTexture *bac_text;
    sfSprite *tree;
    sfTexture *tree_text;
    sfSprite *mount;
    sfTexture *mnt_text;
    sfSprite *cloud2;
    sfTexture *clou2_te;
    sfSprite *back2;
    sfTexture *bac2_text;
    sfSprite *tree2;
    sfTexture *tre2_te;
    sfSprite *mount2;
    sfTexture *mnt2_text;
    sfSprite *coin;
    sfTexture *coin_text;
    sfSprite *heart;
    sfTexture *heart_text;
    sfSprite *finl_ped;
    sfTexture *finl_ped_txt;
    sfSprite *fist;
    sfTexture *fist_text;
    sfMusic *music;
    sfMusic *effect;
    sfMusic *epic;
    sfClock *coin_clock;
    sfIntRect rect;
    int life;
    int attack_aer;
    int dealer;
    int move_cl;
    int move_tree;
    int move_mnt;
    int move_back;
    int turn_player;
    int x;
    int y;
    sfClock *clock;
    int menu;
    int pause;
    int sets;
    int block;
    int block2;
    int prof;
    int female;
    int money;
    int epitech_license;
    int hit;
    int hit_aer;
    int life_aer;
    int card_school;
    int take_drug;
    int give_card;
    int thx_val;
    int life_ped;
    int attack_ped;
    int hit_ped;
    float xp;
    int lvl;
    int lvl_up;
    int strengh;
    int top_up;
}draw_t;

#endif /* !STRUCT_H_ */
