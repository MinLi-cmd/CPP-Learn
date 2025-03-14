#include "Circle.h"

void Circle::SetCenter_x(const double& x)//����Բ�ĵ�x����
{
	Circle_Center.SetPoint_x(x);
}
void Circle::SetCenter_y(const double& y)//����Բ�ĵ�y����
{
	Circle_Center.SetPoint_y(y);
}

double Circle::GetCenter_x(void)		//��ȡԲ�ĵ�x����
{
	return Circle_Center.GetPoint_x();
}

double Circle::GetCenter_y(void)		//��ȡԲ�ĵ�y����
{
	return Circle_Center.GetPoint_y();
}

void Circle::SetCircle_r(const double& r)//����Բ�İ뾶
{
	Circle_r = r;
}

double Circle::GetCircle_r(void)			//��ȡԲ�İ뾶
{
	return Circle_r;
}

void Circle::ShowMessage(void)
{
	cout << "Բ������Ϊ��(" << Circle_Center.GetPoint_x() << "," << Circle_Center.GetPoint_x() << ")" << endl;
	cout << "Բ�İ뾶Ϊ��" << Circle_r << endl;
}

void Circle::CircleAndPoint(Point& p)
{
	double distance;
	distance = Distance_TwoPoints2(GetCenter_x(), GetCenter_y(), p.GetPoint_x(), p.GetPoint_y());
	if (distance > (GetCircle_r() * GetCircle_r()))
	{
		cout << "����Բ��" << endl;
	}
	if (distance < (GetCircle_r() * GetCircle_r()))
	{
		cout << "����Բ��" << endl;
	}
	if (distance == (GetCircle_r() * GetCircle_r()))
	{
		cout << "����Բ��" << endl;
	}
}
double Distance_TwoPoints2(double x1, double y1, double x2, double y2)//�����������꣬����ֵΪ����֮������ƽ��
{
	return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}