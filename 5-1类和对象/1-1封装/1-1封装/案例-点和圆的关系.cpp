/*
* ���Բ�Ĺ�ϵ
* ���һ��Բ���ࣨCirle������һ�����ࣨPoint����������Բ�Ĺ�ϵ
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
	//����Բ�����꼰��뾶
	cout << "������Բ�ĵ�x���꣺";
	cin >> x;
	c1.SetCenter_x(x);
	cout << "������Բ�ĵ�y���꣺";
	cin >> y;
	c1.SetCenter_y(y);
	cout << "������Բ�İ뾶��";
	cin >> r;
	c1.SetCircle_r(r);
	//����������
	cout << "��������x���꣺";
	cin >> x;
	p1.SetPoint_x(x);
	cout << "��������y���꣺";
	cin >> y;
	p1.SetPoint_y(y);
	//��ʾ��Ϣ
	c1.ShowMessage();
	p1.ShowMessage();
	cout << "��p1��Բ��c1�ľ���Ϊ��" << Distance_TwoPoints2(p1.GetPoint_x(), p1.GetPoint_y(), c1.GetCenter_x(), c1.GetCenter_y()) << endl;
	//�Ƚ�
	c1.CircleAndPoint(p1);
}
