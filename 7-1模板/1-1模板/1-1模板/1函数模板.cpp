/*
* C++另一种编程思想称为泛型编程，主要利用的技术就是模板
* C++提供两种模板机制:函数模板和类模板
* 函数模板作用:建立一个通用函数，其余函数返回值类型和形参类型可以不具体指定，用一个“虚拟的类型”来代表
*/

#include "0函数声明库.h"

template<typename T>
void Swap10(T& a, T& b);

void Study_MuBan_Function(void)
{
	int a1(10),b1(20);

	cout << "int类型数据：" << endl;
	cout << "交换前：" << "a1 = " << a1 << "\t" << "b1 = " << b1 << endl;
	Swap10<int>(a1, b1);
	cout << "交换后：" << "a1 = " << a1 << "\t" << "b1 = " << b1 << endl;

	double a2(10.2),b2(20.3);
	cout << "double类型数据：" << endl;
	cout << "交换前：" << "a2 = " << a2 << "\t" << "b2 = " << b2 << endl;
	Swap10<double>(a2, b2);
	cout << "交换后：" << "a2 = " << a2 << "\t" << "b2 = " << b2 << endl;
}

template<typename T>
void Swap10(T& a, T& b)
{
	T temp=a;
	a = b;
	b = temp;
}