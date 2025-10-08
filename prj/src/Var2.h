#pragma once  
#include <cmath>  
#include <DxLib.h>

// �ϐ����Q�̃N���X  
template<typename T>  
class Var2  
{  
public:  
    T x;  
    T y;  

    // �R���X�g���N�^  
    Var2() : x(0.0f), y(0.0f) {}                                // 0���  
    Var2(float argX, float argY) : x(argX), y(argY) {}        // ��������  

    void Clear() { x = y = 0; }                                    // 0������  
    void Set(float argX, float argY) { x = argX; y = argY; }    // �l�̃Z�b�g  

    float GetLength() const { return std::hypot(x, y); };        // �����擾  
    void Normalize();                                            // ���K��  
    void SetLength(float length);                                // �����ݒ�  

    void GetMousePos();                                            // �}�E�X�̍��W�����  

    Var2& operator =  (const Var2& f2);                    // = ���Z�q�̃I�[�o�[���[�h  
    Var2& operator += (const Var2& f2);                    // += ���Z�q�̃I�[�o�[���[�h  
    Var2& operator -= (const Var2& f2);                    // -= ���Z�q�̃I�[�o�[���[�h  
    Var2& operator *= (const Var2& f2);                    // *= ���Z�q�̃I�[�o�[���[�h  
    Var2& operator /= (const Var2& f2);                    // /= ���Z�q�̃I�[�o�[���[�h  
};  

// ���K���i�x�N�g���̒������P�ɂ���j  
template<typename T>  
void Var2<T>::Normalize()  
{  
    float length = GetLength();  
    if (length > 0.0f)  
    {  
        x /= length;  
        y /= length;  
    }  
}  

// �����ݒ�  
template<typename T>  
void Var2<T>::SetLength(float length)  
{  
    Normalize();  
    x = x * length;  
    y = y * length;  
}  

// �}�E�X�̍��W�����  
template<typename T>  
void Var2<T>::GetMousePos()  
{  
    int mouse_x, mouse_y;  
    GetMousePoint(&mouse_x, &mouse_y);  

    x = static_cast<float>(mouse_x);  
    y = static_cast<float>(mouse_y);  
}  

// = ���Z�q�̃I�[�o�[���[�h  
template<typename T>  
Var2<T>& Var2<T>::operator=(const Var2<T>& f2)  
{  
    x = f2.x;  
    y = f2.y;  
    return *this;  
}  

// += ���Z�q�̃I�[�o�[���[�h  
template<typename T>  
Var2<T>& Var2<T>::operator+=(const Var2<T>& f2)  
{  
    x += f2.x;  
    y += f2.y;  
    return *this;  
}  

// -= ���Z�q�̃I�[�o�[���[�h  
template<typename T>  
Var2<T>& Var2<T>::operator-=(const Var2<T>& f2)  
{  
    x -= f2.x;  
    y -= f2.y;  
    return *this;  
}  

// *= ���Z�q�̃I�[�o�[���[�h  
template<typename T>  
Var2<T>& Var2<T>::operator*=(const Var2<T>& f2)  
{  
    x *= f2.x;  
    y *= f2.y;  
    return *this;  
}  

// /= ���Z�q�̃I�[�o�[���[�h  
template<typename T>  
Var2<T>& Var2<T>::operator/=(const Var2<T>& f2)  
{  
    x /= f2.x;  
    y /= f2.y;  
    return *this;  
}

// + ���Z�q�̃I�[�o�[���[�h  
template<typename T>  
Var2<T> operator+(const Var2<T>& f2_1, const Var2<T>& f2_2)  
{  
    return Var2<T>(f2_1.x + f2_2.x, f2_1.y + f2_2.y);  
}  

// - ���Z�q�̃I�[�o�[���[�h  
template<typename T>  
Var2<T> operator-(const Var2<T>& f2_1, const Var2<T>& f2_2)  
{  
    return Var2<T>(f2_1.x - f2_2.x, f2_1.y - f2_2.y);  
}  

// * ���Z�q�̃I�[�o�[���[�h  
template<typename T>  
Var2<T> operator*(const Var2<T>& f2, const float f)  
{  
    return Var2<T>(f2.x * f, f2.y * f);  
}  

// / ���Z�q�̃I�[�o�[���[�h  
template<typename T>  
Var2<T> operator/(const Var2<T>& f2, const float f)  
{  
    return Var2<T>(f2.x / f, f2.y / f);  
}
