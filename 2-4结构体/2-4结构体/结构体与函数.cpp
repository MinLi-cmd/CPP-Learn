#include <iostream>
using namespace std;
#include <string>

struct Student
{
	string name;
	int age;
	int score;
};

void PrintStruct_InValue(Student a);
void PrintStruct_InAddress(Student* a);

void Study_Struct_HanShu(void)
{
	Student s;
	s.name = "张三";
	s.age = 20;
	s.score = 700;
	PrintStruct_InAddress(&s);
	cout << "姓名：" << s.name << "\t年龄：" << s.age << "\t成绩：" << s.score << endl;
	PrintStruct_InAddress(&s);

}

void PrintStruct_InValue(Student a)
{
	cout << "姓名：" << a.name << "\t年龄：" << a.age << "\t成绩：" << a.score << endl;
	a.age = 100;
}

void PrintStruct_InAddress(Student* a)
{
	cout << "姓名：" << a->name << "\t年龄：" << a->age << "\t成绩：" << a->score << endl;
	a->age += 10;
}