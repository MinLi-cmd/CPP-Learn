/*
* struct Ĭ��Ȩ��Ϊ����
* class  Ĭ��Ȩ��Ϊ˽��
* class �� struct ����������Ȩ��
*/

#include <iostream>
using namespace std;

struct stu
{
//private://������������
	int num;
	
	void Print(void)
	{
		cout << num << endl;
	}
};

class c
{
	int num;
};

void Study_LeiAndStruct_Difference(void)
{
	stu stu1{ 0 };
	c c1{};
	stu1.num = 10;
	stu1.Print();
	//c1.num = 10;//���� ��ʾ���ɷ���
}