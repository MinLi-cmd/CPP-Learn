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

/*=========������������صĺ������========*/

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

/*=========������ʵ��=========*/

MyInteger::MyInteger(void)
{
	m_num = 0;
}

/*���ء�<<�������*/
ostream& operator <<(ostream& cout, MyInteger& m)
{
	cout << "m_num = " << m.m_num;
	return cout;
}

/*����ǰ�á�++�������*/
MyInteger& MyInteger::operator ++(void)
{
	m_num++;
	return *this;
}

/*���غ��á�++�������*/
MyInteger& MyInteger::operator ++(int)//int ��һ��ռλ��������������ǰ�úͺ��õ���
{
	MyInteger* temp=new MyInteger();
	*temp = *this;
	this->m_num++;
	return *temp;
}