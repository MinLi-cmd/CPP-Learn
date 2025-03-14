/*
* 常函数：
* 1.成员函数后加const后我们称为这个函数为常函数
* 2.常函数内不可以修改成员属性
* 3.成员属性声明时关键字mutable后,在常函数中依然可以修改
* 常对象：
* 1.声明对象前加const称该对象为常对象
* 2.常对象只能调用常函数
*/

#include <iostream>
using namespace std;

#define Person Person13

class Person
{
public:
	/*this指针本质是指针常量*/
	void test01(void) const		//该函数为常函数 内部无法修改成员属性
	{
		//age = 10;相当于this->age = 10; 此时this是常量指针常量
		this->high = 140;
	}

	void test02(void)
	{

	}
	int age;
	mutable int high;//特殊变量 即使在常函数常对象中也可以修改该变量
};

void Study_MemberFunction_Const(void)
{
	Person p1;
	const Person p2;
	p2.test01();/*常对象只能调用常函数*/
}