#include <iostream>
using namespace std;

void Study_ZhiZhen_Swap(int* p1, int* p2);

void Study_ZhiZhen_HanShu(void)
{
	int a = 10, b = 20;
	cout << "a = " << a << "\t" << "b = " << b << endl;
	Study_ZhiZhen_Swap(&a, &b);
	cout << "地址传递，交换值后：" << endl;
	cout << "a = " << a << "\t" << "b = " << b << endl;
}

void Study_ZhiZhen_Swap(int* p1,int* p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}