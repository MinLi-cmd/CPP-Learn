#include <iostream>
using namespace std;
#include <string>

#define Person Person6

class Person
{
public:
	Person(string name, int age);
	bool operator ==(Person& p);
	bool operator !=(Person& p);

	string m_name;
	int m_age;
};

void GuanXi_test01(void);

/*=========关系运算符重载的函数入口=========*/

void Study_OperatorOverloading_GuanXi(void)
{
	GuanXi_test01();
}

void GuanXi_test01(void)
{
	Person p1("张三", 21);
	Person p2("张四", 20);
	if (p1 == p2)
	{
		cout << "p1和p2相等" << endl;
	}
	else
	{
		cout << "p1和p2不相等" << endl;
	}
	if (p1 != p2)
	{
		cout << "p1和p2不相等" << endl;
	}
	else
	{
		cout << "p1和p2相等" << endl;
	}
}

/*=========函数的实现=========*/

Person::Person(string name, int age)
{
	this->m_name = name;
	this->m_age = age;
}

bool Person::operator ==(Person& p)
{
	if (this->m_name == p.m_name && this->m_age == p.m_age)
	{
		return true;
	}
	return false;
}

bool Person::operator !=(Person& p)
{
	if (this->m_name != p.m_name || this->m_age != p.m_age)
	{
		return true;
	}
	return false;
}