/*
* ��Ա��������Ϊ˽��
* 1.�����Լ����ƶ�дȨ��
* 2.����д���Լ��������Ч��
*/
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>

typedef unsigned long long int ULL_int;

class Person1
{
public://����Ȩ��
	//��������
	void setname(string name)
	{
		p_name = name;
	}
	//��ȡ����
	string getname(void)
	{
		return p_name;
	}
	//�������䣨0~150��
	void setage(int age)
	{
		if (age >= 0 && age <= 150)
		{
			p_age = age;
		}
		else
		{
			cout << "����������Ч" << endl;
		}
	}
	//��ȡ����
	int getage(void)
	{
		return p_age;
	}
	//д�µ�����
	void writepassward(ULL_int newpassward)
	{
		p_passward = newpassward;
	}

private://˽��Ȩ��
	
	string p_name;//����			�ɶ� ��д
	int p_age = 0;//����			ֻ�� Ҳ����д�����������0~150֮�䣩
	ULL_int p_passward = 0;//����	ֻд	

};

void Study_Lei_MemberAmend(void)
{
	Person1 p1{};
	ULL_int passward;
	int Inage;
	p1.setname("����");
	cout << "���������䣺";
	cin >> Inage;
	p1.setage(Inage);
	cout << "������" << p1.getname() << endl;
	cout << "���䣺" << p1.getage() << endl;
	cout << "������������(���19λ)��";
	cin >> passward;
	p1.writepassward(passward);
	cout << "��������д��" << endl;
}