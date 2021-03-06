#include "GameObject.h"
#define KOOPASFLY_GRAVITY 0.001f
#define KOOPASFLY_WALKING_SPEED 0.05f
#define KOOPASFLY_SHELL_SPEED 0.2f
#define KOOPASFLY_DEFLECT_JUMP_SPEED 0.4f

#define KOOPASFLY_BBOX_WIDTH 16
#define KOOPASFLY_BBOX_HEIGHT 26
#define KOOPASFLY_BBOX_HEIGHT_SHELL 15

#define KOOPASFLY_DIE_TIMEOUT 10000

#define KOOPASFLY_STATE_JUMPFLY	50
#define KOOPASFLY_STATE_WALKING	100
#define KOOPASFLY_STATE_SHELL 300
#define KOOPASFLY_STATE_SHELL_MOVING 400



#define ID_ANI_KOOPASFLY_JUMPFLY_LEFT 8000
#define ID_ANI_KOOPASFLY_JUMPFLY_RIGHT 8001
#define ID_ANI_KOOPASFLY_SHELL 8002
#define ID_ANI_KOOPASFLY_WALKING_LEFT 8003
#define ID_ANI_KOOPASFLY_WALKING_RIGHT 8004
#define ID_ANI_KOOPASFLY_SHELL_MOVING_LEFT 8005
#define ID_ANI_KOOPASFLY_SHELL_MOVING_RIGHT 8006

class CKoopasFly : public CGameObject
{
protected:
	float ax;
	float ay;
	int Direct;
	bool isCollision;
	ULONGLONG die_start;
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void Render();
	void OnCollisionWithGoomba(LPCOLLISIONEVENT e);
	virtual int IsCollidable() { return 1; };

	virtual int IsBlocking() { return 0; }
	virtual void OnNoCollision(DWORD dt);

	virtual void OnCollisionWith(LPCOLLISIONEVENT e);

	void ReturnLife();



public:
	float objX, objY;
	CKoopasFly(float x, float y);
	virtual void SetState(int state);
	void setNX(int direct) { Direct = direct; };
};