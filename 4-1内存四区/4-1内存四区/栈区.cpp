/*
*栈区数据注意事项：不要返回局部变量的地址
* 栈区的数据由编译器管理开辟和释放
*/

#include <iostream>
using namespace std;

int* func(void)
{
	int a = 10;//局部变量存放在栈区，栈区的数据在函数执行完之后自动释放
	return &a;//返回局部变量的地址
}

void Study_ZhanQu(void)
{
	int* p;
	p = func();
	cout << *p << endl;//10
	cout << *p << endl;//乱码，x86环境下只保留一次数据，x64环境下一直保留
}