#include <iostream>
using namespace std;
#include "ָ��Ķ����ʹ��.h"
#include "��ָ���Ұָ��.h"
#include "const����ָ��.h"
#include "ָ��������.h"
#include "ָ���뺯��.h"
#include "ָ��ð������.h"

int main(void)
{
	unsigned short Chose;
	cout << "ָ�붨���ʹ�ã�0��\n��ָ�루1��\nҰָ�루2��\n����ָ�루3��\nָ�볣����4��\nָ�������飨5��\nָ���뺯����6��\nָ��ð������7��" << endl;
	cout << "��ѡ�����";
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
		cout << "�������������Ч" << endl;
		break;
	}
	
	system("pause");
	return 0;
}