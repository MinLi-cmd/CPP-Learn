#include <iostream>
using namespace std;
#include <string>

struct Student
{
	string name;
	int age;
	int score;
};

struct Teacher
{
	int id;
	string name;
	int age;
	struct Student Stu;
};

void Study_Struct_InStruct(void)
{
	Teacher t1;
	t1.id = 10000;
	t1.name = "����";
	t1.age = 47;
	t1.Stu.name = "С��";
	t1.Stu.age = 20;
	t1.Stu.score = 700;
	cout << "��ʦ��ţ�" << t1.id << "\t��ʦ������" << t1.name << "\t��ʦ���䣺" << t1.age <<"\t<=>"
		 << "\tѧ��������" << t1.Stu.name << "\tѧ�����䣺" << t1.Stu.age << "\tѧ���ɼ���" << t1.Stu.score << endl;
}