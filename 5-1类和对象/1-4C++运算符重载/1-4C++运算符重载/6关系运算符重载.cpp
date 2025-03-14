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

/*=========��ϵ��������صĺ������=========*/

void Study_OperatorOverloading_GuanXi(void)
{
	GuanXi_test01();
}

void GuanXi_test01(void)
{
	Person p1("����", 21);
	Person p2("����", 20);
	if (p1 == p2)
	{
		cout << "p1��p2���" << endl;
	}
	else
	{
		cout << "p1��p2�����" << endl;
	}
	if (p1 != p2)
	{
		cout << "p1��p2�����" << endl;
	}
	else
	{
		cout << "p1��p2���" << endl;
	}
}

/*=========������ʵ��=========*/

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