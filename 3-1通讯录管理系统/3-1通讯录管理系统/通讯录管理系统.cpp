#include <iostream>
#include <string.h>
#include "����.h"
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
		case 0://�˳�
			break;
		case 1://���
			Contact_Add(&PBK);
			system("cls");
			break;
		case 2://��ʾ
			Contact_Show(&PBK);
			system("pause");
			system("cls");
			break;
		case 3://ɾ��
			Contact_Delete(&PBK);
			system("pause");
			break;
		case 4://����
			Contact_Find(&PBK);
			system("pause");
			break;
		case 5://�޸�
			Contact_Amend(&PBK);
			system("pause");
			break;
		case 6://���
			Contact_Empty(&PBK);
			system("pause");
			break;
		default:
			system("cls");
			cout << "�������������Ч" << endl;
			break;
		}
		if (Chose == 0)
		{
			system("cls");
			break;
		}
	}
	cout << "���˳�ϵͳ" << endl;
	return 0;
}

void ShowMenu(void)
{
	system("cls");
	char Array[][14] = { {"1�������ϵ��"},{"2����ʾ��ϵ��"} ,{"3��ɾ����ϵ��"} ,{"4��������ϵ��"}, {"5���޸���ϵ��"}, {"6�������ϵ��"},{"0���˳�ͨѶ¼"} };
	
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