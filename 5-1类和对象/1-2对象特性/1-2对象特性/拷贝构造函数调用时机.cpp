/*
* C++�п������캯������ʱ��ͨ�����������
* 1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
* 2.ֵ���ݵķ�ʽ������������ֵ
* 3.��ֵ��ʽ���ؾֲ�����
*/

#include <iostream>
using namespace std;

#define Person Person3

typedef long long int LL_int;
typedef unsigned long long int ULL_int;

void test01(void);
void test02(void);
void test03(void);

class Person
{
public:
	Person()
	{
		m_age = 0;
		cout << "Person��Ĭ�Ϲ������" << endl;
	}
	Person(int age)
	{
		m_age = age;
		mall = age + 10;
		cout << "Person���вι������" << endl;
		cout << m_age << endl;
	}
	/*
	* �������죬�û��Լ���д���������Զ���æ�����б���������
	*/
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "Person�Ŀ����������" << endl;
		cout << m_age+1 << endl;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}
//private:
	int m_age,mall;
};

void Study_HanShu_DiaoYongShiJi(void)
{
	cout << "/*��һ�ֵ���ʱ��*/" << endl;
	test01();
	cout << endl;

	cout << "/*�ڶ��ֵ���ʱ��*/" << endl;
	test02();
	cout << endl;

	cout << "/*�����ֵ���ʱ��*/" << endl;
	test03();
}


/*��һ�ֵ���ʱ��*/
void test01(void)
{
	Person x1(18);
	Person x2(x1);
}

/*�ڶ��ֵ���ʱ��*/
void Dowork21(Person p)
{
	//Dowark(p1);��p1��������p���洫�˽���
	cout << p.m_age << endl;
	cout << p.mall << endl;
}

void test02(void)
{
	Person p1(10);//�вι������
	Dowork21(p1);//�����������

}

/*�����ֵ���ʱ��*/
Person* Dowork31(void)
{
	Person* p2 = new Person();
	cout << "p2�ĵ�ַ��" << (LL_int)p2 << endl;
	p2->m_age = 20;
	p2->mall = 30;
	cout << p2->m_age << endl;
	return p2;
}

void test03(void)
{
	Person* p3 = Dowork31();//�൱��Person p3 = Person(p2)
	cout << "����p2�ĵ�ַ��" << (LL_int)p3 << endl;//һ������Ϊ��&
	cout << p3->m_age << endl;
	cout << p3->mall << endl;
	delete p3;
}
