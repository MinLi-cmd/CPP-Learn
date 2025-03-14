#include <iostream>
#include <string.h>
#include "功能.h"
using namespace std;

void ShowMenu(void);

int main(void)
{
	unsigned short Chose;
	PhoneBook PBK;
	test_shengcheng(&PBK);
	while (1)
	{
		ShowMenu();
		cin >> Chose;
		switch (Chose)
		{
		case 0://退出
			break;
		case 1://添加
			Contact_Add(&PBK);
			system("cls");
			break;
		case 2://显示
			Contact_Show(&PBK);
			system("pause");
			system("cls");
			break;
		case 3://删除
			Contact_Delete(&PBK);
			system("pause");
			break;
		case 4://查找
			Contact_Find(&PBK);
			system("pause");
			break;
		case 5://修改
			Contact_Amend(&PBK);
			system("pause");
			break;
		case 6://清空
			Contact_Empty(&PBK);
			system("pause");
			break;
		default:
			system("cls");
			cout << "你输入的数字无效" << endl;
			break;
		}
		if (Chose == 0)
		{
			system("cls");
			break;
		}
	}
	cout << "已退出系统" << endl;
	return 0;
}

void ShowMenu(void)
{
	system("cls");
	char Array[][14] = { {"1、添加联系人"},{"2、显示联系人"} ,{"3、删除联系人"} ,{"4、查找联系人"}, {"5、修改联系人"}, {"6、清空联系人"},{"0、退出通讯录"} };
	
	for (int i = 0; i < sizeof(Array[0]) + 19; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 0; i < sizeof(Array) / sizeof(Array[0]); i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << "*";
		}
		cout << "  " << Array[i] << "  ";
		for (int j = 0; j < 8; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < sizeof(Array[0]) + 19; i++)
	{
		cout << "*";
	}
	cout << endl;
}