/*
* ���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾ������ѧ��
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
		cout << "ѧ����������" << name << "\tѧ�ţ�" << number << endl;
	}
	void CinValue()
	{
		cout << "������ѧ��������";
		cin >> name;
		cout << "������ѧ��ѧ�ţ�";
		cin >> number;
	}
};

void Study_Lei_AnLi_Student(void)
{
	Student stu1{"��",2290510};
	stu1.CinValue();
	stu1.PrintMessage();
}