/*
* �����ķ����Լ�����
*���ַ��෽ʽ��
*	1.��������Ϊ���вι�����޲ι���
*	2.�����ͷ�Ϊ����ͨ����Ϳ�������
*���ֵ��÷�ʽ��
*	1.���ŷ�
*	2.��ʾ��
*	3.��ʽת����
*/

#include <iostream>
using namespace std;

#define Person Person1

class Person
{
public:
	Person()			//�޲ι��죨Ĭ�Ϲ��죩
	{
		cout << "Person1���޲ι��캯������" << endl;
	}
	Person(int a)		//�вι���
	{
		age = a;
		cout << "Person1���вι��캯������" << endl;
	}
	Person(const Person1& p)
	{
		age = p.age;
		cout << "Person1�Ŀ������캯������" << endl;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}

	int age;
};

void Study_HanShu_FengLeiAndDiaoYong(void)
{
	/*���ŷ�����*/
	Person p1;					//�޲ι��죨Ĭ�Ϲ��죩
	Person p2(10);				//�вι���
	Person p3(p2);				//��������
	cout << p3.age << endl;
	/*ע������*/
	//����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
	//��ΪPerson p1();��һ������������

	/*��ʾ������*/
	Person p4;					//�޲ι��죨Ĭ�Ϲ��죩
	Person p5 = Person(10);		//�вι���
	Person p6 = Person(p5);		//��������
	cout << p6.age << endl;
	//Person(10);��������	�ص㣺��ǰ��ִ�н�����ϵͳ����յ���������
	/*ע�������Ҫ���ÿ������캯�� ��ʼ����������*/
	//Person(p5);�ᱨ�ض��壬����������Ϊ Person(p3) === Person p3;

	/*��ʽ����*/
	Person p7;
	Person p8 = 10;//�൱��д�� Person p7 = Person(10);�вι���
	Person p9 = p8;//�൱��д�� Person p9 = Person(p8);��������
}