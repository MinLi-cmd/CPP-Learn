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
	student s = { "����",20,700 };
	PrintStruct(&s);
}

void PrintStruct(const student* a)
{
	cout << "������" << a->name << "\t���䣺" << a->age << "\t�ɼ���" << a->score << endl;
}
