#include "IntroOption.h"

IntroOption* IntroOption::__instance = NULL;

IntroOption* IntroOption::GetInstance()
{
	if (__instance == NULL) __instance = new IntroOption(0, 0);
	return __instance;
}


void IntroOption::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	if (state == OPTION_STATE_MOVING)
	{
		animations->Get(ID_ANI_OPTION)->Render(x, y);
	}
	else if (state == OPTION_STATE_CHANGE)
	{
		animations->Get(ID_ANI_OPTION_CHANGE)->Render(x, y);
	}
}
void IntroOption::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	x += vx * dt;
	y += vy * dt;
	if (state == OPTION_STATE_MOVING)
	{
		if (y >= (float)CGame::GetInstance()->GetBackBufferHeight() / 2 + OPTION_OFFSET)
		{
			vy = 0;
		}
	}



}
void IntroOption::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - OPTION_BBOX_WIDTH / 2;
	top = y - OPTION_BBOX_HEIGHT / 2;
	right = left + OPTION_BBOX_WIDTH;
	bottom = top + OPTION_BBOX_HEIGHT;
}
void IntroOption::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case OPTION_STATE_IDLE:

		break;
	case OPTION_STATE_MOVING:
		vy = OPTION_MOVING_VY;
		timeChange = GetTickCount64();
		break;
	case OPTION_STATE_CHANGE:
		break;
	default:
		break;
	}
}