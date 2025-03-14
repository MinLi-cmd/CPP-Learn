#include "函数声明库.h"
/*
* 在多态中，通常父类中虚函数的实现是无意义的，主要都是调用子类重写的内容
* 因此可以将虚函数改为纯虚函数
* 纯虚函数语法：virtual 返回值类型 函数名 (参数列表) = 0;
* 当类中有了纯虚函数，这个类也成为抽象类
* 
* 抽象类特点：
* 1.无法实例化对象
* 2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
*/


/*=========类声明=========*/

class Base31
{
public:
	virtual void func(void) = 0;
};

class Son31 :public Base31
{
public:
	void func(void)
	{
		cout << "Son31 的func函数调用" << endl;
	}
};

/*=========纯虚函数和抽象类的函数入口=========*/

void Study_PureVirtualFunctionAndAbstractClass(void)
{
	//Base31 b1;	//报错 不允许使用抽象类类型"Base31"的对象 函数"Base31::func(void)"是纯虚拟函数
	//new Base31;	//报错 不允许使用抽象类类型"Base31"的对象 函数"Base31::func(void)"是纯虚拟函数
	Base31* b1 = new Son31;
	b1->func();

	cout << (LL_int)b1 << endl;
	delete b1;
	cout << (LL_int)b1 << endl;
}

/*=========函数实现=========*/

