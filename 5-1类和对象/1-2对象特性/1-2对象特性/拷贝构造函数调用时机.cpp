/*
* C++中拷贝构造函数调用时机通常有三种情况
* 1.使用一个已经创建完毕的对象来初始化一个新对象
* 2.值传递的方式给函数参数传值
* 3.以值方式返回局部对象
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
		cout << "Person的默认构造调用" << endl;
	}
	Person(int age)
	{
		m_age = age;
		mall = age + 10;
		cout << "Person的有参构造调用" << endl;
		cout << m_age << endl;
	}
	/*
	* 拷贝构造，用户自己不写，编译器自动帮忙把所有变量都复制
	*/
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "Person的拷贝构造调用" << endl;
		cout << m_age+1 << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
//private:
	int m_age,mall;
};

void Study_HanShu_DiaoYongShiJi(void)
{
	cout << "/*第一种调用时机*/" << endl;
	test01();
	cout << endl;

	cout << "/*第二种调用时机*/" << endl;
	test02();
	cout << endl;

	cout << "/*第三种调用时机*/" << endl;
	test03();
}


/*第一种调用时机*/
void test01(void)
{
	Person x1(18);
	Person x2(x1);
}

/*第二种调用时机*/
void Dowork21(Person p)
{
	//Dowark(p1);把p1拷贝到了p上面传了进来
	cout << p.m_age << endl;
	cout << p.mall << endl;
}

void test02(void)
{
	Person p1(10);//有参构造调用
	Dowork21(p1);//拷贝构造调用

}

/*第三种调用时机*/
Person* Dowork31(void)
{
	Person* p2 = new Person();
	cout << "p2的地址：" << (LL_int)p2 << endl;
	p2->m_age = 20;
	p2->mall = 30;
	cout << p2->m_age << endl;
	return p2;
}

void test03(void)
{
	Person* p3 = Dowork31();//相当于Person p3 = Person(p2)
	cout << "返回p2的地址：" << (LL_int)p3 << endl;//一样是因为有&
	cout << p3->m_age << endl;
	cout << p3->mall << endl;
	delete p3;
}
