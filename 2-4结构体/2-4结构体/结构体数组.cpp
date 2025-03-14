#include <iostream>
using namespace std;
#include "结构体数组.h"
#include "结构体的定义和使用.h"

void PrintArray(Student* Arr, int len);

void Study_Struct_Array(void)
{
	struct Student Array[] = { {"张三",20,700},{"李四",21,650},{"王五",25,630} };
	int GeShu;
	GeShu = sizeof(Array) / sizeof(Array[0]);
	cout << "该结构体数组有" << GeShu << "个元素" << endl;
	PrintArray(Array, GeShu);
}

void PrintArray(Student* Arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << Arr[i].name << "\n年龄：" << Arr[i].age << "\n成绩：" << Arr[i].score << endl;
	}
}