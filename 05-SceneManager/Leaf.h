#pragma once
#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"
#include "Item.h"
#define LEAF_BBOX_WIDTH	16
#define LEAF_BBOX_HEIGHT	14
#define LEAF_GRAVITY 0.001f;
#define ID_ANI_LEAF_FALL_RIGHT	14000
#define ID_ANI_LEAF_FALL_LEFT	14001

#define LEAF_STATE_APPEAR 0
#define LEAF_STATE_NORMAL	100
#define LEAF_STATE_FALLING	200
#define LEAF_STATE_COLLISION	300
class Leaf : public Item {
public:

	Leaf(float x, float y);
	void Render();
	void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	virtual void OnNoCollision(DWORD dt);

	virtual void OnCollisionWith(LPCOLLISIONEVENT e);
	virtual int IsBlocking() { return 0; }
	virtual void SetState(int state);
	void setDirectItem(int nx);

}