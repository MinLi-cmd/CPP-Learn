/*
* ���õı��ʾ���ָ�볣��
*/

#include <iostream>
using namespace std;

void test01_swap(int& a, int& b);
int& test02_return(void);
void test03_print(const int& v);


void Study_YinYong_YuFa(void)//�﷨ѧϰ
{
	int a = 10;
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 20;
	cout << "���� b = 20; ����" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void Study_YinYong_ZhuYi(void)//ע������
{
	int a = 10;
	int b = 20;
	int& c = a;
	c = b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

void Study_YinYong_HanShu(void)
{
	int a, b;
	a = 10;
	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	test01_swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void test01_swap(int& c, int& d)
{
	int temp;
	temp = c;
	c = d;
	d = temp;
}

void Study_YinYong_Return(void)
{
	int& b = test02_return();

	cout << "b = " << b << endl;
	cout << "b = " << b << endl;

	cout << "���� test02_return() = 1000; ����" << endl;
	test02_return() = 1000;
	cout << "b = " << b << endl;
	cout << "b = " << b << endl;
}

int& test02_return(void)
{
	static int a = 10;
	return a;
}

void Study_YinYong_Const(void)
{
	int a = 10;
	test03_print(a);
	cout << "a = " << a << endl;
	//int& ref = a;
	//const int& b = 10;//int& b = 10;������仰�൱��int temp = 10; const int& b = temp;
	
}

void test03_print(const int& v)
{
	cout << "a = " << v << endl;
	//a=20;
}