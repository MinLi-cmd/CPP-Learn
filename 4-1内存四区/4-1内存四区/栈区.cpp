/*
*ջ������ע�������Ҫ���ؾֲ������ĵ�ַ
* ջ���������ɱ����������ٺ��ͷ�
*/

#include <iostream>
using namespace std;

int* func(void)
{
	int a = 10;//�ֲ����������ջ����ջ���������ں���ִ����֮���Զ��ͷ�
	return &a;//���ؾֲ������ĵ�ַ
}

void Study_ZhanQu(void)
{
	int* p;
	p = func();
	cout << *p << endl;//10
	cout << *p << endl;//���룬x86������ֻ����һ�����ݣ�x64������һֱ����
}