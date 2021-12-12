#include "Leaf.h"


Leaf::Leaf(float x, float y) :Item(x, y, 0)
{
	item = ItemType::leaf;
	SetState(LEAF_STATE_APPEAR);
	ay = LEAF_GRAVITY;
	first_y = y;
}



void Leaf::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	if (state != LEAF_STATE_APPEAR)
	{
		if (nx >= 0)
		{
			animations->Get(ID_ANI_LEAF_FALL_RIGHT)->Render(x, y);
		}
		else
			animations->Get(ID_ANI_LEAF_FALL_LEFT)->Render(x, y);
	}
	RenderBoundingBox();
}

void Leaf::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects) {

	
	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
}

void Leaf::OnNoCollision(DWORD dt) {
	x += vx * dt;
	y += vy * dt;
}

void Leaf::OnCollisionWith(LPCOLLISIONEVENT e) {
	
}
void Leaf::SetState(int state) {

	CGameObject::SetState(state);
	switch (state)
	{
	
	default:
		break;
	}
}
void Leaf::GetBoundingBox(float& l, float& t, float& r, float& b)
{

	l = x - LEAF_BBOX_WIDTH / 2;
	t = y - LEAF_BBOX_HEIGHT / 2;
	r = l + LEAF_BBOX_WIDTH;
	b = t + LEAF_BBOX_HEIGHT;
}

void Leaf::setDirectItem(int nx)
{
	this->nx = nx;
	SetState(LEAF_STATE_NORMAL);
}
