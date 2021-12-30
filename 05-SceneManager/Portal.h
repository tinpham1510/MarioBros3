#pragma once

#include "GameObject.h"

#define PORTAL_BBOX_WIDTH	16
#define PORTAL_BBOX_HEIGHT	16
/*
	Object that triggers scene switching
*/
class CPortal : public CGameObject
{
	int scene_id;	// target scene to switch to 

public:
	float next_x, next_y;
	CPortal(float l, float t, float r, float b, int scene_id, float nextX, float nextY);
	virtual void Render();
	virtual void GetBoundingBox(float &l, float &t, float &r, float &b);
	int GetSceneId() { return scene_id;  }
	int IsBlocking() { return 0; }
};