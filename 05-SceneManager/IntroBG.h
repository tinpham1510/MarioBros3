#pragma once
#include "Animation.h"
#include "Animations.h"
#include "GameObject.h"

#define BACKGROUND_BBOX_WIDTH	320
#define BACKGROUND_BBOX_HEIGHT	185

#define ID_ANI_BACKGROUND	18001
#define ID_ANI_BACKGROUND_CHANGE	18002

#define BACKGROUND_STATE_IDLE	0
#define BACKGROUND_STATE_MOVING	1
#define BACKGROUND_STATE_CHANGE	2

#define BACKGROUND_TIME_CHANGE	500

#define BACKGROUND_OFFSET	20
#define BACKGROUND_MOVING_VY	0.1f
class IntroBG: public CGameObject
{
public: 
	ULONGLONG timeChange;
	IntroBG(float x, float y) : CGameObject(x, y) { SetState(BACKGROUND_STATE_IDLE); };
	void Render();
	void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void SetState(int state);
};

