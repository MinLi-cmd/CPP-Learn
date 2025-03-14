/*
* 函数的分类以及调用
*两种分类方式：
*	1.按参数分为：有参构造和无参构造
*	2.按类型分为：普通构造和拷贝构造
*三种调用方式：
*	1.括号法
*	2.显示法
*	3.隐式转换法
*/

#include <iostream>
using namespace std;

#define Person Person1

class Person
{
public:
	Person()			//无参构造（默认构造）
	{
		cout << "Person1的无参构造函数调用" << endl;
	}
	Person(int a)		//有参构造
	{
		age = a;
		cout << "Person1的有参构造函数调用" << endl;
	}
	Person(const Person1& p)
	{
		age = p.age;
		cout << "Person1的拷贝构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int age;
};

void Study_HanShu_FengLeiAndDiaoYong(void)
{
	/*括号法调用*/
	Person p1;					//无参构造（默认构造）
	Person p2(10);				//有参构造
	Person p3(p2);				//拷贝构造
	cout << p3.age << endl;
	/*注意事项*/
	//调用默认构造函数的时候，不要加()
	//因为Person p1();是一个函数的声明

	/*显示法调用*/
	Person p4;					//无参构造（默认构造）
	Person p5 = Person(10);		//有参构造
	Person p6 = Person(p5);		//拷贝构造
	cout << p6.age << endl;
	//Person(10);匿名对象	特点：当前行执行结束后，系统会回收掉匿名对象
	/*注意事项：不要利用拷贝构造函数 初始化匿名对象*/
	//Person(p5);会报重定义，编译器会认为 Person(p3) === Person p3;

	/*隐式调用*/
	Person p7;
	Person p8 = 10;//相当于写了 Person p7 = Person(10);有参构造
	Person p9 = p8;//相当于写了 Person p9 = Person(p8);拷贝构造
}