#pragma once
#include "GameObject.h"
class ColorBox : public CGameObject
{
	int width;
	int height;
public:
	ColorBox(float l, float t, float r, float b);
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual int GetWidth() { return width; };
	virtual void Render();
	virtual int IsCollidable() { return 1; };
	virtual int IsBlockingOnSide(){ return 0; };
	//virtual int IsBlockingOnTop() { return 1; };
};