/*
* ����ָ�룺ָ����Ըı�ָ�򣬵������Ըı�ָ���ַ���ݵ���ֵ
* ָ�볣����ָ�벻���Ըı�ָ�򣬵����Ըı�ָ���ַ���ݵ���ֵ
*/

#include <iostream>
using namespace std;

void Study_ZhiZhen_ConstZZ(void)
{
	int a = 20, b = 30;
	const int* p = &a;
	cout << "����ָ��*pָ�����a = 20" << endl;
	cout << "*p = " << *p << endl;
	cout << "*p = 40;����*pΪ�����޸ĵ�ֵ" << endl;
	a = 40;
	cout << "�Ա���a���и�ֵa = 40" << endl;
	cout << "*p = " << *p << endl;
	p = &b;
	cout << "�ó���ָ��*pָ�����b = 30" << endl;
	cout << "*p = " << *p << endl;
	cout << "��˵������ָ��ָ��������ǿ��Ըı�ָ�� ���������޸ı�����ֵ������ֱ�Ӳ��������ǿ��Ե�" << endl;
}

void Study_ZhiZhen_ZZConst(void)
{
	int a = 20, b = 30;
	int* const p = &a;
	cout << "ָ�볣��ָ�����a = 20" << endl;
	cout << "*p = " << *p << "\t" << "a = " << a << endl;
	cout << "p = &b;����pΪ�����޸ĵ�ֵ" << endl;
	*p = 40;
	cout << "��*p���и�ֵ����" << endl;
	cout << "*p = " << *p << "\t" << "a = " << a << endl;
	cout << "��˵��ָ�볣���������Ըı�ָ�� �������޸ı�����ֵ" << endl;
}