#include <iostream>
using namespace std;
#include "��ʶ����.h"
#include "��ֻС�������.h"
#include "����Ԫ������.h"
#include "ð������.h"
#include "��ά���鰸��.h"
#include "��ʶ��ά����.h"

int main()
{
	unsigned short Chose;
	cout << "��ʶ���飨1��\n��ֻС������أ�2��\n����Ԫ�����ã�3��\nð������4��\n��ʶ��ά���飨5��\n��ά���鰸����6��\n��ѡ��Ҫִ�еĳ���";
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
		cout << "�������������Ч" << endl;
		break;
	}
	system("pause");
	return 0;
}