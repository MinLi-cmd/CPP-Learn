/*
* ��������
* 1.��Ա�������const�����ǳ�Ϊ�������Ϊ������
* 2.�������ڲ������޸ĳ�Ա����
* 3.��Ա��������ʱ�ؼ���mutable��,�ڳ���������Ȼ�����޸�
* ������
* 1.��������ǰ��const�Ƹö���Ϊ������
* 2.������ֻ�ܵ��ó�����
*/

#include <iostream>
using namespace std;

#define Person Person13

class Person
{
public:
	/*thisָ�뱾����ָ�볣��*/
	void test01(void) const		//�ú���Ϊ������ �ڲ��޷��޸ĳ�Ա����
	{
		//age = 10;�൱��this->age = 10; ��ʱthis�ǳ���ָ�볣��
		this->high = 140;
	}

	void test02(void)
	{

	}
	int age;
	mutable int high;//������� ��ʹ�ڳ�������������Ҳ�����޸ĸñ���
};

void Study_MemberFunction_Const(void)
{
	Person p1;
	const Person p2;
	p2.test01();/*������ֻ�ܵ��ó�����*/
}