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
	cout << "局部变量a的地址为：" << &a << "\t该地址转换为十进制为：" << (long long int) & a << endl;
	cout << "局部变量b的地址为：" << &b << "\t该地址转换为十进制为：" << (long long int) & b << endl;
	cout << endl;
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a的地址为：" << &c_l_a << "\t该地址转换为十进制为：" << (long long int) & c_l_a << endl;
	cout << "局部常量c_l_b的地址为：" << &c_l_b << "\t该地址转换为十进制为：" << (long long int) & c_l_b << endl;
	cout << endl;

	cout << "全局变量g_a的地址为：" << &g_a << "\t该地址转换为十进制为：" << (long long int) & g_a << endl;
	cout << "全局变量g_a的地址为：" << &g_b << "\t该地址转换为十进制为：" << (long long int) & g_b << endl;
	cout << endl;

	static int s_a = 20;
	static int s_b = 20;
	cout << "静态变量s_a的地址为：" << &s_a << "\t该地址转换为十进制为：" << (long long int) & s_a << endl;
	cout << "静态变量s_b的地址为：" << &s_b << "\t该地址转换为十进制为：" << (long long int) & s_b << endl;
	cout << endl;

	cout << "字符串常量的地址为：" << &"Hello World" << "\t该地址转换为十进制为：" << (long long int) & "Hello World" << endl;
	cout << "字符串常量的地址为：" << &"Hello World" << "\t该地址转换为十进制为：" << (long long int) & "Hello World" << endl;
	cout << endl;

	cout << "全局常量的地址为：" << &c_g_a << "\t该地址转换为十进制为：" << (long long int) & c_g_a << endl;
	cout << "全局常量的地址为：" << &c_g_b << "\t该地址转换为十进制为：" << (long long int) & c_g_a << endl;
	cout << endl;

	cout << "全局变量、静态变量、字符串常量、全局常量都存放在全局区" << endl;
	cout << "局部变量、局部常量都存放在局部区" << endl;

}