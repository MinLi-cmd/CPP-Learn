/*
*��ͨ�����뺯��ģ��ĵ��ù���
*
* ���ù������£�
* 1.�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
* 2.����ͨ����ģ������б�	ǿ�Ƶ���	����ģ��
* 3.����ģ��Ҳ���Է�������
* 4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
* 
* �ܽ᣺��Ȼ�ṩ�˺���ģ�壬��ò�Ҫ�ṩ��ͨ�������������׳��ֶ�����
*/

#include "0����������.h"

void MyPrint51(int a, int b)
{
	cout << "���õ���ͨ����" << endl;
}

template<class T>
void MyPrint51(T a, T b)
{
	cout << "���õ�ģ�庯��" << endl;
}

template<class T>
void MyPrint51(T a, T b, T c)
{
	cout << "�������ص�ģ��" << endl;
}

void Study_MuBanDiaoYongGuiZe(void)
{
	int a = 10, b = 20;
	char c1 = 'a', c2 = 'b';

	cout << "MyPrint51(a, b);";
	MyPrint51(a, b);

	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	cout << "MyPrint51<>(a, b);";
	MyPrint51<>(a, b);

	cout << "MtPrint51(a, b, c);";
	MyPrint51(a, b, 100);

	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
	cout << "MyPrint51(c1, c2);";
	MyPrint51(c1, c2);
}
