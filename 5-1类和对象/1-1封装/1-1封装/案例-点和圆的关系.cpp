/*
* 点和圆的关系
* 设计一个圆形类（Cirle），和一个点类（Point），计算点和圆的关系
*/

#include <iostream>
using namespace std;
#include "Point.h"
#include "Circle.h"

void Study_Lei_AnLi_CirleAndPoint(void)
{
	Circle c1{};
	Point p1{};
	double x, y,r;
	//输入圆的坐标及其半径
	cout << "请输入圆心的x坐标：";
	cin >> x;
	c1.SetCenter_x(x);
	cout << "请输入圆心的y坐标：";
	cin >> y;
	c1.SetCenter_y(y);
	cout << "请输入圆的半径：";
	cin >> r;
	c1.SetCircle_r(r);
	//输入点的坐标
	cout << "请输入点的x坐标：";
	cin >> x;
	p1.SetPoint_x(x);
	cout << "请输入点的y坐标：";
	cin >> y;
	p1.SetPoint_y(y);
	//显示信息
	c1.ShowMessage();
	p1.ShowMessage();
	cout << "点p1到圆心c1的距离为：" << Distance_TwoPoints2(p1.GetPoint_x(), p1.GetPoint_y(), c1.GetCenter_x(), c1.GetCenter_y()) << endl;
	//比较
	c1.CircleAndPoint(p1);
}
