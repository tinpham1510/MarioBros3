#pragma once
#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"
#include "Game.h"
#include "StackSpeed.h"
#include "EndGame.h"
#define ID_ANI_HUD	15000
#define ID_ANI_ITEM	15001

#define ID_ANI_ITEM_MUSHROOM_ENDGAME	15004
#define ID_ANI_ITEM_STAR	15005
#define ID_ANI_ITEM_PLANT	15006

#define SCREEN_H 64
#define SCREEN_W	84
#define SCREEN_W_PLUS	10
#define SCREEN_PLUS	12

#define RANGE_BETWEEN	66
#define RANGE_HEIGHT 7

#define ITEM_BBOX_WIDTH	24
class HUD: public CGameObject
{
public:
	static HUD* __instance;
	StackSpeed* stackspeed = new StackSpeed();
public:
	int stack;
	int time;
	HUD() {
		time = 300;
		stack = 0;
	};
	void Update(DWORD dt);
	void Render();
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom) {
		return;
	};
	static HUD* GetInstance();
};

