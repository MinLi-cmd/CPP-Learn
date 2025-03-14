#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};

void PrintStruct(const student* a);

void Study_Struct_Const(void)
{
	student s = { "张三",20,700 };
	PrintStruct(&s);
}

void PrintStruct(const student* a)
{
	cout << "姓名：" << a->name << "\t年龄：" << a->age << "\t成绩：" << a->score << endl;
}
