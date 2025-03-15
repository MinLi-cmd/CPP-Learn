/*
* 函数模板注意事项
* 1、自动类型推导，必须推导出一致的类型数据T才可以使用
* 2、模板必须要确定出T的数据类型，才可以使用
*/

#include "0函数声明库.h"

template<typename T>
void Swap20(T& a, T& b);

template<typename T>
void Func20();

void Study_MuBan_FunctionZhuYi(void)
{
	int a = 10, b = 20;
	char c = 'a';
	CoutLine('=', 30);
	cout << "交换前：" << "a = " << a << "\t" << "b = " << b << endl;
	Swap20(a, b);//正确
	cout << "交换后：" << "a = " << a << "\t" << "b = " << b << endl;
	//Swap20(a, c);//错误	类型不一致
	CoutLine('=', 30);

	//Func20();//错误
	Func20<void>();
	CoutLine('=', 30);
}

template<typename T>
void Swap20(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void Func20(void)
{
	cout << "这是Func20()函数的调用" << endl;
}

