#include <iostream>
using namespace std;

void Study_ZhiZhen_Kong(void)
{
	int* p = NULL;
	//cout << "*p = " << *p << endl;//空指针不可访问
	cout << "空指针不可访问，0~255是系统中断，不可访问和更改，改了就会系统崩溃！" << endl;
	cout << "p = " << p << endl;
}

void Study_ZhiZhen_Ye(void)
{
	cout << "int* p=(int*)0x1100;这句话定义的指针就是野指针，很危险，不可取！" << endl;
}