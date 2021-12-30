#include "Curtain.h"


void Curtain::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_CURTAIN)->Render(x, y);
}
void Curtain::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects) {
	x += vx * dt;
	y += vy * dt;
	if (state == CURTAIN_STATE_MOVING)
	{
		if (y <= -(float)CGame::GetInstance()->GetBackBufferHeight())
		{
			isDeleted = true;
		}
	}
}
void Curtain::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - CURTAIN_BBOX_WIDTH / 2;
	top = y - CURTAIN_BBOX_HEIGHT / 2;
	right = left + CURTAIN_BBOX_WIDTH;
	bottom = top + CURTAIN_BBOX_HEIGHT;
}

void Curtain::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case CURTAIN_STATE_IDLE:

		break;
	case CURTAIN_STATE_MOVING:
		vy = -CURTAIN_MOVING_VY;
		break;
	default:
		break;
	}
}