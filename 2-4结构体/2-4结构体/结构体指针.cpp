#include <iostream>
using namespace std;
#include "�ṹ��Ķ����ʹ��.h"

void Study_Struct_ZhiZhen(void)
{
	Student Array[] = { {"����",20,700},{"����",21,650},{"����",25,630},{"����",26,650}};
	Student* p;
	int GeShu;
	GeShu = sizeof(Array) / sizeof(Array[0]);
	p = Array;

	for (int i = 0; i < GeShu; i++)
	{
		p += i;
		cout << "������" << p->name << "\n���䣺" << p->age << "\n�ɼ���" << p->score << endl;
		p = Array;
	}
}