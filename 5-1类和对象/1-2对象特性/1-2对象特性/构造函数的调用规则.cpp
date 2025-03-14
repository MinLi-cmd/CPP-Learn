/*
* 默认情况下 C++编译器至少给一个类添加3个函数
* 1.默认构造函数(无参，函数体为空)
* 2.默认析构函数(无参，函数体为空)
* 3.默认拷贝函数，对属性进行值拷贝
* 构造函数调用规则如下：
* 1.如果用户定义有参构造函数 C++不再提供默认无参构造，但是会提供默认拷贝构造
* 2.如果用户定义拷贝构造函数 C++不会再提供其他构造函数
*/

#include <iostream>
using namespace std;

#define Person Person4	

class Person
{
public:
	/*Person()
	{
		cout << "Person4的无参构造调用" << endl;
	}*/
	Person(int a)
	{
		m_age = a;
		cout << "Person4的有参构造调用" << endl;
	}
	/*Person(Person& p)
	{
		cout << "Person4的拷贝构造调用" << endl;
	}*/


	~Person()
	{
		cout << "Person4的析构函数调用" << endl;
	}
	int m_age;
};

void Study_HanShu_DiaoYongGuiZe(void)
{
	Person p1(10);
	Person p2(p1);
	cout << p2.m_age << endl;
}