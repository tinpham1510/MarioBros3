#pragma once
#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define ENDGAME_PANEL_BBOX_WIDTH 24
#define ENDGAME_PANEL_BBOX_HEIGHT 24

#define ENDGAME_ITEM_MOVINGVY	0.08f

#define TIME_CHANGE 100

#define ENDGAME_ITEM_STATE_CHANGE_STAR	0
#define ENDGAME_ITEM_STATE_CHANGE_MUSHROOM	1
#define ENDGAME_ITEM_STATE_CHANGE_PLANT	2
#define ENDGAME_ITEM_STATE_MOVING_UP 3
#define ENDGAME_ITEM_STATE_IDLE	4

#define ID_ANI_STAR	17000
#define ID_ANI_MUSHROOM	17001
#define ID_ANI_PLANT	17002
#define ID_ANI_STAR_MOVING	17003
#define ID_ANI_MUSHROOM_MOVING	17004
#define ID_ANI_PLANT_MOVING	17005
class EndGame: public CGameObject
{
public:
	ULONGLONG timeChangeM;
	ULONGLONG timeChangeP;
	ULONGLONG timeChangeS;
	int typeItem;
	bool isStar = false , isMush = false, isPlant = false;
	EndGame(float x, float y) : CGameObject(x, y) { SetState(ENDGAME_ITEM_STATE_CHANGE_STAR); };
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void Render();

	virtual int IsCollidable() { return 1; };
	virtual int IsBlocking() { return 0; }
	virtual void SetState(int state);
};

