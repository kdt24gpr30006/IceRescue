#pragma once

#include <ctime>		// �W��C ���C�u���� �w�b�_�[ <time.h> ���C���N���[�h���A�֘A���閼�O�� std ���O��Ԃɒǉ����܂��B
#include "DxLib.h"		// DxLib
#include "CheckInput.h"
#include "WinMain.h"

/// <summary>
/// �Q�[���֌W
/// </summary>
class Game
{
	/// <summary>
	/// ���͏����֐�
	/// </summary>
	void input();

	/// <summary>
	/// ��ʍX�V�֐�
	/// </summary>
	void render();

	/// <summary>
	/// �����Đ������֐�
	/// </summary>
	void sound();

	Game() {}
public:

	// �R�s�[����֎~
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;

	/// <summary>
	/// �C���X�^���X��Ԃ�
	/// </summary>
	/// <returns></returns>
	static Game& GetInstance()
	{
		static Game instance;
		return instance;
	}

	/// <summary>
	/// �������֐�
	/// </summary>
	/// <returns><����:true, ���s:false/returns>
	bool Init();

	/// <summary>
	/// �X�V�֐�
	/// </summary>
	void Loop();

	/// <summary>
	/// �I���֐�
	/// </summary>
	void End();

	virtual ~Game()
	{

	}
};