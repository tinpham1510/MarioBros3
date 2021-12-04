#include "Tail.h"
#include "Goomba.h"
#include"GoombaRed.h"
#include "QuestionBrick.h"


void CTail::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - TAIL_BBOX_WIDTH / 2;
	top = y - TAIL_BBOX_HEIGHT / 2;
	right = left + TAIL_BBOX_WIDTH + 2;
	bottom = top + TAIL_BBOX_HEIGHT;
}

void CTail::OnNoCollision(DWORD dt) {
	x += vx * dt;
	y += vy * dt;
}

void CTail::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects) {

	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
}

void CTail::Render()
{
	RenderBoundingBox();
}

void CTail::OnCollisionWith(LPCOLLISIONEVENT e) {

	if (!e->obj->IsBlocking()) return;
	if (dynamic_cast<CGoomba*>(e->obj))
		OnCollisionWithGoomba(e);
	/*else if (dynamic_cast<CGoombaRed*>(e->obj))
		OnCollisionWithRedGoomba(e);
	else if (dynamic_cast<CQuestionBrick*>(e->obj))
		OnCollisionWithQB(e);*/
	

}

void CTail::OnCollisionWithGoomba(LPCOLLISIONEVENT e)
{
	CGoomba* gb = dynamic_cast<CGoomba*>(e->obj);
	gb->SetState(GOOMBA_STATE_DIE_BY_ATTACKING);

}