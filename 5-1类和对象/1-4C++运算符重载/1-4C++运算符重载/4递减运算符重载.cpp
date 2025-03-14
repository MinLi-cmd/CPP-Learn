#include <iostream>
using namespace std;

typedef long long int LL_int;

#define MyInteger MyInteger4

class MyInteger
{
	friend ostream& operator <<(ostream& o, MyInteger& m);
public:
	MyInteger();
	MyInteger& operator --(void);
	MyInteger& operator --(int);
private:
	int m_num;
};

/*=========递减运算符重载的函数入口=========*/

void Study_OperatorOverloading_DiJian(void)
{
	MyInteger myint;
	cout << myint << "\t" << (LL_int)&myint << endl;
	cout << --(--myint) << "\t" << (LL_int)&myint << endl;
	cout << myint-- << "\t" << (LL_int)&myint << endl;
	cout << myint-- << "\t" << (LL_int)&myint << endl;
	cout << myint << "\t" << (LL_int)&myint << endl;
}

/*=========函数的实现=========*/

MyInteger::MyInteger()
{
	m_num = 10;
}

ostream& operator <<(ostream& o, MyInteger& m)
{
	o << "m_num = " << m.m_num;
	return o;
}

MyInteger& MyInteger::operator --(void)
{
	this->m_num--;
	return *this;
}

MyInteger& MyInteger::operator --(int)
{
	MyInteger* temp = new MyInteger;
	*temp = *this;
	this->m_num--;
	return *temp;
}