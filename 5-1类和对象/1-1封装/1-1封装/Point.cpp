#include "Point.h"

void Point::SetPoint_x(const double& x)//���õ��x����
{
	Point_x = x;
}
double Point::GetPoint_x(void)			//��ȡ���y����
{
	return Point_x;
}
void Point::SetPoint_y(const double& y)//���õ��y����
{
	Point_y = y;
}
double Point::GetPoint_y(void)			//��ȡ���y����
{
	return Point_y;
}
void Point::ShowMessage(void)
{
	cout << "�������Ϊ��(" << Point_x << "," << Point_y << ")" << endl;
}
