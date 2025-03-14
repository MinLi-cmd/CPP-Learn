/*
* 设计立方体类（Cube）
* 求出立方体的面积和体积
* 分别用全局函数和成员函数判断两个立方体是否相等
*/

#include <iostream>
using namespace std;
#include "Cube.h"


//class Cube
//{
//public:
//	//公共权限
//	void SetLength(ULL_int size)//设置立方体长度
//	{
//		m_side_L = size;
//	}
//
//	ULL_int GetLength(void)//获取立方体长度
//	{
//		return m_side_L;
//	}
//
//	void SetWide(ULL_int size)//设置立方体宽度
//	{
//		m_side_W = size;
//	}
//
//	ULL_int GetWide(void)//获取立方体宽度
//	{
//		return m_side_W;
//	}
//
//	void SetHigh(ULL_int size)//设置立方体高度
//	{
//		m_side_H = size;
//	}
//
//	ULL_int GetHigh(void)//获取立方体高度
//	{
//		return m_side_H;
//	}
//
//	ULL_int GetArea(void)//获取面积
//	{
//		ULL_int area;
//		area = (m_side_L * m_side_W + m_side_L * m_side_H + m_side_W * m_side_H) * 2;
//		return area;
//	}
//
//	ULL_int GetVolume(void)//获取体积
//	{
//		return m_side_L * m_side_W * m_side_H;
//	}
//
//	void Compare(Cube& a)//比较两个立方体是否相等
//	{
//		if (m_side_L == a.GetLength() && m_side_W == a.GetWide() && m_side_H == a.GetHigh())
//		{
//			cout << "这两个立方体相等" << endl;
//		}
//		else
//		{
//			cout << "这两个立方体不相等" << endl;
//		}
//	}
//
//private:
//	//私有权限
//	ULL_int m_side_L, m_side_W, m_side_H;
//};

void CubeCompare(Cube* a, Cube* b);//声明

void Study_Lei_AnLi_Cube(void)//学习_类_案例_立方体
{
	Cube c1{}, c2{};
	c1.SetLength(10);
	c1.SetWide(10);
	c1.SetHigh(10);
	c2.SetLength(10);
	c2.SetWide(10);
	c2.SetHigh(10);
	cout << "c1立方体的面积为：" << c1.GetArea() << "\tc1立方体的体积为：" << c1.GetVolume() << endl;
	cout << "c2立方体的面积为：" << c2.GetArea() << "\tc2立方体的体积为：" << c2.GetVolume() << endl;
	CubeCompare(&c1, &c2);
	c1.Compare(c2);
}

void CubeCompare(Cube* a, Cube* b)//全局函数比较立方体是否相等
{
	if (a->GetLength() == b->GetLength() && a->GetWide() == b->GetWide() && a->GetHigh() == b->GetHigh())
	{
		cout << "这两个立方体相等" << endl;
	}
	else
	{
		cout << "这两个立方体不相等" << endl;
	}
}