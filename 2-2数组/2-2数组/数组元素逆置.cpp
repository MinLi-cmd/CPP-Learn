/*
* ������һ��5��Ԫ�ص����飬���ҽ�Ԫ������
* ��ԭ����Ԫ��Ϊ��1��3��2��5��4��
* ���ú�������Ϊ��4��5��2��3��1��
*/

#include <iostream>
using namespace std;

void Study_TurnArray(void)
{
	int Arr_Start[] = { 1,3,2,5,4 };
	int Arr_Result[sizeof(Arr_Start) / sizeof(Arr_Start[0])] = { 0 };
	int temp = (sizeof(Arr_Start) / sizeof(Arr_Start[0]));
	
	for (int i = 0; i < temp; i++)
	{
		Arr_Result[temp - i - 1] = Arr_Start[i];
	}
	cout << "ԭ����Ϊ��" << endl;
	for (int i = 0; i < temp; i++)
	{
		cout << Arr_Start[i] << "\t";
	}
	cout << endl;
	cout << "���ú�����Ϊ��" << endl;
	for (int i = 0; i < temp; i++)
	{
		cout << Arr_Result[i] << "\t";
	}
	cout << endl;
}