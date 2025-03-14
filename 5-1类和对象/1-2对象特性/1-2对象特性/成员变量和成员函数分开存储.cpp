/*
* 1.空对象占用内存空间为：1字节
*	C++编译器会给每个空对象也分配一个字节空间 是为了区分空对象占内存空间的位置
*	每一个空对象也应该有一个独一无二的内存地址
* 总结： 成员变量 和 成员函数 是分开存储的
*/

#include <iostream>
using namespace std;

#define Person Person10

class Person
{
	int a;				//非静态成员变量  属于类的对象上

	static int b;		//静态成员变量	不属于类对象上

	void test01()		//非静态成员函数  不属于类对象上
	{

	}

	static void test02()//静态成员函数  不属于类对象上
	{

	}
};

int Person::b = 100;

void Study_Lei_SeparatelyStore(void)/*学习成员变量和成员函数分开存储*/
{
	Person p;
	cout << "sizeof(p) = " << sizeof(p) << endl;
}