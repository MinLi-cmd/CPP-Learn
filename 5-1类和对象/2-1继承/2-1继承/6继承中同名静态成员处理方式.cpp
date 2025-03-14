#include "函数声明库.h"

/*=========类声明=========*/

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

/*=========继承中同名静态成员处理的函数入口=========*/

void Study_Inheritance_SameNameStaticMember_Dispose(void)
{
	//SNSMtest01();
	SNSMtest02();
}
/*=========函数实现=========*/

void SNSMtest01(void)
{
	Son61 s61;
	cout << "1.通过对象访问静态成员" << endl;
	cout << "s61.Son61::m_a = " << s61.Son61::m_a << endl;
	cout << "s61.Base61::m_a = " << s61.Base61::m_a << endl;

	cout << "2.通过类名访问静态成员" << endl;
	cout << "Son61::m_a = " << Son61::m_a << endl;
	cout << "Base61::m_a = " << Base61::m_a << endl;
	cout << "Son61::Base61::m_a = " << Son61::Base61::m_a << endl;
}

void SNSMtest02(void)
{
	Son61 s62;
	cout << "1.通过对象访问静态成员函数" << endl;
	s62.func();
	s62.Base61::func();
	cout << "2.通过类名访问静态成员函数" << endl;
	Son61::func();
	Son61::Base61::func();
}

void Base61::func(void)
{
	cout << "Base61类 func函数的调用" << endl;
}

void Son61::func(void)
{
	cout << "Son61类 func函数的调用" << endl;
}