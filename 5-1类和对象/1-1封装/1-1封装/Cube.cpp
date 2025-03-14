#include "Cube.h"

void Cube::SetLength(ULL_int size)//���������峤��
{
	m_side_L = size;
}

ULL_int Cube::GetLength(void)//��ȡ�����峤��
{
	return m_side_L;
}

void Cube::SetWide(ULL_int size)//������������
{
	m_side_W = size;
}

ULL_int Cube::GetWide(void)//��ȡ��������
{
	return m_side_W;
}

void Cube::SetHigh(ULL_int size)//����������߶�
{
	m_side_H = size;
}

ULL_int Cube::GetHigh(void)//��ȡ������߶�
{
	return m_side_H;
}

ULL_int Cube::GetArea(void)//��ȡ���
{
	ULL_int area;
	area = (m_side_L * m_side_W + m_side_L * m_side_H + m_side_W * m_side_H) * 2;
	return area;
}

ULL_int Cube::GetVolume(void)//��ȡ���
{
	return m_side_L * m_side_W * m_side_H;
}

void Cube::Compare(Cube& a)//�Ƚ������������Ƿ����
{
	if (m_side_L == a.GetLength() && m_side_W == a.GetWide() && m_side_H == a.GetHigh())
	{
		cout << "���������������" << endl;
	}
	else
	{
		cout << "�����������岻���" << endl;
	}
}

