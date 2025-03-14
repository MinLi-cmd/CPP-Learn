/*
* ���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա𣻴����ṹ�����飬�����д��5��Ӣ�ۡ�
* ͨ��ð��������㷨���������е�Ӣ�۰�����������������մ�ӡ�����Ľ����
* ����Ӣ����Ϣ���£�
* ������23���У�����22���У��ŷɣ�20���У����ƣ�21���У�������19��Ů
*/

#include <iostream>
using namespace std;
#include <string>

struct Hero
{
	string name;
	int age;
	string gender;
};

void PrintStruct_Array(Hero* a, int len);
void StructArray_ZhiZhenMaoPao(Hero* h, int len);


void Study_Struct_MaoPao(void)
{
	Hero h[] = { {"����",23,"��"},{"����",22,"��"} ,{"�ŷ�",20,"��"} ,{"����",21,"��"} ,{"����",19,"Ů"} };
	
	int GeShu = sizeof(h) / sizeof(h[0]);

	cout << "ԭ����" << endl;
	PrintStruct_Array(h, GeShu);
	StructArray_ZhiZhenMaoPao(h, GeShu);
	cout << "ð�ݺ�����" << endl;
	PrintStruct_Array(h, GeShu);
}

void PrintStruct_Array(Hero* a, int len)
{
	Hero* temp = a;
	for (int i = 0; i < len; i++)
	{
		cout << "������" << a->name << "\t���䣺" << a->age << "\t�Ա�" << a->gender << endl;
		a++;
	}
}

void StructArray_ZhiZhenMaoPao(Hero* a, int len)
{
	Hero temp;
	Hero* l, * n;
	for (int i = 0; i < len - 1; i++)
	{
		l = a;
		n = a + 1;
		for (int j = 0; j < len - i - 1; j++)
		{
			if (l->age > n->age)
			{
				temp = *n;
				*n = *l;
				*l = temp;
			}
			l++;
			n++;
		}
	}
}