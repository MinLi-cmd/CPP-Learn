/*
* 常量指针：指针可以改变指向，但不可以改变指向地址数据的数值
* 指针常量：指针不可以改变指向，但可以改变指向地址数据的数值
*/

#include <iostream>
using namespace std;

void Study_ZhiZhen_ConstZZ(void)
{
	int a = 20, b = 30;
	const int* p = &a;
	cout << "常量指针*p指向变量a = 20" << endl;
	cout << "*p = " << *p << endl;
	cout << "*p = 40;报错，*p为不可修改的值" << endl;
	a = 40;
	cout << "对变量a进行赋值a = 40" << endl;
	cout << "*p = " << *p << endl;
	p = &b;
	cout << "让常量指针*p指向变量b = 30" << endl;
	cout << "*p = " << *p << endl;
	cout << "这说明常量指针指向变量：是可以改变指向 但不可以修改变量数值，但是直接操作变量是可以的" << endl;
}

void Study_ZhiZhen_ZZConst(void)
{
	int a = 20, b = 30;
	int* const p = &a;
	cout << "指针常量指向变量a = 20" << endl;
	cout << "*p = " << *p << "\t" << "a = " << a << endl;
	cout << "p = &b;报错，p为不可修改的值" << endl;
	*p = 40;
	cout << "对*p进行赋值操作" << endl;
	cout << "*p = " << *p << "\t" << "a = " << a << endl;
	cout << "这说明指针常量：不可以改变指向 但可以修改变量数值" << endl;
}