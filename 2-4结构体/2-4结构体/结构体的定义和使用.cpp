#include <iostream>
using namespace std;
#include <string>


struct Student
{
	string name;
	int age;
	int score;
};

void Study_Struct_Learn(void)
{
	Student ZhangSan;
	struct Student LiSi,WangWu;

	ZhangSan.name = "张三";
	ZhangSan.age = 20;
	ZhangSan.score = 700;
	LiSi.name = "李四";
	LiSi.age = 21;
	LiSi.score = 650;
	WangWu.name = "王五";
	WangWu.age = 25;
	WangWu.score = 600;
	cout << &ZhangSan.name << endl;
	cout << &ZhangSan.age << endl;
	cout << &ZhangSan.score << endl;
	cout << &LiSi.name << endl;
	cout << &LiSi.age << endl;
	cout << &LiSi.score << endl;
	cout << &WangWu.name << endl;
	cout << &WangWu.age << endl;
	cout << &WangWu.score << endl;
	cout << "姓名：" << ZhangSan.name << "\n年龄：" << ZhangSan.age << "\n成绩：" << ZhangSan.score << endl;
	cout << "姓名：" << LiSi.name << "\n年龄：" << LiSi.age << "\n成绩：" << LiSi.score << endl;
	cout << "姓名：" << WangWu.name << "\n年龄：" << WangWu.age << "\n成绩：" << WangWu.score << endl;
}