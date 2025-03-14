/*
* this指针指向被调用的成员函数所属的对象
* this指针是隐含在每一个 非静态成员函数 内的一种指针
* this指针不需要定义，直接使用即可
* this的用途：
* 1.当形参和成员变量同名时，可用this指针来区分
* 2.在类的 非静态成员函数 中返回对象本身 可使用return *this
* 总结：值返回或者值传入的时候都是复制一份传进去的 与本身无关 所以要用*或者&
*/

#include <iostream>
using namespace std;

#define Person Person11

class Person
{
public:
	Person(int age)
	{
		/*解决名称冲突*/
		this->age = age;/*this指针指向被调用的成员函数所属的对象*/
	}
	Person& PersonAddAge(const Person& a)
	{
		this->age += a.age;
		return *this;
	}
	int age;
};

void Study_Pointer_This(void)
{
	/*解决名称冲突*/
	Person p1(18);/*this指针指向 被调用的成员函数 所属的对象 这里this指向的p1*/
	cout << "p1的年龄为：" << p1.age << endl;

	/*返回对象本身用*this*/
	Person p2(10);
	Person p3(10);
	
	/*链式编程思想*/
	p3.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);
	cout << "p3的年龄为：" << p3.age << endl;
}