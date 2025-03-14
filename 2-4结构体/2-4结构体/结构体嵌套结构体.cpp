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
	t1.name = "老王";
	t1.age = 47;
	t1.Stu.name = "小王";
	t1.Stu.age = 20;
	t1.Stu.score = 700;
	cout << "教师编号：" << t1.id << "\t教师姓名：" << t1.name << "\t教师年龄：" << t1.age <<"\t<=>"
		 << "\t学生姓名：" << t1.Stu.name << "\t学生年龄：" << t1.Stu.age << "\t学生成绩：" << t1.Stu.score << endl;
}