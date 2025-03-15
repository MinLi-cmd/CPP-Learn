/*
* 1、普通函数调用可以发生隐式类型转换
* 2、函数模板 用自动类型推导，不可以发生隐式类型转换
* 3、函数模板 用显示指定类型，可以发生隐式类型转换
* 
* 总结：建议使用显示指定类型的方式，调用函数模板，因为可以自己确定通用类型T
*/

#include "0函数声明库.h"

int MyAdd41(int a, int b);

template<typename T>
T MyAdd42(T a, T b);

void Study_MuBanYuPuTongHanShuQuBie(void)
{
	int a = 10, b = 20;
	char c = 'c';
	cout << MyAdd41(a, c) << endl;

	//自动类型推导	不可以发生隐式类型转换
	//cout << MyAdd42(a, c) << endl;

	//显示指定类型	可以发生隐式类型转换
	cout << MyAdd42<int>(a, c) << endl;
}	

int MyAdd41(int a, int b)
{
	return a + b;
}

template<typename T>
T MyAdd42(T a, T b)
{
	return a + b;
}

