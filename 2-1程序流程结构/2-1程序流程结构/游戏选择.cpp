#include <iostream>
using namespace std;
#include "������.h"
#include "ˮ�ɻ���.h"
#include "������.h"
#include "�˷��ھ���.h"

int main(void)
{
	unsigned short Chose = 0, UserFlagEnd = 0,UserFlagGameOver;
	while(UserFlagEnd != 1)
	{
		system("cls");
		cout << "�˳�ѡ��0��\n��������Ϸ��1��\n����λˮ�ɻ�����2��\n�����ӣ�3��\n�žų˷���4��" << endl;
		cout << "����������ѡ����Ҫִ�еĳ���";
		cin >> Chose;
		switch (Chose)
			{
			case 0:
				system("cls");
				cout << "�������˳�" << endl;
				UserFlagEnd = 1;
				break;
			case 1:
				system("cls");
				Game_GuseeNumber();
				cout << "����һ���������ַ���������";
				cin >> UserFlagGameOver;
				break;
			case 2:
				system("cls");
				ShuiXianHuaNumber();
				cout << "����һ���������ַ���������";
				cin >> UserFlagGameOver;
				break;
			case 3:
				system("cls");
				HitDesk();
				cout << "����һ���������ַ���������";
				cin >> UserFlagGameOver;
				break;
			case 4:
				system("cls");
				ChengFaBiao();
				cout << "����һ���������ַ���������";
				cin >> UserFlagGameOver;
				break;
			default:
				system("cls");
				cout << "�������������Ч" << endl;
				cout << "����һ���������ַ���������";
				cin >> UserFlagGameOver;
				break;
			}
	}
	
	
	system("pause");
	return 0;
}