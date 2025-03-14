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
	s.name = "����";
	s.age = 20;
	s.score = 700;
	PrintStruct_InAddress(&s);
	cout << "������" << s.name << "\t���䣺" << s.age << "\t�ɼ���" << s.score << endl;
	PrintStruct_InAddress(&s);

}

void PrintStruct_InValue(Student a)
{
	cout << "������" << a.name << "\t���䣺" << a.age << "\t�ɼ���" << a.score << endl;
	a.age = 100;
}

void PrintStruct_InAddress(Student* a)
{
	cout << "������" << a->name << "\t���䣺" << a->age << "\t�ɼ���" << a->score << endl;
	a->age += 10;
}