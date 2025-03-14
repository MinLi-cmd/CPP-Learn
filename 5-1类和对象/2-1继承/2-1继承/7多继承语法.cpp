#include "函数声明库.h"

/*
* C++允许一个类继承多个类
* 语法: class 子类 :继承方式 父类1, 继承方式 父类2...
* 多继承可能会引发父类中有同名成员出现 需要加作用域区分
* C++实际开发不建议用多继承
*/

/*=========类声明=========*/

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

/*=========多继承语法的函数入口=========*/

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

/*=========函数实现=========*/

Base71::Base71(void)
{
	cout << "Base71 构造函数调用" << endl;
	m_a = 100;
}

Base72::Base72(void)
{
	cout << "Base72 构造函数调用" << endl;
	m_a = 200;
}

Base73::Base73(void)
{
	cout << "Base73 构造函数调用" << endl;
	m_a = 300;
}

Son71::Son71(void)
{
	cout << "Son71 构造函数调用" << endl;
	m_a = 400;
	m_b = 500;
}