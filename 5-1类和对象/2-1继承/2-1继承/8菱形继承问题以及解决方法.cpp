#include "函数声明库.h"

/*
* 概念：
* 1.两个派生类继承一个基类
* 2.又有某个类同时继承这两个派生类
* 3.这种继承被称为菱形继承 或者钻石继承
* 解决方法：
* 继承前加virtual （虚继承）
* 相当于继承指针，vbptr: virtual base pointer 虚基指针指向基类的成员
*/

/*=========类声明=========*/

/*===动物类===*/
class Animal81
{
public:
	int m_age;
};

/*===羊类===*/
class Sheep81 :virtual public Animal81
{

};

/*===驼类===*/
class Camel81 :virtual public Animal81
{

};

/*===羊驼类===*/
class Alpaca81 :public Sheep81, public Camel81
{

};


/*=========菱形继承问题以及解决方法的函数入口=========*/

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

/*=========函数实现=========*/


