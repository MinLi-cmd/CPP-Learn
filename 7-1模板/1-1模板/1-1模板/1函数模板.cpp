/*
* C++��һ�ֱ��˼���Ϊ���ͱ�̣���Ҫ���õļ�������ģ��
* C++�ṩ����ģ�����:����ģ�����ģ��
* ����ģ������:����һ��ͨ�ú��������ຯ������ֵ���ͺ��β����Ϳ��Բ�����ָ������һ������������͡�������
*/

#include "0����������.h"

template<typename T>
void Swap10(T& a, T& b);

void Study_MuBan_Function(void)
{
	int a1(10),b1(20);

	cout << "int�������ݣ�" << endl;
	cout << "����ǰ��" << "a1 = " << a1 << "\t" << "b1 = " << b1 << endl;
	Swap10<int>(a1, b1);
	cout << "������" << "a1 = " << a1 << "\t" << "b1 = " << b1 << endl;

	double a2(10.2),b2(20.3);
	cout << "double�������ݣ�" << endl;
	cout << "����ǰ��" << "a2 = " << a2 << "\t" << "b2 = " << b2 << endl;
	Swap10<double>(a2, b2);
	cout << "������" << "a2 = " << a2 << "\t" << "b2 = " << b2 << endl;
}

template<typename T>
void Swap10(T& a, T& b)
{
	T temp=a;
	a = b;
	b = temp;
}