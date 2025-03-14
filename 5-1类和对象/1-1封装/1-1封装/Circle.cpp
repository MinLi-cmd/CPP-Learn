#include "Circle.h"

void Circle::SetCenter_x(const double& x)//设置圆心的x坐标
{
	Circle_Center.SetPoint_x(x);
}
void Circle::SetCenter_y(const double& y)//设置圆心的y坐标
{
	Circle_Center.SetPoint_y(y);
}

double Circle::GetCenter_x(void)		//获取圆心的x坐标
{
	return Circle_Center.GetPoint_x();
}

double Circle::GetCenter_y(void)		//获取圆心的y坐标
{
	return Circle_Center.GetPoint_y();
}

void Circle::SetCircle_r(const double& r)//设置圆的半径
{
	Circle_r = r;
}

double Circle::GetCircle_r(void)			//获取圆的半径
{
	return Circle_r;
}

void Circle::ShowMessage(void)
{
	cout << "圆心坐标为：(" << Circle_Center.GetPoint_x() << "," << Circle_Center.GetPoint_x() << ")" << endl;
	cout << "圆的半径为：" << Circle_r << endl;
}

void Circle::CircleAndPoint(Point& p)
{
	double distance;
	distance = Distance_TwoPoints2(GetCenter_x(), GetCenter_y(), p.GetPoint_x(), p.GetPoint_y());
	if (distance > (GetCircle_r() * GetCircle_r()))
	{
		cout << "点在圆外" << endl;
	}
	if (distance < (GetCircle_r() * GetCircle_r()))
	{
		cout << "点在圆内" << endl;
	}
	if (distance == (GetCircle_r() * GetCircle_r()))
	{
		cout << "点在圆上" << endl;
	}
}
double Distance_TwoPoints2(double x1, double y1, double x2, double y2)//传入两点坐标，返回值为两点之间距离的平方
{
	return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}