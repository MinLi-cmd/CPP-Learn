/*
* ����������ʵ��һ��ͨ�õ������࣬Ҫ�����£�
* 1.���Զ��������������Լ��Զ����������͵����ݽ��д洢
* 2.�������е����ݴ洢������
* 3.���캯���п��Դ������������
* 4.�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
* 5.�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
* 6.�����ṩ�±�ķ�ʽ���������е�Ԫ��
* 7.���Ի�ȡ�����е�ǰԪ�ظ��������������
* 
*/

#include"0����������.h"
#include <iostream>
using namespace std;
#include "9UserArr.hpp"

class Person91
{
public:
	Person91() :_name("1"), _age(0) {}
	Person91(string name, int age) : _name(name), _age(age) {}

	string GetName(void) { return this->_name; }

	int GetAge(void) { return this->_age; }

private:
	string _name;
	int _age;
};

void TestPrint91(UserArr91<int>& u)
{
	for (short i = 0; i < u.GetSize(); i++)
	{
		cout << u[i] << endl;
	}
	cout << "������������Ϊ��" << u.GetCapacity() << endl;
	cout << "�����������ݸ���Ϊ��" << u.GetSize() << endl;
}

void TestPrint91(UserArr91<Person91>& u)//����
{
	for (short i = 0; i < u.GetSize(); i++)
	{
		cout <<"����Ϊ��" << u[i].GetName() <<"\t����Ϊ��"<<u[i].GetAge() << endl;
	}
	cout << "������������Ϊ��" << u.GetCapacity() << endl;
	cout << "�����������ݸ���Ϊ��" << u.GetSize() << endl;
}

void AnLi_ArrClass(void)
{
	CoutLine('=', 50);
	cout << endl;

	UserArr91<int> u1(5);
	for (int i = 0; i < 5; i++)
	{
		u1.PushBlock(i);
	}
	TestPrint91(u1);

	CoutLine('=', 50);
	cout << endl;

	UserArr91<int> u2(u1);
	u2.PopBlock();
	u2.PopBlock();
	TestPrint91(u2);

	CoutLine('=', 50);
	cout << endl;

	UserArr91<Person91> u3(5);

	Person91 p1("����", 20); u3.PushBlock(p1);
	Person91 p2("����", 21); u3.PushBlock(p2);
	Person91 p3("����", 22); u3.PushBlock(p3);
	Person91 p4("����", 23); u3.PushBlock(p4);
	Person91 p5("����", 24); u3.PushBlock(p5);

	TestPrint91(u3);

	CoutLine('=', 50);
	cout << endl;

}