#include <iostream>
using namespace std;

#define Person Person6

typedef long long int LL_int;
class Person
{
public:
	/*传统初始化属性*/
	/*Person(int A, int B, int C)
	{
		m_A = A;
		m_B = B;
		m_C = C;
	}*/

	/*初始化列表初始化属性*/
	Person() :m_A(30), m_B(20), m_C(10)
	{
		cout << "Person6 的默认构造函数调用" << endl;
	}

	Person(int A, int B,int C):m_A(A),m_B(B),m_C(C)
	{
		cout << "Person6 的有参构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person6 的析构函数调用" << endl;
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