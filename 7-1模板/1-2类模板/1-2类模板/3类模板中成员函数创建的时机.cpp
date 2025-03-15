/*
* 类模板中成员函数和普通类中成员函数创建时机是有区别的：
* 1.普通类中的成员函数一开始就可以创建
* 2.类模板中的成员函数在调用才创建
* 
* 总结：类模板中的成员函数并不是一开始就创建的，在调用的时候才创建
*/

#include "0函数声明库.h"

class Person31
{
public:
	void ShowPerson(void)
	{
		cout << "Person31 ShowPerson的调用" << endl;
	}
};

class Person32
{
	void ShowPerson(void)
	{
		cout << "Person32 ShowPerson的调用" << endl;
	}
};

template <class T>
class MyClass31
{
public:
	void func1(void)
	{
		obj.ShowPerson();
	}

	void func2(void)
	{
		obj.ShowPerosn();
	}

	T obj;
};

void Study_LeiMuBanChuangJianShiJi(void)
{
	MyClass31<Person31> m;
	m.func1();
	//m.func2();无法调用，编译出错说明在调用的时候才会创建成员函数
}
