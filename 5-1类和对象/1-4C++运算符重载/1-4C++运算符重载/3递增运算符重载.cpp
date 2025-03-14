#include <iostream>
using namespace std;

#define MyInteger MyInteger3

typedef long long int LL_int;

class MyInteger
{
	friend ostream& operator <<(ostream& cout, MyInteger& m);
public:
	MyInteger(void);
	MyInteger& operator ++(void);
	MyInteger& operator ++(int);
private:
	int m_num;
};

/*=========递增运算符重载的函数入口========*/

void Study_OperatorOverloading_DiZeng(void)
{
	MyInteger myint;
	cout << myint << "\t" << (LL_int)&myint << endl;
	cout << ++(++myint) << "\t" << (LL_int)&myint << endl;
	cout << myint << "\t" << (LL_int)&myint << endl;
	cout << myint++ << "\t" << (LL_int)&myint << endl;
	cout << myint++ << "\t" << (LL_int)&myint << endl;
	cout << myint << "\t" << (LL_int)&myint << endl;
}

/*=========函数的实现=========*/

MyInteger::MyInteger(void)
{
	m_num = 0;
}

/*重载“<<”运算符*/
ostream& operator <<(ostream& cout, MyInteger& m)
{
	cout << "m_num = " << m.m_num;
	return cout;
}

/*重载前置“++”运算符*/
MyInteger& MyInteger::operator ++(void)
{
	m_num++;
	return *this;
}

/*重载后置“++”运算符*/
MyInteger& MyInteger::operator ++(int)//int 是一个占位参数，用于区分前置和后置递增
{
	MyInteger* temp=new MyInteger();
	*temp = *this;
	this->m_num++;
	return *temp;
}