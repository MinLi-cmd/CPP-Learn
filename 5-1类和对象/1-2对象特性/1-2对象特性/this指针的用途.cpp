/*
* thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
* thisָ����������ÿһ�� �Ǿ�̬��Ա���� �ڵ�һ��ָ��
* thisָ�벻��Ҫ���壬ֱ��ʹ�ü���
* this����;��
* 1.���βκͳ�Ա����ͬ��ʱ������thisָ��������
* 2.����� �Ǿ�̬��Ա���� �з��ض����� ��ʹ��return *this
* �ܽ᣺ֵ���ػ���ֵ�����ʱ���Ǹ���һ�ݴ���ȥ�� �뱾���޹� ����Ҫ��*����&
*/

#include <iostream>
using namespace std;

#define Person Person11

class Person
{
public:
	Person(int age)
	{
		/*������Ƴ�ͻ*/
		this->age = age;/*thisָ��ָ�򱻵��õĳ�Ա���������Ķ���*/
	}
	Person& PersonAddAge(const Person& a)
	{
		this->age += a.age;
		return *this;
	}
	int age;
};

void Study_Pointer_This(void)
{
	/*������Ƴ�ͻ*/
	Person p1(18);/*thisָ��ָ�� �����õĳ�Ա���� �����Ķ��� ����thisָ���p1*/
	cout << "p1������Ϊ��" << p1.age << endl;

	/*���ض�������*this*/
	Person p2(10);
	Person p3(10);
	
	/*��ʽ���˼��*/
	p3.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);
	cout << "p3������Ϊ��" << p3.age << endl;
}