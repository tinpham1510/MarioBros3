#pragma once
#include "Animation.h"
#include "Animations.h"
#include "GameObject.h"

#define NUMBER_BBOX_WIDTH	42
#define NUMBER_BBOX_HEIGHT	42
#define ID_ANI_NUMBER_CHANGE	18006

#define NUMBER_OFFSET	240
class IntroNumber : public CGameObject
{
public:
	IntroNumber(float x, float y) : CGameObject(x, y) { };
	void Render();
	void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void SetState(int state);
};

