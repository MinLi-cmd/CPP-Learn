#include "函数声明库.h"

/*
* 继承方式一共有三种：
* ·公共继承
* ·保护继承
* ·私有继承
* 总结：
* 1.父类的公共 保护权限成员子类继承后可以访问，私有权限成员子类不可以访问
* 2.子类的继承方式会改变继承过来的父类成员的属性：私有>保护>公共
*/

class Base21
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

/*===公共继承===*/
class Son21 :public Base21
{
public:
	void visit_son1(void);
};

/*===保护继承===*/
class Son22 :protected Base21
{
public:
	void visit_son2(void);
};

/*===私有继承===*/
class Son23 :private Base21
{
public:
	void visit_son3(void);
};

class GrandSon21 :public Son23
{
public:
	void visit_GrandSon1(void);
};

/*=========继承的继承方式的函数入口=========*/

void Study_Inheritance_Mode(void)
{
	Son21 s21;
	s21.visit_son1();
	s21.m_a = 100;

	Son22 s22;
	s22.visit_son2();

	Son23 s23;
	s23.visit_son3();

}

/*=========函数的实现=========*/

void Son21::visit_son1(void)
{
	m_a = 10;	//父类中的公共权限成员 到子类中依旧是公共权限
	m_b = 20;	//父类中的保护权限成员 到子类中依旧是保护权限
	//m_c = 30;	//父类中的私有权限成员 到子类中依旧是私有权限 子类访问不到 报错
}

void Son22::visit_son2(void)
{
	m_a = 10;	//父类中的公共权限成员 到子类中变为保护权限
	m_b = 30;	//父类中的保护权限成员 到子类中依旧是保护权限
	//m_c = 40;	//父类中的私有权限成员 到子类中依旧是私有权限 子类访问不到 报错
}

void Son23::visit_son3(void)
{
	m_a = 10;	//父类中的公共权限成员 到子类中变为私有权限
	m_b = 20;	//父类中的保护权限成员 到子类中变为私有权限
	//m_c = 30;	//父类中的私有权限成员 到子类中依旧是私有权限 子类访问不到 报错
}

void GrandSon21::visit_GrandSon1(void)
{
	//m_a = 10;
}