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
	cout << "a = " << a << "\t" << "����a�ĵ�ַΪ��\t\t" << &a << endl;
	cout << "*p = " << *p << "\t" << "ָ�����p�ĵ�ַΪ��\t" << p << endl;
	cout << "ָ��pռ�õĿռ�Ϊ��" << sizeof(p) << endl;
	cout << "ָ�����ͣ�int*��ռ�õĿռ�Ϊ��" << sizeof(int*) << endl;
	cout << "ָ��p1ռ�õĿռ�Ϊ��" << sizeof(p1) << endl;
	cout << "ָ�����ͣ�unsigned short*��ռ�õĿռ�Ϊ��" << sizeof(unsigned short*) << endl;
	cout << "64λ����ϵͳ��ָ�붼ռ��8���ֽڿռ���ַ��8*8=64" << endl;
}