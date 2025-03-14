#include "函数声明库.h"

/*
* 继承中构造和析构的顺序如下：
* 先构造父类 再构造子类 析构的顺序与构造的顺序相反
*/

/*=========类声明=========*/

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

/*=========继承中构造和析构顺序的函数入口=========*/

void Study_Inheritance_GouZaoHeXiGouShunXu(void)
{
	Son41 s41;
}

/*=========函数的实现=========*/

/*===Base41类的函数===*/
Base41::Base41(void)
{
	cout << "Base41 构造函数调用" << endl;
}

Base41::~Base41(void)
{
	cout << "Base41 析构函数调用" << endl;
}

/*===Son41类的函数===*/
Son41::Son41(void)
{
	cout << "Son41 构造函数调用" << endl;
}

Son41::~Son41(void)
{
	cout << "Son41 析构函数调用" << endl;
}