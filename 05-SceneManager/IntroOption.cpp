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
	if (state == OPTION_STATE_KEYUP)
	{
		animations->Get(ID_ANI_OPTION)->Render(x, y);
	}
	else if (state == OPTION_STATE_KEYDOWN)
	{
		animations->Get(ID_ANI_OPTION_CHANGE)->Render(x, y);
	}
	else
		animations->Get(ID_ANI_OPTION_IDLE)->Render(x, y);
}
void IntroOption::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	if (state == OPTION_STATE_IDLE)
	{
		if (GetTickCount64() - timeChange > OPTION_TIME_CHANGE)
		{
			SetState(OPTION_STATE_KEYUP);
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
		timeChange = GetTickCount64();
		break;
	default:
		break;
	}
}