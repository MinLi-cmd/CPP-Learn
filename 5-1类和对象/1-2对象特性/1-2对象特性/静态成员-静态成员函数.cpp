/*
* 	��̬��Ա����	
* �����ж�����ͬһ������
* ����̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
*/

#include <iostream>
using namespace std;

#define Person Person9

class Person
{
public:
	static void test01()
	{
		/*m_a = a;���� ��̬��Ա�������ܷ��ʷǾ�̬��Ա���� �޷����ֵ������Ǹ������m_a*/
		m_b = 20;
		cout << "static void tset01()�ĵ���" << endl;
	}
	int m_a;
	static int m_b;
private:
	static void test02()
	{
		cout << "static void test02()�ĵ���" << endl;
	}
};

int Person::m_b = 100;/*��ʼ�����еľ�̬��Ա����*/

void Study_StaticMember_Function(void)
{
	/*ͨ������������*/
	Person p1;
	p1.test01();

	/*ͨ������������*/
	Person::test01();

	/*��̬��Ա����Ҳ�ܷ���Ȩ�޿���*/
	//Person::test02();/*������ʾ���ɷ���*/
	
}