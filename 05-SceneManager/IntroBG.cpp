#include "IntroBG.h"
#include "IntroNumber.h"
void IntroBG::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	if (state == BACKGROUND_STATE_MOVING)
	{
		animations->Get(ID_ANI_BACKGROUND)->Render(x, y);
	}
	else if (state == BACKGROUND_STATE_CHANGE)
	{
		animations->Get(ID_ANI_BACKGROUND_CHANGE)->Render(x, y);
	}
}
void IntroBG::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	x += vx * dt;
	y += vy * dt;
	if (state == BACKGROUND_STATE_MOVING)
	{
		if (y >= (float)CGame::GetInstance()->GetBackBufferHeight()/2 - BACKGROUND_OFFSET)
		{
			vy = 0;
		}

		if (GetTickCount64() - timeChange >= BACKGROUND_INTRO_TIME)
		{
			SetState(BACKGROUND_STATE_CHANGE);
		}
	}



}
void IntroBG::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - BACKGROUND_BBOX_WIDTH / 2;
	top = y - BACKGROUND_BBOX_HEIGHT / 2;
	right = left + BACKGROUND_BBOX_WIDTH;
	bottom = top + BACKGROUND_BBOX_HEIGHT;
}
void IntroBG::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case BACKGROUND_STATE_IDLE:

		break;
	case BACKGROUND_STATE_MOVING:
		vy = BACKGROUND_MOVING_VY;
		timeChange = GetTickCount64();
		break;
	case BACKGROUND_STATE_CHANGE:
		break;
	default:
		break;
	}
}