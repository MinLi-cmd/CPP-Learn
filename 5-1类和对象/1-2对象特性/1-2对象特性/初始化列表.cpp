#include <iostream>
using namespace std;

#define Person Person6

typedef long long int LL_int;
class Person
{
public:
	/*��ͳ��ʼ������*/
	/*Person(int A, int B, int C)
	{
		m_A = A;
		m_B = B;
		m_C = C;
	}*/

	/*��ʼ���б��ʼ������*/
	Person() :m_A(30), m_B(20), m_C(10)
	{
		cout << "Person6 ��Ĭ�Ϲ��캯������" << endl;
	}

	Person(int A, int B,int C):m_A(A),m_B(B),m_C(C)
	{
		cout << "Person6 ���вι��캯������" << endl;
	}

	~Person()
	{
		cout << "Person6 ��������������" << endl;
	}

	int m_A, m_B,m_C;
};

void Study_HanShu_InitLieBiao(void)
{
	Person p1(10,20,30);
	//Person p1;
	cout << p1.m_A << endl;
	cout << p1.m_B << endl;
	cout << p1.m_C << endl;
}