/*
* ����ģ��ע������
* 1���Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
* 2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
*/

#include "0����������.h"

template<typename T>
void Swap20(T& a, T& b);

template<typename T>
void Func20();

void Study_MuBan_FunctionZhuYi(void)
{
	int a = 10, b = 20;
	char c = 'a';
	CoutLine('=', 30);
	cout << "����ǰ��" << "a = " << a << "\t" << "b = " << b << endl;
	Swap20(a, b);//��ȷ
	cout << "������" << "a = " << a << "\t" << "b = " << b << endl;
	//Swap20(a, c);//����	���Ͳ�һ��
	CoutLine('=', 30);

	//Func20();//����
	Func20<void>();
	CoutLine('=', 30);
}

template<typename T>
void Swap20(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void Func20(void)
{
	cout << "����Func20()�����ĵ���" << endl;
}

