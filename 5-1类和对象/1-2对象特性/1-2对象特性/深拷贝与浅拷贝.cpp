/*
* ������ñ������ṩ�Ŀ������캯��������ǳ��������
* ǳ����������������Ƕ������ڴ��ظ��ͷ�
* ǳ����������Ҫ��������н��
* �ܽ�:����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ������������ʽǳ��������������
*/

#include <iostream>
using namespace std;

#define Person Person5
typedef long long int LL_int;

class Person
{
public:
	Person(int age,int high)
	{
		m_age = age;
		m_high = new int(high);
		cout << "Person5���вι������" << endl;
	}
	Person(Person& p)
	{
		m_age = p.m_age;
		//m_high = p.m_high;/*������Ĭ��ʵ�ֵľ������д���*/
		m_high = new int(*p.m_high);/*���*/
		cout << "Person5�Ŀ����������" << endl;
	}
	~Person()
	{
		if (m_high != NULL)
		{
			delete m_high;
			m_high = NULL;
		}
		cout << "Person5��������������" << endl;
	}
	int m_age;
	int* m_high;
};

void Study_GouZao_ShenAndQian(void)
{
	Person p1(18,175);
	cout << "p1.m_high��ʮ���Ƶ�ַΪ��" << (LL_int)p1.m_high << endl;
	cout << "p1������Ϊ��" << p1.m_age << "\tp1�����Ϊ��" << *p1.m_high << endl;
	Person p2(p1);
	cout << "p2.m_high��ʮ���Ƶ�ַΪ��" << (LL_int)p2.m_high << endl;
	cout << "p2������Ϊ��" << p2.m_age << "\tp2�����Ϊ��" << *p2.m_high << endl;
}