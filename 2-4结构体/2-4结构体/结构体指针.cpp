#include <iostream>
using namespace std;
#include "结构体的定义和使用.h"

void Study_Struct_ZhiZhen(void)
{
	Student Array[] = { {"张三",20,700},{"李四",21,650},{"王五",25,630},{"赵六",26,650}};
	Student* p;
	int GeShu;
	GeShu = sizeof(Array) / sizeof(Array[0]);
	p = Array;

	for (int i = 0; i < GeShu; i++)
	{
		p += i;
		cout << "姓名：" << p->name << "\n年龄：" << p->age << "\n成绩：" << p->score << endl;
		p = Array;
	}
}