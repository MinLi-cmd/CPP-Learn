/*
* ����������ࣨCube��
* ������������������
* �ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
*/

#include <iostream>
using namespace std;
#include "Cube.h"


//class Cube
//{
//public:
//	//����Ȩ��
//	void SetLength(ULL_int size)//���������峤��
//	{
//		m_side_L = size;
//	}
//
//	ULL_int GetLength(void)//��ȡ�����峤��
//	{
//		return m_side_L;
//	}
//
//	void SetWide(ULL_int size)//������������
//	{
//		m_side_W = size;
//	}
//
//	ULL_int GetWide(void)//��ȡ��������
//	{
//		return m_side_W;
//	}
//
//	void SetHigh(ULL_int size)//����������߶�
//	{
//		m_side_H = size;
//	}
//
//	ULL_int GetHigh(void)//��ȡ������߶�
//	{
//		return m_side_H;
//	}
//
//	ULL_int GetArea(void)//��ȡ���
//	{
//		ULL_int area;
//		area = (m_side_L * m_side_W + m_side_L * m_side_H + m_side_W * m_side_H) * 2;
//		return area;
//	}
//
//	ULL_int GetVolume(void)//��ȡ���
//	{
//		return m_side_L * m_side_W * m_side_H;
//	}
//
//	void Compare(Cube& a)//�Ƚ������������Ƿ����
//	{
//		if (m_side_L == a.GetLength() && m_side_W == a.GetWide() && m_side_H == a.GetHigh())
//		{
//			cout << "���������������" << endl;
//		}
//		else
//		{
//			cout << "�����������岻���" << endl;
//		}
//	}
//
//private:
//	//˽��Ȩ��
//	ULL_int m_side_L, m_side_W, m_side_H;
//};

void CubeCompare(Cube* a, Cube* b);//����

void Study_Lei_AnLi_Cube(void)//ѧϰ_��_����_������
{
	Cube c1{}, c2{};
	c1.SetLength(10);
	c1.SetWide(10);
	c1.SetHigh(10);
	c2.SetLength(10);
	c2.SetWide(10);
	c2.SetHigh(10);
	cout << "c1����������Ϊ��" << c1.GetArea() << "\tc1����������Ϊ��" << c1.GetVolume() << endl;
	cout << "c2����������Ϊ��" << c2.GetArea() << "\tc2����������Ϊ��" << c2.GetVolume() << endl;
	CubeCompare(&c1, &c2);
	c1.Compare(c2);
}

void CubeCompare(Cube* a, Cube* b)//ȫ�ֺ����Ƚ��������Ƿ����
{
	if (a->GetLength() == b->GetLength() && a->GetWide() == b->GetWide() && a->GetHigh() == b->GetHigh())
	{
		cout << "���������������" << endl;
	}
	else
	{
		cout << "�����������岻���" << endl;
	}
}