#pragma once

#define ENEMY_SPEED			3		// �G�̃X�s�[�h.
#define ENEMY_LIFE			5	// �G�̃��C�t.

class Player;
class Map;
class Rule;
class BitmapText;

class Enemy
{
public:
	float				x;											//x.y�̍��W
	float				y;									
	float				vx;											//vx,vy�̍��W
	float				vy;
	float				nextE_x ;
	float				nextE_y ;
	int					imgEnemy[4];								//�G�l�~�[�摜	
	int					aniNum;
	const float			w = 24.0f;										// �G�l�~�[�̓����蔻�蕝
	const float 		h = 32.0f;										// �G�l�~�[�̓����蔻�荂��
	int					onGround = true;
	int					hp;
	int					Atke;
	float				damagecont ;								//���Ƀ_���[�W���󂯂�܂ł̕b
	const float			position_Modification=15.0f;
	bool				damageFlag = false;
	//�����_���ɓG�𕦂�����
	int ranodmRange(int min, int max)
	{
		int				range = max - min;
		int				ret;
		if (min < 0)
		{
						ret = rand() % range - (range / 2);
		}
		else
		{
						ret = rand() % range;
		}
		return ret;
	}
	int GetDrawStringWidthFull(char* str)
	{
		return GetDrawStringWidth(str, (int)strlen(str));
	}
	const int			anim_Walk_Start = 0;						// �����J�n 
	const int			anim_Walk_End = 4;							// �����I�� 
	const int			animeCount=8;
	bool				dir = FALSE;
	bool				aliveFlg = FALSE;									//�����Ă��邩
	bool				dame = FALSE;

	static const float  jumpPower;
	static const float  e_Gravity;									// �d�͉����x 
	static const float	MAX_OVERLAP_CAPACITY;					// �Ǎő�߂荞�ݗ�
	
	void				InitEnemy();
	void				DrawEnemy(Player *playe,Map *scr,Rule *rule, BitmapText *text);
	void				AddEnemy(int enemyX,int enemyY, int enemyVX, int enemyVY);
	void				BlocRectEnemy();
};