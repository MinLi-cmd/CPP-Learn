#include <iostream>
using namespace std;

#define Person Person5

typedef long long int LL_int;

class Person
{
public:
	Person(int age);
	//Person(Person& p);//�������
	Person& operator =(Person& p);
	~Person();
	int* m_age;
};

void FuZhi_test01(void);
void FuZhi_test02(void);

/*=========��ֵ��������صĺ������=========*/

void Study_OperatorOverloading_FuZhi(void)
{
	FuZhi_test01();
	//FuZhi_test02();
}

void FuZhi_test01(void)
{
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p2 = p1 = p3;
	cout << "p1������Ϊ��" << *p1.m_age << endl;
	cout << "p2������Ϊ��" << *p2.m_age << endl;
	cout << "p3������Ϊ��" << *p3.m_age << endl;
}

void FuZhi_test02(void)
{
	int a = 10;
	int b = 20;
	int c = 30;
	a = b = c;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

/*=========������ʵ��=========*/

Person::Person(int age)
{
	this->m_age = new int(age);
}

Person& Person::operator =(Person& p)
{
	//cout << (LL_int)this->m_age << endl;
	/*���жϳ�Ա�����ڶ����Ƿ��п��ٵ����� �о����ͷŸɾ��ٿ��ٶ����ڴ�*/
	if (this->m_age != NULL)
	{
		delete this->m_age;
		this->m_age = NULL;
	}
	//cout << (LL_int)this->m_age << endl;
	this->m_age = new int(*p.m_age);
	return *this;
}

Person::~Person()
{
	if (this->m_age != NULL)
	{
		delete this->m_age;
		this->m_age = NULL;
	}
}

//Person::Person(Person& p)//�������
//{
//	this->m_age = new int();
//	*this->m_age = *p.m_age;
//}