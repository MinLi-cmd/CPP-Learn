#include <iostream>
using namespace std;
#include "�ṹ������.h"
#include "�ṹ��Ķ����ʹ��.h"

void PrintArray(Student* Arr, int len);

void Study_Struct_Array(void)
{
	struct Student Array[] = { {"����",20,700},{"����",21,650},{"����",25,630} };
	int GeShu;
	GeShu = sizeof(Array) / sizeof(Array[0]);
	cout << "�ýṹ��������" << GeShu << "��Ԫ��" << endl;
	PrintArray(Array, GeShu);
}

void PrintArray(Student* Arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << Arr[i].name << "\n���䣺" << Arr[i].age << "\n�ɼ���" << Arr[i].score << endl;
	}
}