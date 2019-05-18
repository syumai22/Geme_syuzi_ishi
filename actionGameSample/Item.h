#pragma once


class Map;
class Enemy;
class Sound;
class Player;
class Item
{
public:

	int					capsule;
	bool				iltemsGetto[9];

	void InitItem();
	void DrawItem(Map *scr);
	void ItemHit(Player *player, Map *scr, Enemy *enemy, Sound *sound);
};