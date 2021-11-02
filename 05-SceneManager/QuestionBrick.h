#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#include "Coin.h"
#include "Mushroom.h"

#define ID_ANI_QBRICK 100000
#define ID_ANI_EMP	100001
#define QBRICK_BBOX_WIDTH 16
#define QBRICK_BBOX_HEIGHT 16

#define QUESTIONBRICK_STATE_COLISION 100
#define QUESTIONBRICK_STATE_EMP	200

#define MAX_HEIGHT	5
class CQuestionBrick : public CGameObject 
{
public:
	CCoin* coin;
	CMushroom* mus = NULL;
	BOOLEAN CheckBrickCollision = false;
	float First_y;
	CQuestionBrick(float x, float y);
	void Render();
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	virtual void SetState(int state);


	void SetItem(CMushroom* mr);
	void SetItemC(CCoin* co);
};