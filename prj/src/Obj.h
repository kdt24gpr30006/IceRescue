#pragma once
#include "EntityBase.h"

class Obj : public EntityBase
{
	bool isHave = false;	// ������Ă��邩
	bool isGoal = false;	// �S�[�����Ă��邩

public:

	Obj(){}
	virtual ~Obj() = 0;

	// ����
	virtual void Move() = 0;
	// �`��
	virtual void Render() = 0;
};