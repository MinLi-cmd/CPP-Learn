#include "Point.h"

void Point::SetPoint_x(const double& x)//设置点的x坐标
{
	Point_x = x;
}
double Point::GetPoint_x(void)			//获取点的y坐标
{
	return Point_x;
}
void Point::SetPoint_y(const double& y)//设置点的y坐标
{
	Point_y = y;
}
double Point::GetPoint_y(void)			//获取点的y坐标
{
	return Point_y;
}
void Point::ShowMessage(void)
{
	cout << "点的坐标为：(" << Point_x << "," << Point_y << ")" << endl;
}
