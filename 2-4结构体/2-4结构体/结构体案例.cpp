/*
* ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
* ���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
* ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
* ���մ�ӡ����ʦ�����Լ���ʦ����ѧ������
*/

#include <iostream>
using namespace std;
#include <string>
#include <ctime>

struct student
{
	string name_student;
	int score;
};

struct teacher
{
	string name_teacher;
	student stu[5];
};

void GetValue(teacher* a, int len_t, int len_s);
void PrintStruct_Array(teacher* a, int len_t, int len_s);
void SetRandValue(teacher* a, int len_t, int len_s);

void Study_Struct_AnLi(void)
{
	srand((unsigned int)time(NULL));
	teacher t[3];
	int GeShu_Teacher = sizeof(t) / sizeof(t[0]);
	int GeShu_Student = sizeof(t->stu) / sizeof(t->stu[0]);
	SetRandValue(t, GeShu_Teacher, GeShu_Student);
	PrintStruct_Array(t, GeShu_Teacher, GeShu_Student);

}

void GetValue(teacher* a, int len_t,int len_s)
{
	for (int i = 0; i < len_t; i++, a++)
	{
		cout << "�������" << i+1 << "λ��ʦ������";
		cin >> a->name_teacher;
		for (int j = 0; j < len_s; j++)
		{
			cout << "������ý�ʦ�ĵ�" << j+1 << "��ѧ����������";
			cin >> a->stu[j].name_student;
			cout << "������ɼ���";
			cin >> a->stu[j].score;
		}
	}
}

void PrintStruct_Array(teacher* a, int len_t, int len_s)
{
	for (int i = 0; i < len_t; i++, a++)
	{
		cout << "��" << i+1 << "λ��ʦ������" << a->name_teacher << "\t�ý�ʦ��" << len_s << "��ѧ��" << endl;
		for (int j = 0; j < len_s; j++)
		{
			cout << "��" << j + 1 << "��ѧ����������" << a->stu[j].name_student << "\t��ѧ���ĳɼ�Ϊ��" << a->stu[j].score << endl;
		}
	}
}

void SetRandValue(teacher* a, int len_t, int len_s)
{
	string StudentName_Array[] = {{"����"},{"����"},{"����"},{"����"},{"����"},{"���"}};
	string TeacherName_Array[] = { {"����"},{"����"},{"����"},{"����"},{"�Ϲ�"},{"����"} };
	unsigned short StudentName_Array_GeShu, TeacherName_Array_GeShu;
	StudentName_Array_GeShu = sizeof(StudentName_Array) / sizeof(StudentName_Array[0]);
	TeacherName_Array_GeShu = sizeof(TeacherName_Array) / sizeof(TeacherName_Array[0]);
	for (int i = 0; i < len_t; i++)
	{
		a->name_teacher = TeacherName_Array[(rand() % TeacherName_Array_GeShu)];
		for (int j = 0; j < len_s; j++)
		{
			a->stu[j].name_student = StudentName_Array[(rand() % StudentName_Array_GeShu)];
			a->stu[j].score = 500 + (rand() % (250 + 1));
		}
		a++;
	}
}