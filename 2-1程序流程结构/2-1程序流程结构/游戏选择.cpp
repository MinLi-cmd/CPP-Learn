#include <iostream>
using namespace std;
#include "猜数字.h"
#include "水仙花数.h"
#include "敲桌子.h"
#include "乘法口诀表.h"

int main(void)
{
	unsigned short Chose = 0, UserFlagEnd = 0,UserFlagGameOver;
	while(UserFlagEnd != 1)
	{
		system("cls");
		cout << "退出选择（0）\n猜数字游戏（1）\n求三位水仙花数（2）\n敲桌子（3）\n九九乘法表（4）" << endl;
		cout << "请输入数字选择你要执行的程序：";
		cin >> Chose;
		switch (Chose)
			{
			case 0:
				system("cls");
				cout << "程序已退出" << endl;
				UserFlagEnd = 1;
				break;
			case 1:
				system("cls");
				Game_GuseeNumber();
				cout << "输入一个任意数字返回主程序：";
				cin >> UserFlagGameOver;
				break;
			case 2:
				system("cls");
				ShuiXianHuaNumber();
				cout << "输入一个任意数字返回主程序：";
				cin >> UserFlagGameOver;
				break;
			case 3:
				system("cls");
				HitDesk();
				cout << "输入一个任意数字返回主程序：";
				cin >> UserFlagGameOver;
				break;
			case 4:
				system("cls");
				ChengFaBiao();
				cout << "输入一个任意数字返回主程序：";
				cin >> UserFlagGameOver;
				break;
			default:
				system("cls");
				cout << "你输入的数字无效" << endl;
				cout << "输入一个任意数字返回主程序：";
				cin >> UserFlagGameOver;
				break;
			}
	}
	
	
	system("pause");
	return 0;
}