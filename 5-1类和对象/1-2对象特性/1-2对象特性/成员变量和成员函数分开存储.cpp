/*
* 1.�ն���ռ���ڴ�ռ�Ϊ��1�ֽ�
*	C++���������ÿ���ն���Ҳ����һ���ֽڿռ� ��Ϊ�����ֿն���ռ�ڴ�ռ��λ��
*	ÿһ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
* �ܽ᣺ ��Ա���� �� ��Ա���� �Ƿֿ��洢��
*/

#include <iostream>
using namespace std;

#define Person Person10

class Person
{
	int a;				//�Ǿ�̬��Ա����  ������Ķ�����

	static int b;		//��̬��Ա����	�������������

	void test01()		//�Ǿ�̬��Ա����  �������������
	{

	}

	static void test02()//��̬��Ա����  �������������
	{

	}
};

int Person::b = 100;

void Study_Lei_SeparatelyStore(void)/*ѧϰ��Ա�����ͳ�Ա�����ֿ��洢*/
{
	Person p;
	cout << "sizeof(p) = " << sizeof(p) << endl;
}