/*
* 	静态成员函数	
* ·所有对象共享同一个函数
* ·静态成员函数只能访问静态成员变量
*/

#include <iostream>
using namespace std;

#define Person Person9

class Person
{
public:
	static void test01()
	{
		/*m_a = a;报错 静态成员函数不能访问非静态成员变量 无法区分到底是那个对象的m_a*/
		m_b = 20;
		cout << "static void tset01()的调用" << endl;
	}
	int m_a;
	static int m_b;
private:
	static void test02()
	{
		cout << "static void test02()的调用" << endl;
	}
};

int Person::m_b = 100;/*初始化类中的静态成员变量*/

void Study_StaticMember_Function(void)
{
	/*通过对象来访问*/
	Person p1;
	p1.test01();

	/*通过类名来访问*/
	Person::test01();

	/*静态成员函数也受访问权限控制*/
	//Person::test02();/*报错显示不可访问*/
	
}