/*
* Ĭ������� C++���������ٸ�һ�������3������
* 1.Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
* 2.Ĭ����������(�޲Σ�������Ϊ��)
* 3.Ĭ�Ͽ��������������Խ���ֵ����
* ���캯�����ù������£�
* 1.����û������вι��캯�� C++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
* 2.����û����忽�����캯�� C++�������ṩ�������캯��
*/

#include <iostream>
using namespace std;

#define Person Person4	

class Person
{
public:
	/*Person()
	{
		cout << "Person4���޲ι������" << endl;
	}*/
	Person(int a)
	{
		m_age = a;
		cout << "Person4���вι������" << endl;
	}
	/*Person(Person& p)
	{
		cout << "Person4�Ŀ����������" << endl;
	}*/


	~Person()
	{
		cout << "Person4��������������" << endl;
	}
	int m_age;
};

void Study_HanShu_DiaoYongGuiZe(void)
{
	Person p1(10);
	Person p2(p1);
	cout << p2.m_age << endl;
}