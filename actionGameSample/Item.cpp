#include "Header.h"

void Item::InitItem()
{
	capsule = LoadGraph("image/capser.bmp");
	for (int i = 0; i < 9; i++)
	{
		iltemsGetto[i] = true;
	}
}
bool checkHitRect(rect r1, rect r2)				// 矩形ヒットチェック関数
{
	return ((r1.x < (r2.x + r2.w)) &&
		(r2.x < (r1.x + r1.w)) &&
		(r1.y < (r2.y + r2.h)) &&
		(r2.y < (r1.y + r1.h)));
}
void Item::DrawItem(Map *scr)
{
	if (iltemsGetto[0])
	{
		DrawGraph(150.0f - scr->X, 2010.0f - scr->Y, capsule, TRUE);
	}
	if (iltemsGetto[1])
	{
		DrawGraph(100.0f - scr->X, 1600.0f - scr->Y, capsule, TRUE);
	}
	if (iltemsGetto[2])
	{
		DrawGraph(200.0f - scr->X, 1200.0f - scr->Y, capsule, TRUE);
	}
	if (iltemsGetto[3])
	{
		DrawGraph(50.0f - scr->X, 800.0f - scr->Y, capsule, TRUE);
	}
	if (iltemsGetto[4])
	{
		DrawGraph(50.0f - scr->X, 500.0f - scr->Y, capsule, TRUE);
	}
	if (iltemsGetto[5])
	{
		DrawGraph(400.0f - scr->X, 1000.0f - scr->Y, capsule, TRUE);
	}
	if (iltemsGetto[6])
	{
		DrawGraph(450.0f - scr->X, 3000.0f - scr->Y, capsule, TRUE);
	}
	if (iltemsGetto[7])
	{
		DrawGraph(450.0f - scr->X, 1900.0f - scr->Y, capsule, TRUE);
	}
	if (iltemsGetto[8])
	{
		DrawGraph(450.0f - scr->X, 1500.0f - scr->Y, capsule, TRUE);
	}
}
void Item::ItemHit(Player *player, Map *scr, Enemy *enemy, Sound *sound)
{
	rect PlayerHitChecRect, Iitemhitchecrect[9];
	PlayerHitChecRect.x = player->x - scr->X;
	PlayerHitChecRect.y = player->y - scr->Y;
	PlayerHitChecRect.w = player->w;
	PlayerHitChecRect.h = player->h;

	Iitemhitchecrect[0].x = 150 - scr->X;
	Iitemhitchecrect[0].y = 2010 - scr->Y;
	Iitemhitchecrect[0].w = 32;
	Iitemhitchecrect[0].h = 32;

	Iitemhitchecrect[1].x = 100 - scr->X;
	Iitemhitchecrect[1].y = 1600 - scr->Y;
	Iitemhitchecrect[1].w = 32;
	Iitemhitchecrect[1].h = 32;

	Iitemhitchecrect[2].x = 200 - scr->X;
	Iitemhitchecrect[2].y = 1200 - scr->Y;
	Iitemhitchecrect[2].w = 32;
	Iitemhitchecrect[2].h = 32;

	Iitemhitchecrect[3].x = 50 - scr->X;
	Iitemhitchecrect[3].y = 800 - scr->Y;
	Iitemhitchecrect[3].w = 32;
	Iitemhitchecrect[3].h = 32;

	Iitemhitchecrect[4].x = 50 - scr->X;
	Iitemhitchecrect[4].y = 500 - scr->Y;
	Iitemhitchecrect[4].w = 32;
	Iitemhitchecrect[4].h = 32;

	Iitemhitchecrect[5].x = 400 - scr->X;
	Iitemhitchecrect[5].y = 1000 - scr->Y;
	Iitemhitchecrect[5].w = 32;
	Iitemhitchecrect[5].h = 32;

	Iitemhitchecrect[6].x = 450 - scr->X;
	Iitemhitchecrect[6].y = 3000 - scr->Y;
	Iitemhitchecrect[6].w = 32;
	Iitemhitchecrect[6].h = 32;

	Iitemhitchecrect[7].x = 450 - scr->X;
	Iitemhitchecrect[7].y = 1900 - scr->Y;
	Iitemhitchecrect[7].w = 32;
	Iitemhitchecrect[7].h = 32;

	Iitemhitchecrect[8].x = 450 - scr->X;
	Iitemhitchecrect[8].y = 1500 - scr->Y;
	Iitemhitchecrect[8].w = 32;
	Iitemhitchecrect[8].h = 32;

	for (int i = 0; i < 9; i++)
	{
		if (iltemsGetto[i] == true)
		{
			if (checkHitRect(PlayerHitChecRect, Iitemhitchecrect[i]))
			{
				player->hpba += 5;
				player->hp_max += 5;
				PlaySoundMem(sound->IltemuGet, DX_PLAYTYPE_BACK);
				iltemsGetto[i] = false;
			}
		}

	}
}