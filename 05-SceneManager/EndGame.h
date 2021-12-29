#pragma once
#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define ENDGAME_PANEL_BBOX_WIDTH 24
#define ENDGAME_PANEL_BBOX_HEIGHT 24


#define ENDGAME_TEXT_BBOX_WIDTH 248
#define ENDGAME_TEXT_BBOX_HEIGHT 70

#define ENDGAME_ITEM_MOVINGVY	0.08f

#define TIME_CHANGE 100

#define TIME_CHANGE_TEXT 1500

#define ENDGAME_TEXT_MOVING	0.04f

#define ENDGAME_ITEM_STATE_CHANGE_STAR	0
#define ENDGAME_ITEM_STATE_CHANGE_MUSHROOM	1
#define ENDGAME_ITEM_STATE_CHANGE_PLANT	2
#define ENDGAME_ITEM_STATE_MOVING_UP 3
#define ENDGAME_ITEM_STATE_TEXT_DISPLAY	4

#define ID_ANI_STAR	17000
#define ID_ANI_ITEM_MUSHROOM	17001
#define ID_ANI_PLANT	17002
#define ID_ANI_STAR_MOVING	17003
#define ID_ANI_MUSHROOM_MOVING	17004
#define ID_ANI_PLANT_MOVING	17005
#define ID_ANI_TEXT_STAR	17006
#define ID_ANI_TEXT_MUSHROOM	17007
#define ID_ANI_TEXT_PLANT	17008
class EndGame: public CGameObject
{
	static EndGame* __instance;
public:
	static EndGame* GetInstance();
	static void SetInstance(EndGame* p);
	ULONGLONG timeChangeM;
	ULONGLONG timeChangeP;
	ULONGLONG timeChangeS;
	ULONGLONG timeShow;
	float first_y;
	int typeItem;
	bool isStar = false , isMush = false, isPlant = false;
	EndGame(float x, float y) : CGameObject(x, y) { SetState(ENDGAME_ITEM_STATE_CHANGE_STAR);  first_y = y; };
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void Render();

	virtual int IsCollidable() { return 1; };
	virtual int IsBlocking() { return 0; }
	virtual void SetState(int state);

	float getX() { return x; }
};

