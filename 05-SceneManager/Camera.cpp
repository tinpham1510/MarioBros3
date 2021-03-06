#include "Camera.h"
#include "Mario.h"
#define ScreenH	16
Camera* Camera::__instance;
CGame* game = CGame::GetInstance();

Camera::Camera(int mapW, int mapH)
{
	Cam_x = Cam_y = 0;
	Width = (float)game->GetBackBufferWidth();
	Height = (float)game->GetBackBufferHeight();
	mapwidth = mapW;
	mapheight = mapH;
}

void Camera::GetPosition(float& x, float& y)
{
	x = Cam_x;
	y = Cam_y;
}

void Camera::SetPosition(float& cam_x, float& cam_y)
{
	Cam_x = cam_x;
	Cam_y = cam_y;
	Cam_y -= (float)game->GetBackBufferHeight() / 2;
	float ScreenY = mapheight - Height - ScreenH;

	if (CMario::GetInstance()->isFlying)
	{
		ScreenY = mapheight - Height;
	}

	if (cam_y > ScreenY) {
		Cam_y = cam_y;
	}

	Cam_x -= (float)game->GetBackBufferWidth() / 2;
	if (Cam_x < 0)
	{
		Cam_x = 0;
	}

	if (Cam_y < 0)
		Cam_y = 0;

	if (Cam_x >= mapwidth - Width - ScreenH)
		Cam_x = float(mapwidth - Width - ScreenH);
	if (Cam_y > ScreenY)
	{
		Cam_y = float(mapheight - Height + ScreenH);
	}

	cam_x = Cam_x;
	cam_y = Cam_y;
}

float Camera::GetWidth()
{
	return Cam_x;
}

float Camera::GetHeight()
{
	return Cam_y;
}