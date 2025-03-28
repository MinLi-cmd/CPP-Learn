#include <iostream>
using namespace std;

#define Person Person2

class Person
{
public:
	/*
	* 1.构造函数
	* 没有返回值 不用写void
	* 函数名 与类名相同
	* 构造函数可以有参数，可以发生重载
	* 创建对象的时候，构造函数会自动调用，而且只调用一次
	*/
	Person()
	{
		cout << "Person 构造函数的调用" << endl;
	}

	/*
	* 2.析构函数
	* 没有返回值 不用写void
	* 函数名和类名相同 在名称前加 ~
	* 析构函数不可以有参数，不可以发生重载
	* 对象在销毁前 会自动调用析构函数，而且只会发生一次
	*/
	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}
};

void Study_HanShu_GouZaoAndXiGou(void)
{
	Person p1;//函数结束后才会调用析构函数，栈上的数据
}


