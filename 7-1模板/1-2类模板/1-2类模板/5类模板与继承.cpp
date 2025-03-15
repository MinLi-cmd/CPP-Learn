/*
* 当类模板碰到继承时，需要注意以下几点：
* 1.当子类继承的父类是一个类模板时，子类在声明的时候，要指出父类中T的类型
* 2.如果不指定，编译器无法给子类分配内存
* 3.如果想灵活指定出父类中T的类型，子类也需变为模板
*/

#include "0函数声明库.h"

template<class T>
class Base51
{
public:
	Base51()
	{
		this->m = 10;
	}
	Base51(T m)
	{
		this->m = m;
		cout << "父类中的m = " << this->m << endl;
		cout << "父类中m的类型为：" << typeid(m).name() << endl;
	}
	T m;

};

class Son51 :public Base51<int>
{
public:
	Son51(int m)
	{
		this->m = m;
		cout << "子类中的m = " << this->m << endl;
		cout << "子类中m的类型为：" << typeid(m).name() << endl;
	}
};

template <class T1,class T2>
class Son52 :public Base51<T2>
{
public:
	Son52()
	{
		this->m = 'b';
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}
	T2 obj;
};

void Study_LeiMuBanYuJiCheng(void)
{
	CoutLine('=', 80); cout << endl;

	Son51 s1(20);

	CoutLine('=', 80); cout << endl;

	Base51<char> b1(97);

	CoutLine('=', 80); cout << endl;

	Son52<int, char> s2;

	cout << s2.m << endl;
	CoutLine('=', 80); cout << endl;

}
