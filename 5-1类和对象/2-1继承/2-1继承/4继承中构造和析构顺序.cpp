#include "����������.h"

/*
* �̳��й����������˳�����£�
* �ȹ��츸�� �ٹ������� ������˳���빹���˳���෴
*/

/*=========������=========*/

class Base41
{
public:
	Base41(void);
	~Base41(void);
};

class Son41 :public Base41
{
public:
	Son41(void);
	~Son41(void);
};

/*=========�̳��й��������˳��ĺ������=========*/

void Study_Inheritance_GouZaoHeXiGouShunXu(void)
{
	Son41 s41;
}

/*=========������ʵ��=========*/

/*===Base41��ĺ���===*/
Base41::Base41(void)
{
	cout << "Base41 ���캯������" << endl;
}

Base41::~Base41(void)
{
	cout << "Base41 ������������" << endl;
}

/*===Son41��ĺ���===*/
Son41::Son41(void)
{
	cout << "Son41 ���캯������" << endl;
}

Son41::~Son41(void)
{
	cout << "Son41 ������������" << endl;
}