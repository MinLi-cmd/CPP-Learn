#include "����������.h"

/*
* ���
* 1.����������̳�һ������
* 2.����ĳ����ͬʱ�̳�������������
* 3.���ּ̳б���Ϊ���μ̳� ������ʯ�̳�
* ���������
* �̳�ǰ��virtual ����̳У�
* �൱�ڼ̳�ָ�룬vbptr: virtual base pointer ���ָ��ָ�����ĳ�Ա
*/

/*=========������=========*/

/*===������===*/
class Animal81
{
public:
	int m_age;
};

/*===����===*/
class Sheep81 :virtual public Animal81
{

};

/*===����===*/
class Camel81 :virtual public Animal81
{

};

/*===������===*/
class Alpaca81 :public Sheep81, public Camel81
{

};


/*=========���μ̳������Լ���������ĺ������=========*/

void Study_Inheritance_Rhombus(void)
{
	Alpaca81 a81;
	a81.Sheep81::m_age = 18;
	a81.Camel81::m_age = 20;

	cout << "a81.Sheep81::m_age = " << a81.Sheep81::m_age << endl;
	cout << "a81.Camel81::m_age = " << a81.Camel81::m_age << endl;
	cout << "a81.m_age = " << a81.m_age << endl;

	cout << sizeof(a81) << endl;
}

/*=========����ʵ��=========*/


