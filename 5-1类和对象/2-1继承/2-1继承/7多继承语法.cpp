#include "����������.h"

/*
* C++����һ����̳ж����
* �﷨: class ���� :�̳з�ʽ ����1, �̳з�ʽ ����2...
* ��̳п��ܻ�������������ͬ����Ա���� ��Ҫ������������
* C++ʵ�ʿ����������ö�̳�
*/

/*=========������=========*/

class Base71
{
public:
	Base71(void);
	int m_a;
};

class Base72
{
public:
	Base72(void);
	int m_a;
};

class Base73
{
public:
	Base73(void);
	int m_a;
};

class Son71 :public Base71, public Base72, public Base73
{
public:
	Son71(void);
	int m_a;
	int m_b;
};

/*=========��̳��﷨�ĺ������=========*/

void Study_MoreInheritance_Grammar(void)
{
	Son71 s71;
	cout << sizeof(s71) << endl;
	cout << "s71.Base71::m_a = " << s71.Base71::m_a << endl;
	cout << "s71.Base72::m_a = " << s71.Base72::m_a << endl;
	cout << "s71.Base73::m_a = " << s71.Base73::m_a << endl;
	cout << "s71.m_a = " << s71.m_a << endl;
	cout << "s71.m_b = " << s71.m_b << endl;
}

/*=========����ʵ��=========*/

Base71::Base71(void)
{
	cout << "Base71 ���캯������" << endl;
	m_a = 100;
}

Base72::Base72(void)
{
	cout << "Base72 ���캯������" << endl;
	m_a = 200;
}

Base73::Base73(void)
{
	cout << "Base73 ���캯������" << endl;
	m_a = 300;
}

Son71::Son71(void)
{
	cout << "Son71 ���캯������" << endl;
	m_a = 400;
	m_b = 500;
}