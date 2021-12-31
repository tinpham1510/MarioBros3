#include "SampleKeyEventHandler.h"

#include "debug.h"
#include "Game.h"

#include "Mario.h"
#include "PlayScene.h"
#include "IntroOption.h"
#include "Intro.h"

#define X_POSITION	2260
#define Y_POSITION	60

#define X_POSITION_LASTITEM	2500
#define X_POSITION_BRICK	2000
void CSampleKeyHandler::OnKeyDown(int KeyCode)
{
	//DebugOut(L"[INFO] KeyDown: %d\n", KeyCode);
	CMario* mario = (CMario *)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer(); 

	if (CGame::GetInstance()->current_scene == 3)
	{
		IntroOption* option = IntroOption::GetInstance();
		switch (KeyCode)
		{
		case DIK_DOWN:
			if (option->GetState() == OPTION_STATE_KEYUP) {
				option->SetState(OPTION_STATE_KEYDOWN);
			}
			break;
		case DIK_UP:
			if (option->GetState() == OPTION_STATE_KEYDOWN) {
				option->SetState(OPTION_STATE_KEYUP);
			}
			break;
		case DIK_W:
			CGame::GetInstance()->InitiateSwitchScene(1);
			break;
		default:
			break;
		}
	}
	else
	{
		switch (KeyCode)
		{
		case DIK_DOWN:
			if (!mario->isHoldKoopas)
			{
				mario->SetState(MARIO_STATE_SIT);
			}
			break;
		case DIK_S:
			if (mario->powerStack == MARIO_MAX_POWER)
			{
				mario->SetState(MARIO_STATE_FLYING);
			}

			if (mario->isFlying == false)
			{
				if (mario->CheckIsOnPlatForm())
				{
					mario->SetState(MARIO_STATE_JUMP);
				}
				else
					mario->SetState(MARIO_STATE_FALLING_SLOWDOWN);
			}

			break;
		case DIK_1:
			mario->SetLevel(MARIO_LEVEL_SMALL);
			break;
		case DIK_2:
			mario->SetLevel(MARIO_LEVEL_BIG);
			break;
		case DIK_3:
			mario->SetLevel(MARIO_LEVEL_RACOON);
			break;
		case DIK_0:
			mario->SetState(MARIO_STATE_DIE);
			break;
		case DIK_A:
			mario->SetState(MARIO_STATE_ATTACK);
			break;
		case DIK_R: // reset
			mario->Reset();
			break;
		case DIK_H:
			mario->SetPosition(X_POSITION, Y_POSITION);
			break;
		case DIK_G:
			mario->SetPosition(X_POSITION_LASTITEM, Y_POSITION);
			break;
		case DIK_J:
			mario->SetPosition(X_POSITION_BRICK, Y_POSITION);
			break;
		}
	}
}

void CSampleKeyHandler::OnKeyUp(int KeyCode)
{
	//DebugOut(L"[INFO] KeyUp: %d\n", KeyCode);

	CMario* mario = (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer();
	if (CGame::GetInstance()->current_scene == 3)
	{
		return;
	}
	else
	{
		switch (KeyCode)
		{
		case DIK_S:
			if (!mario->isChangingScene)
			{
				mario->SetState(MARIO_STATE_RELEASE_JUMP);
			}
			break;
		case DIK_DOWN:
			mario->SetState(MARIO_STATE_SIT_RELEASE);
			break;
		case DIK_A:
			if (mario->isHoldKoopas)
			{
				mario->SetState(MARIO_STATE_RELEASE_HOLDING);
			}
			else if (mario->powerStack > 0 && !mario->isFlying)
			{
				mario->DecreasePower();
			}
			break;
		}
	}
}

void CSampleKeyHandler::KeyState(BYTE* states)
{
	LPGAME game = CGame::GetInstance();
	CMario* mario = (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer();

	if (game->current_scene == 3)
	{
		return;
	}
	else
	{
		if (!mario->isChangingScene && !mario->isEnd)
		{
			if (game->IsKeyDown(DIK_RIGHT))
			{
				if (game->IsKeyDown(DIK_A))
					mario->SetState(MARIO_STATE_RUNNING_RIGHT);
				else
					mario->SetState(MARIO_STATE_WALKING_RIGHT);
			}
			else if (game->IsKeyDown(DIK_LEFT))
			{
				if (game->IsKeyDown(DIK_A))
					mario->SetState(MARIO_STATE_RUNNING_LEFT);
				else
					mario->SetState(MARIO_STATE_WALKING_LEFT);
			}
			else
				mario->SetState(MARIO_STATE_IDLE);
		}
	}
}