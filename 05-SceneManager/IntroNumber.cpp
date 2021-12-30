#include "IntroNumber.h"

void IntroNumber::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_NUMBER_CHANGE)->Render(x, y);

}
void IntroNumber::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{

}
void IntroNumber::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - NUMBER_BBOX_WIDTH / 2;
	top = y - NUMBER_BBOX_HEIGHT / 2;
	right = left + NUMBER_BBOX_WIDTH;
	bottom = top + NUMBER_BBOX_HEIGHT;
}
void IntroNumber::SetState(int state)
{
	CGameObject::SetState(state);

}