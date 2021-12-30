#pragma once
#include "Game.h"
#include "Textures.h"
#include "Scene.h"
#include "GameObject.h"
#include "Brick.h"
#include "Mario.h"
#include "Goomba.h"
#include "Map.h"
#include "Portal.h"
#include "Coin.h"
#include "Platform.h"
#include "ColorBox.h"
#include "QuestionBrick.h"
#include "Koopas.h"
#include "Pipe.h"
#include "KoopasFly.h"
#include "GoombaRed.h"
#include "FirePlant.h"
#include "Mushroom.h"
#include "Tail.h"
#include "BrokenEffect.h"
#include "Pbutton.h"
#include "Leaf.h"
#include "FireBullet.h"
#include "EndGame.h"
#include "Map.h"
#include "Curtain.h"
#include "IntroBG.h"
//#include "GreenMario.h"
////#include "IntroOption.h"
//#include "Number3.h"
#define Sequence1MaxTime	2000

class IntroScene :public CScene
{
protected:
	// A play scene has to have player, right? 

	vector<LPGAMEOBJECT> objects;
	Map* map;


	void _ParseSection_SPRITES(string line);
	void _ParseSection_ANIMATIONS(string line);

	void _ParseSection_ASSETS(string line);


	void LoadAssets(LPCWSTR assetFile);

	void _ParseSection_MAP(string line);
public:
	LPCWSTR path;
	//Number3* num3;
	CBrick* brick = new CBrick(5, 195);
	Curtain* curtain = new Curtain(0, 0);
	IntroBG* introbackground = new IntroBG((float)CGame::GetInstance()->GetBackBufferWidth() / 2,(float) -CGame::GetInstance()->GetBackBufferHeight() / 2);
	DWORD SequenceTime = 0;
	IntroScene(int id, LPCWSTR filePath);
	bool isDoneSeq1, isDoneSeq2, isDoneSeq3, isDoneSeq4, isDoneSeq5;
	virtual void Load();
	virtual void Update(DWORD dt);
	virtual void Render();
	virtual void Unload();

	void ScriptIntro();
	void Clear();
	void PurgeDeletedObjects();

	static bool IsGameObjectDeleted(const LPGAMEOBJECT& o);
};

typedef IntroScene* LPINTROSCENE;