#include "Player.h"

void Player::HitDamage()
{
}

void Player::InvRender()
{
}

Var2<float> Player::GetHavePos()
{
	return Var2<float>();
}

void Player::Move()
{
}

void Player::Render()
{
	// ���G���Ԓ��͓_��
	if(invTime > 0)
	{
		InvRender();
	}
	
}
