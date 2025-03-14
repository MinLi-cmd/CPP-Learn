#include <iostream>
using namespace std;
#include "指针的定义和使用.h"
#include "空指针和野指针.h"
#include "const修饰指针.h"
#include "指针与数组.h"
#include "指针与函数.h"
#include "指针冒泡排序.h"

int main(void)
{
	unsigned short Chose;
	cout << "指针定义和使用（0）\n空指针（1）\n野指针（2）\n常量指针（3）\n指针常量（4）\n指针与数组（5）\n指针与函数（6）\n指针冒泡排序（7）" << endl;
	cout << "请选择程序：";
	cin >> Chose;
	switch (Chose)
	{
	case 0:
		system("cls");
		Study_ZhiZhen_Learn();
		break;
	case 1:
		system("cls");
		Study_ZhiZhen_Kong();
		break;
	case 2:
		system("cls");
		Study_ZhiZhen_Ye();
		break;
	case 3:
		system("cls");
		Study_ZhiZhen_ConstZZ();
		break;
	case 4:
		system("cls");
		Study_ZhiZhen_ZZConst();
		break;
	case 5:
		system("cls");
		Study_ZhiZhen_Array();
		break;
	case 6:
		system("cls");
		Study_ZhiZhen_HanShu();
		break;
	case 7:
		system("cls");
		Study_ZhiZhen_MaoPao_main();
		break;
	default:
		system("cls");
		cout << "你输入的数字无效" << endl;
		break;
	}
	
	system("pause");
	return 0;
}