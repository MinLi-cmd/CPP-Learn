#include "Cube.h"

void Cube::SetLength(ULL_int size)//设置立方体长度
{
	m_side_L = size;
}

ULL_int Cube::GetLength(void)//获取立方体长度
{
	return m_side_L;
}

void Cube::SetWide(ULL_int size)//设置立方体宽度
{
	m_side_W = size;
}

ULL_int Cube::GetWide(void)//获取立方体宽度
{
	return m_side_W;
}

void Cube::SetHigh(ULL_int size)//设置立方体高度
{
	m_side_H = size;
}

ULL_int Cube::GetHigh(void)//获取立方体高度
{
	return m_side_H;
}

ULL_int Cube::GetArea(void)//获取面积
{
	ULL_int area;
	area = (m_side_L * m_side_W + m_side_L * m_side_H + m_side_W * m_side_H) * 2;
	return area;
}

ULL_int Cube::GetVolume(void)//获取体积
{
	return m_side_L * m_side_W * m_side_H;
}

void Cube::Compare(Cube& a)//比较两个立方体是否相等
{
	if (m_side_L == a.GetLength() && m_side_W == a.GetWide() && m_side_H == a.GetHigh())
	{
		cout << "这两个立方体相等" << endl;
	}
	else
	{
		cout << "这两个立方体不相等" << endl;
	}
}

