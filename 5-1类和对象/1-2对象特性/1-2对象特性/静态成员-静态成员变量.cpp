/*
*	��̬��Ա����
* �����ж�����ͬһ������
* ���ڱ���׶η����ڴ�
* �����������������ʼ��
*/

#include <iostream>
using namespace std;

#define Person Person8

class Person
{
public:
	static int m_a;/*��������*/
private:
	static int m_b;
};

int Person::m_a = 100;/*�����ʼ��*/
int Person::m_b = 300;

void Study_StaticMember_Variable(void)
{
	/*��������ж�����ͬһ�ݾ�̬��������*/
	Person p1;
	cout << p1.m_a << endl;/*ͨ����Ա����*/
	Person p2;
	p2.m_a = 200;
	cout << p1.m_a << endl;
	cout << Person::m_a << endl;/*ͨ���������з���*/
	//cout << Person::m_b << endl;/*��̬������ԱҲ���ܷ���Ȩ�޿��Ƶ�*/
}