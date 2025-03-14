/*
* 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示姓名和学号
*/

#include <iostream>
using namespace std;
#include <string>

typedef unsigned long long int ULL_int;

class Student
{
public:
	string name;
	ULL_int number;
	void PrintMessage()
	{
		cout << "学生的姓名：" << name << "\t学号：" << number << endl;
	}
	void CinValue()
	{
		cout << "请输入学生姓名：";
		cin >> name;
		cout << "请输入学生学号：";
		cin >> number;
	}
};

void Study_Lei_AnLi_Student(void)
{
	Student stu1{"李",2290510};
	stu1.CinValue();
	stu1.PrintMessage();
}