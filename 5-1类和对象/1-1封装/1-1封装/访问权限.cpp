/*
* ����Ȩ��������
* 1.����Ȩ�� public			��Ա ���ڿ��Է��� ����Ҳ���Է���
* 2.����Ȩ�� protected		��Ա ���ڿ��Է��� ���ⲻ���Է��� ����Ҳ���Է��ʸ����еı�������
* 3.˽��Ȩ�� private		��Ա ���ڿ��Է��� ���ⲻ���Է��� ���಻���Է��ʸ����е�˽������
* ����Ȩ�޺�˽��Ȩ�޵������ڼ̳�����
*/

#include <iostream>
using namespace std;
#include <string>

typedef unsigned long long int ULL_int;

class Person0
{
public:
	//����Ȩ��
	string name;

protected:
	//����Ȩ��
	string Car;

private:
	//˽��Ȩ��
	ULL_int PassWard;

public:
	void SetValue(void)
	{
		name = "����";
		Car = "С��su7";
		PassWard = 123456;
	}
	void PrintValue(void)
	{
		cout << "������" << name << endl;
		cout << "������" << Car << endl;
		cout << "���룺" << PassWard << endl;
	}
};

void Study_Lei_FangWenQuanXian(void)
{
	Person0 p1;
	p1.SetValue();
	p1.PrintValue();
}