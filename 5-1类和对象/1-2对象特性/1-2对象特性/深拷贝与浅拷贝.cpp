/*
* 如果利用编译器提供的拷贝构造函数，会做浅拷贝构造
* 浅拷贝带来的问题就是堆区的内存重复释放
* 浅拷贝的问题要用深拷贝进行解决
* 总结:如果属性有在堆区开辟的，一定要自己提供拷贝函数，方式浅拷贝带来的问题
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
		cout << "Person5的有参构造调用" << endl;
	}
	Person(Person& p)
	{
		m_age = p.m_age;
		//m_high = p.m_high;/*编译器默认实现的就是这行代码*/
		m_high = new int(*p.m_high);/*深拷贝*/
		cout << "Person5的拷贝构造调用" << endl;
	}
	~Person()
	{
		if (m_high != NULL)
		{
			delete m_high;
			m_high = NULL;
		}
		cout << "Person5的析构函数调用" << endl;
	}
	int m_age;
	int* m_high;
};

void Study_GouZao_ShenAndQian(void)
{
	Person p1(18,175);
	cout << "p1.m_high的十进制地址为：" << (LL_int)p1.m_high << endl;
	cout << "p1的年龄为：" << p1.m_age << "\tp1的身高为：" << *p1.m_high << endl;
	Person p2(p1);
	cout << "p2.m_high的十进制地址为：" << (LL_int)p2.m_high << endl;
	cout << "p2的年龄为：" << p2.m_age << "\tp2的身高为：" << *p2.m_high << endl;
}