#include <iostream>
using namespace std;

/*
* ���һ��Բ�࣬��Բ���ܳ�
* Բ���ܳ��Ĺ�ʽ��2 * PI * �뾶
*/

const double PI = 3.14159;

class Circle//class�������һ���࣬���������ŵľ���������Բ��Circle
{
	//����Ȩ��
	//����Ȩ��
public:

	//����
	int m_r;

	//��Ϊ
	//��ȡԲ���ܳ�
	double CalculatePerimeter(void)//�����ܳ�
	{
		return 2 * PI * m_r;
	}	
};

void Study_Lei_Learn(void)
{
	//ͨ��Բ�࣬����һ�������Բ������
	//ʵ����	ͨ��һ���ഴ��һ������Ĺ���
	Circle c1{10};

	//��Բ���� �����Խ��и�ֵ
	c1.m_r = 10;

	cout << "Բc1���ܳ�Ϊ��" << c1.CalculatePerimeter() << endl;
}