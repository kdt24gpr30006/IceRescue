// =======================================
//  ���C�u�����Ǎ�
// =======================================
#include "Game.h"
#include <memory>

// ------------------------------
// WinMain
// ------------------------------
/// <summary>
/// WinMain�֐�
/// </summary>
/// <param name="hInstance"><�C���X�^���X�n���h��/param>
/// <param name="hPrevInstance"><�Ӗ��͂Ȃ�/param>
/// <param name="lpCmdLine"></param>
/// <param name="nShowCmd"></param>
/// <returns></returns>
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_  HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{

	// =======================================
	//  ����������
	// =======================================
	Game::GetInstance().Init();

	// Init()��false�ŋA���Ă����炻�̎��_�ŏI��
	if (Game::GetInstance().Init() == false)
	{
		return -1;
	}

	// ------------------------------
	//  �Q�[�����[�v
	// ------------------------------
	Game::GetInstance().Loop();

	// =======================================
	//  �I������
	// =======================================
	Game::GetInstance().End();


	// �\�t�g�̏I��
	return 0;
}