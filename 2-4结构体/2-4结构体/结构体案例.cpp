/*
* 学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
* 设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
* 学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
* 最终打印出老师数据以及老师所带学生数据
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
		cout << "请输入第" << i+1 << "位教师姓名：";
		cin >> a->name_teacher;
		for (int j = 0; j < len_s; j++)
		{
			cout << "请输入该教师的第" << j+1 << "名学生的姓名：";
			cin >> a->stu[j].name_student;
			cout << "请输入成绩：";
			cin >> a->stu[j].score;
		}
	}
}

void PrintStruct_Array(teacher* a, int len_t, int len_s)
{
	for (int i = 0; i < len_t; i++, a++)
	{
		cout << "第" << i+1 << "位教师姓名：" << a->name_teacher << "\t该教师有" << len_s << "名学生" << endl;
		for (int j = 0; j < len_s; j++)
		{
			cout << "第" << j + 1 << "名学生的姓名：" << a->stu[j].name_student << "\t该学生的成绩为：" << a->stu[j].score << endl;
		}
	}
}

void SetRandValue(teacher* a, int len_t, int len_s)
{
	string StudentName_Array[] = {{"张三"},{"李四"},{"王五"},{"赵六"},{"刘七"},{"杨八"}};
	string TeacherName_Array[] = { {"老张"},{"老王"},{"老李"},{"老刘"},{"老郭"},{"老杨"} };
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