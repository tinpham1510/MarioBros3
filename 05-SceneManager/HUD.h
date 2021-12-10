#pragma once
#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"
#include "Game.h"
#include "Mario.h"
#define ID_ANI_HUD	15000
#define ID_ANI_ITEM	15001

#define SCREEN_H 64
#define SCREEN_W	84
#define SCREEN_W_PLUS	10
#define SCREEN_PLUS	12

class HUD: public CGameObject
{
public:
	static HUD* __instance;
	CMario* mario = CMario::GetInstance();
public:
	int time;
	//string p = (string)(Point);
	HUD() {
		time = 300;
	};
	void Update(DWORD dt);
	void Render();
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom) {
		return;
	};
	static HUD* GetInstance();
};

