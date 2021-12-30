#pragma once
#include "Animation.h"
#include "Animations.h"
#include "GameObject.h"

#define OPTION_BBOX_WIDTH	126
#define OPTION_BBOX_HEIGHT	28

#define ID_ANI_OPTION	18003
#define ID_ANI_OPTION_CHANGE	18004
#define ID_ANI_OPTION_IDLE	18007

#define OPTION_STATE_IDLE	0
#define OPTION_STATE_KEYUP	1
#define OPTION_STATE_KEYDOWN	2

#define OPTION_TIME_CHANGE	6000

#define OPTION_OFFSET	275
class IntroOption : public CGameObject
{
public:
	ULONGLONG timeChange;
	static IntroOption* __instance;
	static IntroOption* GetInstance();
	IntroOption(float x, float y) : CGameObject(x, y) { SetState(OPTION_STATE_IDLE); };
	void Render();
	void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void SetState(int state);
};

