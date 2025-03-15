/*
* 类模板实例化出的对象，向函数传参的方式
* 
* 一共有三种传入方式
* 1.指定传入的类型	——	直接显示对象的数据类型
* 2.参数模板化		——	将对象中的参数变为模板进行传递
* 3.整个类模板化	——	将这个对象类型 模板化进行传递
* 
* 总结：
* 1.通过类模板创建的对象，可以有三种方式向函数中进行传参
* 2.使用比较广泛是第一种：指定传入的类型
*/
#include "0函数声明库.h"

/*====================================类模板====================================*/
template<class T1, class T2>
class Person41
{
public:

	Person41(T1 name,T2 age)
	{
		this->_name = name;
		this->_age = age;
	}

	void ShowPerson(void)
	{
		cout << "name: " << this->_name << "\n" << "age: " << this->_age << endl;
	}

	T1 _name;
	T2 _age;
};

/*====================================函数模块====================================*/
//1、指定传入类型
void PrintPerson41(Person41<string,int> &p)
{
	p.ShowPerson();
	cout <<"p的类型为：" << typeid(p).name() << endl;
}
void PrintPerson41(Person41<string, double>& p)
{
	p.ShowPerson();
	cout << "p的类型为：" << typeid(p).name() << endl;
}

void test41(void)
{
	Person41<string, int> p("孙悟空", 1000);
	Person41<string, double> p1("孙悟空", 1000);
	PrintPerson41(p);
	PrintPerson41(p1);
}

//2、参数模板化
template<class Y1, class Y2>	//名字可以起T1,T2
void PrintPerson42(Person41<Y1,Y2> &p)
{
	p.ShowPerson();
	cout << "Y1的类型为：" << typeid(Y1).name() << endl;
	cout << "Y2的类型为：" << typeid(Y2).name() << endl;
	cout << "p的类型为：" << typeid(p).name() << endl;
}

void test42(void)
{
	Person41<string, int> p("孙悟空", 1000);
	PrintPerson42(p);
}

//3、整个类模板化
template<class T1>
void PrintPerson43(T1& p)
{
	p.ShowPerson();
	cout << "p的类型为：" << typeid(p).name() << endl;
}
void test43(void)
{
	Person41<string, int> p("孙悟空", 1000);
	PrintPerson43(p);
}

/*====================================类模板对象做函数参数入口函数====================================*/
void Study_LeiMuBanDuiXiangZuoHanShuCanShu(void)
{
	CoutLine('=', 50); cout << "1.指定传入类型"; CoutLine('=', 50); cout << endl;

	test41();

	CoutLine('=', 51); cout << "2.参数模板化"; CoutLine('=', 51); cout << endl;

	test42();

	CoutLine('=', 50); cout << "3.整个类模板化"; CoutLine('=', 50); cout << endl;

	test43();

	CoutLine('=', 57); cout << "END"; CoutLine('=', 57); cout << endl;
}
