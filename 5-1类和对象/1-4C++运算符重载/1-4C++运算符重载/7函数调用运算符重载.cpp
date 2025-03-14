/*
* 函数调用运算符“()”也可以重载
* 由于重载后使用的方式非常像函数的调用，因此称为仿函数
* 仿函数没有固定写法，非常灵活
*/

#include <iostream>
using namespace std;

#define MyPrint MyPrint7
#define MyAdd MyAdd7

class MyPrint
{
public:
	void operator ()(string str);
};

class MyAdd
{
public:
	int operator ()(int num1, int num2);
};

void CallFunction_test_print(string str);

/*=========函数调用运算符重载的函数入口=========*/

void Study_OperatorOverloading_CallFunction(void)
{
	MyPrint myprint;
	myprint("Hello World!");/*由于使用起来非常类似于函数调用，因此称为仿函数*/
	CallFunction_test_print("Hello World!");//函数的调用

	MyAdd myadd;
	int sum = myadd(100, 200);
	cout << "sum = " << sum << endl;

	/*===匿名函数对象===*/
	cout << MyAdd()(300, 400) << endl;/* 类名(构造函数重载参数) */

}

/*=========函数的实现=========*/

void MyPrint::operator ()(string str)
{
	cout << str << endl;
}

int MyAdd::operator ()(int num1, int num2)
{
	return num1 + num2;
}

void CallFunction_test_print(string str)
{
	cout << str << endl;
}