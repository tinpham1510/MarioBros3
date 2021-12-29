#include "EndGame.h"
#include "EndGame.h"
#include "Mario.h"



void EndGame::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	if (state != ENDGAME_ITEM_STATE_TEXT_DISPLAY)
	{
		left = x - ENDGAME_PANEL_BBOX_WIDTH / 2;
		right = left + ENDGAME_PANEL_BBOX_WIDTH;
		top = y - ENDGAME_PANEL_BBOX_HEIGHT / 2;
		bottom = top + ENDGAME_PANEL_BBOX_HEIGHT;
	}
	else
	{
		left = x - ENDGAME_TEXT_BBOX_WIDTH / 2;
		right = left + ENDGAME_TEXT_BBOX_WIDTH;
		top = y - ENDGAME_TEXT_BBOX_HEIGHT / 2;
		bottom = top + ENDGAME_TEXT_BBOX_HEIGHT;
	}
}


void EndGame::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	x += vx * dt;
	y += vy * dt;

	if (state == ENDGAME_ITEM_STATE_CHANGE_STAR)
	{
		if (GetTickCount64() - timeChangeS > TIME_CHANGE)
		{
			SetState(ENDGAME_ITEM_STATE_CHANGE_MUSHROOM);
		}
	}

	if (state == ENDGAME_ITEM_STATE_CHANGE_MUSHROOM)
	{
		if (GetTickCount64() - timeChangeM > TIME_CHANGE)
		{
			SetState(ENDGAME_ITEM_STATE_CHANGE_PLANT);
		}
	}

	if (state == ENDGAME_ITEM_STATE_CHANGE_PLANT)
	{
		if (GetTickCount64() - timeChangeP > TIME_CHANGE)
		{
			SetState(ENDGAME_ITEM_STATE_CHANGE_STAR);
		}
	}

	if (state == ENDGAME_ITEM_STATE_MOVING_UP)
	{
		if (GetTickCount64() - timeShow > TIME_CHANGE_TEXT)
		{
			SetState(ENDGAME_ITEM_STATE_TEXT_DISPLAY);
		}
	}

	if (state == ENDGAME_ITEM_STATE_TEXT_DISPLAY)
	{
		if (first_y < y + ENDGAME_TEXT_BBOX_HEIGHT)
		{
			vy = 0;
		}

	}
	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
}

void EndGame::Render()
{
	CAnimations* animations = CAnimations::GetInstance();

	if (state == ENDGAME_ITEM_STATE_CHANGE_STAR)
	{
		animations->Get(ID_ANI_STAR)->Render(x, y);
	}
	else if (state == ENDGAME_ITEM_STATE_CHANGE_MUSHROOM)
	{
		animations->Get(ID_ANI_ITEM_MUSHROOM)->Render(x, y);
	}
	else
		animations->Get(ID_ANI_PLANT)->Render(x, y);

	if (state == ENDGAME_ITEM_STATE_MOVING_UP)
	{
		if (isStar)
		{
			animations->Get(ID_ANI_STAR_MOVING)->Render(x, y);
		}
		else if (isMush)
		{
			animations->Get(ID_ANI_MUSHROOM_MOVING)->Render(x, y);
		}
		else
			animations->Get(ID_ANI_PLANT_MOVING)->Render(x, y);
	}

	if (state == ENDGAME_ITEM_STATE_TEXT_DISPLAY)
	{
		if (isStar)
		{
			animations->Get(ID_ANI_TEXT_STAR)->Render(x, y);
		}
		else if (isMush)
		{
			animations->Get(ID_ANI_TEXT_MUSHROOM)->Render(x, y);
		}
		else
			animations->Get(ID_ANI_TEXT_PLANT)->Render(x, y);
	}
	//RenderBoundingBox();
}

void EndGame::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case ENDGAME_ITEM_STATE_CHANGE_STAR:
		timeChangeS = GetTickCount64();
		typeItem = 0;
		break;
	case ENDGAME_ITEM_STATE_CHANGE_MUSHROOM:
		timeChangeM = GetTickCount64();
		typeItem = 1;
		break;
	case ENDGAME_ITEM_STATE_CHANGE_PLANT:
		timeChangeP = GetTickCount64();
		typeItem = 2;
		break;
	case ENDGAME_ITEM_STATE_MOVING_UP:
		if (typeItem == 0)
		{
			isStar = true;
		}
		else if (typeItem == 1)
		{
			isMush = true;
		}
		else
			isPlant = true;
		vy = -ENDGAME_ITEM_MOVINGVY;
		timeShow = GetTickCount64();
		break;
	case ENDGAME_ITEM_STATE_TEXT_DISPLAY:
		vy = ENDGAME_TEXT_MOVING;
		break;
	default:
		break;
	}

}