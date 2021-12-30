#pragma once
#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define CURTAIN_BBOX_WIDTH	300
#define CURTAIN_BBOX_HEIGHT	260

#define ID_ANI_CURTAIN	18000

#define CURTAIN_STATE_IDLE	0
#define CURTAIN_STATE_MOVING	1


#define CURTAIN_MOVING_VY	0.2f
class Curtain: public CGameObject
{
public:
	Curtain(float x, float y) : CGameObject(x, y) { SetState(CURTAIN_STATE_IDLE); };
	void Render();
	void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void SetState(int state);
};

