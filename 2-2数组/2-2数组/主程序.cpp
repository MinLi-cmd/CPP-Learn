#include <iostream>
using namespace std;
#include "认识数组.h"
#include "五只小猪称体重.h"
#include "数组元素逆置.h"
#include "冒泡排序.h"
#include "二维数组案例.h"
#include "认识二维数组.h"

int main()
{
	unsigned short Chose;
	cout << "认识数组（1）\n五只小猪称体重（2）\n数组元素逆置（3）\n冒泡排序（4）\n认识二维数组（5）\n二维数组案例（6）\n请选择要执行的程序：";
	cin >> Chose;
	switch (Chose)
	{
	case 1:
		system("cls");
		Study_Array();
		break;
	case 2:
		system("cls");
		Study_FindPig();
		break;
	case 3:
		system("cls");
		Study_TurnArray();
		break;
	case 4:
		system("cls");
		Study_MaoPao();
		break;
	case 5:
		system("cls");
		Study_ErWeiArray();
		break;
	case 6:
		system("cls");
		Study_ErWeiArray_OutScores();
		break;
	default:
		system("cls");
		cout << "你输入的数字无效" << endl;
		break;
	}
	system("pause");
	return 0;
}