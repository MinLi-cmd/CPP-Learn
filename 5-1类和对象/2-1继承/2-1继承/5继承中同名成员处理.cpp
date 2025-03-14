#include "函数声明库.h"

/*
* 总结：
* 1.子类对象可以直接访问到子类中同名成员
* 2.子类对象加作用域可以访问到父类同名成员
* 3.当子类与父类拥有同名的成员函数 子类会隐藏父类中同名成员函数 加作用域可以访问到父类中同名函数
*/

/*=========类声明=========*/
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

/*=========继承中同名成员处理的函数入口=========*/

void Study_Inheritance_SameNameMember_Dispose(void)
{
	Son51 s51;
	cout << "Son51::m_a = " << s51.m_a << endl;
	cout << "Base51::m_a = " << s51.Base51::m_a << endl;
	s51.func();
	s51.Base51::func();
}

/*=========函数的实现=========*/

/*===Base51类的函数===*/
Base51::Base51(void)
{
	m_a = 10;
}

void Base51::func(void)
{
	cout << "Base5的func(); 函数的调用" << endl;
}

/*===Son51类的函数===*/
Son51::Son51(void)
{
	m_a = 100;
}

void Son51::func(void)
{
	cout << "Son51的func(); 函数的调用" << endl;
}