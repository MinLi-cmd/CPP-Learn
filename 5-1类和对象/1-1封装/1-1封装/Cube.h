#pragma once

#include <iostream>
using namespace std;

typedef unsigned long long int ULL_int;

class Cube
{
public:
	//����Ȩ��
	void SetLength(ULL_int size);//���������峤��
	ULL_int GetLength(void);//��ȡ�����峤��
	void SetWide(ULL_int size);//������������
	ULL_int GetWide(void);//��ȡ��������
	void SetHigh(ULL_int size);//����������߶�
	ULL_int GetHigh(void);//��ȡ������߶�
	ULL_int GetArea(void);//��ȡ���
	ULL_int GetVolume(void);//��ȡ���
	void Compare(Cube& a);
private:
	//˽��Ȩ��
	ULL_int m_side_L, m_side_W, m_side_H;
};