#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 10;
const int c_g_a = 20;
const int c_g_b = 20;

void Study_QuanJuQu(void)
{
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַΪ��" << &a << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << &b << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & b << endl;
	cout << endl;
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "�ֲ�����c_l_a�ĵ�ַΪ��" << &c_l_a << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & c_l_a << endl;
	cout << "�ֲ�����c_l_b�ĵ�ַΪ��" << &c_l_b << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & c_l_b << endl;
	cout << endl;

	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << &g_a << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & g_a << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << &g_b << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & g_b << endl;
	cout << endl;

	static int s_a = 20;
	static int s_b = 20;
	cout << "��̬����s_a�ĵ�ַΪ��" << &s_a << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << &s_b << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & s_b << endl;
	cout << endl;

	cout << "�ַ��������ĵ�ַΪ��" << &"Hello World" << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & "Hello World" << endl;
	cout << "�ַ��������ĵ�ַΪ��" << &"Hello World" << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & "Hello World" << endl;
	cout << endl;

	cout << "ȫ�ֳ����ĵ�ַΪ��" << &c_g_a << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & c_g_a << endl;
	cout << "ȫ�ֳ����ĵ�ַΪ��" << &c_g_b << "\t�õ�ַת��Ϊʮ����Ϊ��" << (long long int) & c_g_a << endl;
	cout << endl;

	cout << "ȫ�ֱ�������̬�������ַ���������ȫ�ֳ����������ȫ����" << endl;
	cout << "�ֲ��������ֲ�����������ھֲ���" << endl;

}