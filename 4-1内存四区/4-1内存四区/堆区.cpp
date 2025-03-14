#include <iostream>
using namespace std;

int* Test01(void);
int* Test02(void);

void Study_DuiQu(void)
{
	int* a;
	a=Test01();
	cout << *a << endl;
	cout << *a << endl;
	cout << *a << endl;
	cout << *a << endl;
	cout << *a << endl;
	cout << *a << endl;
	delete a;
	//cout << *p << endl;//报警告：使用了未初始化的内存"p"
	a = Test02();
	for (int i = 0; i < 10; i++)
	{
		a[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	/*for (int i = 0; i < 10; i++)
	{
		static int* temp;
		if (i == 0)
		{
			temp = a;
		}
		*a = 100 + i;
		cout << *a << endl;
		a += i;
		a = temp;
	}*/
	delete[] a;
}

int* Test01(void)
{
	int* p;
	p=new int(10);
	return p;
}

int* Test02(void)
{
	int* p;
	p=new int[10];
	return p;
}