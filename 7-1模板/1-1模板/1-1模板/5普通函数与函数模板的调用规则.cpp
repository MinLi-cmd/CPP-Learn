/*
*普通函数与函数模板的调用规则
*
* 调用规则如下：
* 1.如果函数模板和普通函数都可以实现，优先调用普通函数
* 2.可以通过空模板参数列表	强制调用	函数模板
* 3.函数模板也可以发生重载
* 4.如果函数模板可以产生更好的匹配，优先调用函数模板
* 
* 总结：既然提供了函数模板，最好不要提供普通函数，否则容易出现二义性
*/

#include "0函数声明库.h"

void MyPrint51(int a, int b)
{
	cout << "调用的普通函数" << endl;
}

template<class T>
void MyPrint51(T a, T b)
{
	cout << "调用的模板函数" << endl;
}

template<class T>
void MyPrint51(T a, T b, T c)
{
	cout << "调用重载的模板" << endl;
}

void Study_MuBanDiaoYongGuiZe(void)
{
	int a = 10, b = 20;
	char c1 = 'a', c2 = 'b';

	cout << "MyPrint51(a, b);";
	MyPrint51(a, b);

	//通过空模板参数列表，强制调用函数模板
	cout << "MyPrint51<>(a, b);";
	MyPrint51<>(a, b);

	cout << "MtPrint51(a, b, c);";
	MyPrint51(a, b, 100);

	//如果函数模板产生更好的匹配，优先调用函数模板
	cout << "MyPrint51(c1, c2);";
	MyPrint51(c1, c2);
}
