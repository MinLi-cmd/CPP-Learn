/*
* һ�㲻�����ó�Ա�������� ��<<�� �����
* ��Ϊ�޷�ʵ��cout�����
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

//ostream& operator <<(ostream& cout, Person& p);//ostream �������

void Study_OperatorOverloading_LeftShift(void)
{
	Person p1;
	cout << p1 << endl;//��ʽ���˼��
}

Person::Person()
{
	num1 = 10;
	num2 = 20;
}

ostream& operator <<(ostream& cout, Person& p)//���� operator <<(cout,p) �� cout << p;
{
	cout << "num1 = " << p.num1 << endl;
	cout << "num2 = " << p.num2;
	return cout;
}