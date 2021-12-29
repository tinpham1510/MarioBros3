#include "HUD.h"
#include "debug.h"
#include "Mario.h"
HUD* HUD::__instance = NULL;
HUD* HUD::GetInstance()
{
	if (__instance == NULL) __instance = new HUD();
	return __instance;
}


void HUD::Render()
{
	float x = CGame::GetInstance()->GetCamX() + CGame::GetInstance()->GetBackBufferWidth() / 2  + SCREEN_W_PLUS;
	float y = CGame::GetInstance()->GetCamY() + CGame::GetInstance()->GetBackBufferHeight() - SCREEN_H / 2;
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_HUD)->Render(x , y + SCREEN_PLUS);
	animations->Get(ID_ANI_ITEM)->Render(x + SCREEN_W , y + SCREEN_PLUS);
	for (int i = 0; i < stack; i++)
	{
		stackspeed->RenderStack(CGame::GetInstance()->GetCamX() + RANGE_BETWEEN, y + RANGE_HEIGHT, stack);
	}


	if (EndGame::GetInstance()->GetState() == ENDGAME_ITEM_STATE_TEXT_DISPLAY)
	{
		if (EndGame::GetInstance()->isStar)
		{
			animations->Get(ID_ANI_ITEM_STAR)->Render(x + SCREEN_W - ITEM_BBOX_WIDTH, y + SCREEN_PLUS);
		}
		else if (EndGame::GetInstance()->isMush)
		{
			animations->Get(ID_ANI_ITEM_MUSHROOM_ENDGAME)->Render(x + SCREEN_W - ITEM_BBOX_WIDTH, y + SCREEN_PLUS);
		}
		else
			animations->Get(ID_ANI_ITEM_PLANT)->Render(x + SCREEN_W - ITEM_BBOX_WIDTH, y + SCREEN_PLUS);
	}
}

void HUD::Update(DWORD dt)
{

}
