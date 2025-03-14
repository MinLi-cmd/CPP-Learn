/*
* 一般不会利用成员函数重载 “<<” 运算符
* 因为无法实现cout在左侧
*/

#include <iostream>
using namespace std;

#define Person Person2

class Person
{
	friend ostream& operator <<(ostream& cout, Person& p);
public:
	Person();
private:
	int num1, num2;
};

//ostream& operator <<(ostream& cout, Person& p);//ostream 输出流类

void Study_OperatorOverloading_LeftShift(void)
{
	Person p1;
	cout << p1 << endl;//链式编程思想
}

Person::Person()
{
	num1 = 10;
	num2 = 20;
}

ostream& operator <<(ostream& cout, Person& p)//本质 operator <<(cout,p) 简化 cout << p;
{
	cout << "num1 = " << p.num1 << endl;
	cout << "num2 = " << p.num2;
	return cout;
}