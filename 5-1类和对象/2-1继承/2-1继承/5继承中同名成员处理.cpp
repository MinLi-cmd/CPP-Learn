#include "����������.h"

/*
* �ܽ᣺
* 1.����������ֱ�ӷ��ʵ�������ͬ����Ա
* 2.����������������Է��ʵ�����ͬ����Ա
* 3.�������븸��ӵ��ͬ���ĳ�Ա���� ��������ظ�����ͬ����Ա���� ����������Է��ʵ�������ͬ������
*/

/*=========������=========*/
class Base51
{
public:
	Base51(void);
	void func(void);
	int m_a;
};

class Son51 :public Base51
{
public:
	Son51(void);
	void func(void);
	int m_a;
};

/*=========�̳���ͬ����Ա����ĺ������=========*/

void Study_Inheritance_SameNameMember_Dispose(void)
{
	Son51 s51;
	cout << "Son51::m_a = " << s51.m_a << endl;
	cout << "Base51::m_a = " << s51.Base51::m_a << endl;
	s51.func();
	s51.Base51::func();
}

/*=========������ʵ��=========*/

/*===Base51��ĺ���===*/
Base51::Base51(void)
{
	m_a = 10;
}

void Base51::func(void)
{
	cout << "Base5��func(); �����ĵ���" << endl;
}

/*===Son51��ĺ���===*/
Son51::Son51(void)
{
	m_a = 100;
}

void Son51::func(void)
{
	cout << "Son51��func(); �����ĵ���" << endl;
}