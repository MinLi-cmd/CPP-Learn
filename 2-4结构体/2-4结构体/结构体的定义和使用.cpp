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

	ZhangSan.name = "����";
	ZhangSan.age = 20;
	ZhangSan.score = 700;
	LiSi.name = "����";
	LiSi.age = 21;
	LiSi.score = 650;
	WangWu.name = "����";
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
	cout << "������" << ZhangSan.name << "\n���䣺" << ZhangSan.age << "\n�ɼ���" << ZhangSan.score << endl;
	cout << "������" << LiSi.name << "\n���䣺" << LiSi.age << "\n�ɼ���" << LiSi.score << endl;
	cout << "������" << WangWu.name << "\n���䣺" << WangWu.age << "\n�ɼ���" << WangWu.score << endl;
}