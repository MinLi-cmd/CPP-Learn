#include "����������.h"

/*=========������=========*/

class Base61
{
public:
	static int m_a;
	static void func(void);
};
int Base61::m_a = 100;

class Son61 :public Base61
{
public:
	static int m_a;
	static void func(void);
};
int Son61::m_a = 200;

void SNSMtest01(void);
void SNSMtest02(void);

/*=========�̳���ͬ����̬��Ա����ĺ������=========*/

void Study_Inheritance_SameNameStaticMember_Dispose(void)
{
	//SNSMtest01();
	SNSMtest02();
}
/*=========����ʵ��=========*/

void SNSMtest01(void)
{
	Son61 s61;
	cout << "1.ͨ��������ʾ�̬��Ա" << endl;
	cout << "s61.Son61::m_a = " << s61.Son61::m_a << endl;
	cout << "s61.Base61::m_a = " << s61.Base61::m_a << endl;

	cout << "2.ͨ���������ʾ�̬��Ա" << endl;
	cout << "Son61::m_a = " << Son61::m_a << endl;
	cout << "Base61::m_a = " << Base61::m_a << endl;
	cout << "Son61::Base61::m_a = " << Son61::Base61::m_a << endl;
}

void SNSMtest02(void)
{
	Son61 s62;
	cout << "1.ͨ��������ʾ�̬��Ա����" << endl;
	s62.func();
	s62.Base61::func();
	cout << "2.ͨ���������ʾ�̬��Ա����" << endl;
	Son61::func();
	Son61::Base61::func();
}

void Base61::func(void)
{
	cout << "Base61�� func�����ĵ���" << endl;
}

void Son61::func(void)
{
	cout << "Son61�� func�����ĵ���" << endl;
}