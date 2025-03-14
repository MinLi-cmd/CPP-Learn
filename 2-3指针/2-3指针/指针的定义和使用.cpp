#include <iostream>
using namespace std;

void Study_ZhiZhen_Learn(void)
{
	int* p;
	unsigned short* p1;
	int a = 10;
	unsigned short a1=100;
	p = &a;
	p1 = &a1;
	cout << "a = " << a << "\t" << "变量a的地址为：\t\t" << &a << endl;
	cout << "*p = " << *p << "\t" << "指针变量p的地址为：\t" << p << endl;
	cout << "指针p占用的空间为：" << sizeof(p) << endl;
	cout << "指针类型（int*）占用的空间为：" << sizeof(int*) << endl;
	cout << "指针p1占用的空间为：" << sizeof(p1) << endl;
	cout << "指针类型（unsigned short*）占用的空间为：" << sizeof(unsigned short*) << endl;
	cout << "64位操作系统的指针都占用8个字节空间存地址：8*8=64" << endl;
}