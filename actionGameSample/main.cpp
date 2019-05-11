#include"Header.h"

// マップデータ
unsigned char map[][MAP_WIDTH] =
//0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29
{
{ 8,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8, 71, 71, 71, 71,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8, 71,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8, 71,  3,  3,  3,  3,  3,  3,  3, 10,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8, 71, 71, 71, 71,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8, 42, 42, 42, 42,  3,  3,  3, 42,  3,  3, 68,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3, 10,  3,  3, 19, 19, 42, 42,  3,  8, },
{ 8,  3,  3,  9,  9,  9,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3, 19, 42,  3,  3,  3, 42,  3,  3,  3,  3,  3, 19, 42,  3, 68, 68,  8, },
{ 8,  3,  3,  3, 68,  3,  3,  3, 42,  3,  3,  3,  3,  3,  3, 68,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 42, 42,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3, 68,  3,  3, 42,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3, 68,  3,  3,  3, 68,  3, 68,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  9,  9,  9,  9, 42,  3, 10,  3, 10, 24, 24,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 42,  3, 42,  3,  3,  8, },
{ 8, 24,  9,  9,  9,  3,  3,  3,  3,  3,  3,  3,  3,  3, 68,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3, 10, 42, 42,  3,  3,  3,  3,  3, 68,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 42,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 42,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3, 42, 42,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 42,  8, },
{ 8,  3,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3, 24,  3,  3,  3, 68,  3, 68,  3,  3,  8, },
{ 8,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3, 42, 42,  3, 68,  3, 42,  3,  3,  3,  8, },
{ 8, 42, 42, 42, 42,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3, 42,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 68, 68,  8, },
{ 8,  3,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 42,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3, 19, 42, 42, 42, 42,  3, 42, 42, 42,  8, },
{ 8,  3, 24,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3, 42, 42,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3, 10,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3, 42, 42, 42, 42, 42, 19,  3,  9,  3,  3,  3,  8, },
{ 8,  3,  3, 42,  3,  3,  68, 3,  3,  3,  3,  3,  3, 24,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 10, 10,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8, 42, 42, 42, 42,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3, 68,  3, 68,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 10,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3, 42, 42,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 68, 68,  8, },
{ 8,  3,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3, 42,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 68,  3, 68,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3, 10, 42,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3, 42, 42,  3,  3,  3, 68,  3,  3,  3, 68,  3, 42,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3, 42,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 68, 68,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8, 68, 19,  3,  3,  3, 42, 42,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  9, 42, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3, 68,  3, 68,  3,  3,  8, },
{ 8,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3, 42,  3,  3,  3, 24,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 42,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3, 68,  3,  3,  3,  3,  3,  3,  3, 42,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3, 42, 42, 42,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 68,  8, },
{ 8, 24,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 68,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 42,  9,  3,  3,  8, },
{ 8,  3, 68,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  9, 42, 42, 42,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3, 68,  3, 19, 42,  3,  3,  8, },
{ 8, 24,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3, 42, 42,  3,  3,  3, 68,  3,  3,  3, 42,  3,  3,  3, 42,  8, },
{ 8,  3,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8, 68,  3,  3,  3,  3,  3,  3,  3, 42, 42,  3,  3,  3,  3,  3, 68,  3,  8, },
{ 8,  3, 42, 42, 42,  3,  3,  3, 68,  3,  3,  3,  3, 42,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3, 42,  3,  3,  3,  3,  3,  3,  3,  3,  3, 42,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  3,  3,  3,  3,  3,  3, 68,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  8, },
{ 8,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  8, },
};
unsigned char ActiveBlock[][3] =
{
{  8,  8,  8,   },
};
void runLauncher(const char* path)
{

	char fullPathexe[512];
#pragma warning (disable:4996)
	sprintf(fullPathexe, "%s%s", path, "Launcher.exe");

	// プロセス起動準備
	PROCESS_INFORMATION pi = { 0 };
	STARTUPINFO si = { 0 };
	si.cb = sizeof(STARTUPINFO);

	CreateProcess(fullPathexe, (LPSTR)"", NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, path, &si, &pi);
}


int		WINAPI		myWinMain(HINSTANCE hInstance, HINSTANCE hPreInst, LPSTR     CmdLine, int CmdShow,
	int screen_x, int screen_y, bool FullScreen)
{


#ifdef WINDOW_MODE
	ChangeWindowMode(TRUE);
#endif 
	/////////////////////////////////////////////////////////
	// DXLIB初期化関連
	/////////////////////////////////////////////////////////
	SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, 16);

	SetMainWindowText("1年生用テンプレート07");// ウィドウタイトル
	DxLib_Init();   // DXライブラリ初期化処理

	SetMouseDispFlag(true);
	SetDrawScreen(DX_SCREEN_BACK); //描画先を裏画面に設定

	const int    enemyNum = 100;
	//クラス関数宣言
	Player	player;
	Enemy	enemy[enemyNum];
	Rule	rule;
	Map		map;
	Shot	shot[SHOT];
	UI		ui;
	Sound	sound;
	BitmapText text;
	/*Shot	shot[SHOT];*/

	rule.InitRule();
	ui.InitUI();
	player.InitPlayer();
	map.InitMap();
	
	sound.InitSound();
	for (int i = 0; i < enemyNum; i++)
	{
		enemy[i].InitEnemy();
	}
	/////////////////////////////////////////////////////////
	// ゲームループ
	/////////////////////////////////////////////////////////
	
	
	while (1)
	{
		
		ClearDrawScreen(); 					// 画面を初期化(真っ黒にする)
		if (!player.atkFlag)
		{
			INPUT_INSTANCE.update();			// 入力キーすべて調べる
		}
		
		rule.frameCount++;
		sound.ringSound(&rule);
	
		//// 各アップデート関数を呼ぶ.
	
		if (rule.state == STATE_INIT)
		{
			
			ui.InitUI();
	
		
			for (int i = 0; i < enemyNum; i++)
			{
				enemy[i].InitEnemy();
			}
			rule.state=STATE_TITLE;

		}
	
		if (rule.state == STATE_GAME)
		{
			
			
			map.CreateNewActiveBlock();
			if (player.damageFlag = true)
			{
				player.damagecont++;
			}
			if (enemy->damageFlag = true)
			{
				enemy->damagecont++;
			}
			player.MovePlayer(&sound);				//プレーヤーの移動
		
			map.scroll(&player);							//スクロール
			for (int i = 0; i < enemyNum; i++)
			{
				player.IitemHit(&map, &enemy[i],&sound);
				player.PlayerHitChec(&enemy[i], map, &sound);	//プレーヤーの当たり判定
				enemy[i].BlocRectEnemy();
			}
			if (rule.frameCount % rule.enemuyCount == 0)
			{
				for (int i = 0; i < enemyNum; i++)
				{
					if (!enemy[i].aliveFlg)
					{
						enemy[i].AddEnemy(enemy[i].ranodmRange(200, 300), enemy[i].ranodmRange(100, 3000), enemy[i].ranodmRange(1, -1), enemy[i].ranodmRange(1, -1));
						break;
					}

				}
			}
			
			player.PlayerBlocrect(&sound, &rule, &map);
			
		}
		for (int i = 0; i < enemyNum; i++)
		{
			rule.UpdateRule(&player, &enemy[i], &map, &sound,&rule);
		}
		
		if (rule.state == STATE_GAME)
		{
			DrawExtendGraph(0 - 1, 0, WINDOW_WIDTH - 1, WINDOW_HEIGHT, ui.sky, TRUE);
			map.DrawMap(&rule);						//マップ描画
	
			for (int i = 0; i < enemyNum; i++)
			{
				enemy[i].DrawEnemy(&player, &map, &rule,&text); //エネミーの表示
			}
		
			
			player.PlayerAnime(&map, &rule, text,&sound);	//アニメーション
		}
		ui.DrawUI(&rule, &player, text);
		
		// 裏画面の内容を表画面にコピーする（描画の確定）.
		ScreenFlip();
		
		// Windows 特有の面倒な処理をＤＸライブラリにやらせる
		// マイナスの値（エラー値）が返ってきたらループを抜ける
		if (ProcessMessage() < 0)
		{
			break;
		}
		// もしＥＳＣキーが押されていたらループから抜ける
		else if (CheckHitKey(KEY_INPUT_ESCAPE))
		{
			break;
		}
	}
	
	for (int i = 0; i < enemyNum; i++)
	{
		enemy[i].aliveFlg = false;
	}
	DxLib_End();
	runLauncher("../../../");
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////
// コンソール画面からWindowsのお作法に飛ぶためのコード
////////////////////////////////////////////////////////////////////////////////////////
void windowOpen(int screen_x, int screen_y, bool FullScreen)
{
	HINSTANCE	hInstance	= GetModuleHandle(0);
	int			iCmdShow	= SW_SHOWDEFAULT ;

	myWinMain( hInstance, NULL, NULL, iCmdShow, screen_x, screen_y, FullScreen);
}

// DOS窓時のエントリーポイント
int main(void)
{
	windowOpen( 1440, 1200, false);

	return 0;
}

// ウィンドウシステムの時のエントリーポイント
int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
{
	main();
	return 0;
}