/*
* �ӷ���������عؼ��� operator+ 
* ��������� Ҳ���Է�����������
* �ܽ᣺
* 1.�������õ��������͵ı��ʽ��������ǲ����ܸı��
* 2.��Ҫ�������������
*/


#include <iostream>
using namespace std;

#define Person Person1

class Person
{
public:
	/*��Ա��������+��*/
	//Person operator +(Person& p);//��һ�ַ�ʽ������
	int num1, num2;
};
/*��һ�� ��Ա�������������*/
//Person Person::operator +(Person& p)
//{
//	Person temp;
//	temp.num1 = this->num1 + p.num1;
//	temp.num2 = this->num2 + p.num2;
//	return temp;
//}

Person operator +(Person& p1, Person& p2);//�ڶ��ַ�ʽ������
Person operator +(Person& p1, int a);//��������صĺ�������


/*�Ӻ���������غ������*/
void Study_OperatorOverloading_Plus(void)
{
	Person p1;
	p1.num1 = 10;
	p1.num2 = 20;
	Person p2;
	p2.num1 = 30;
	p2.num2 = 40;

	Person sum1;
	sum1 = p1 + p2;
	Person sum2;
	sum2 = p2 + 100;

	/*��һ�� ��Ա������������صı���*/
	/*sum = p1.operator+(p2);*/

	/*�ڶ��� ȫ�ֺ�����������صı���*/
	/*sum = operator +(p1, p2);*/

	cout << sum1.num1 << endl << sum1.num2 << endl;
	cout << sum2.num1 << endl << sum2.num2 << endl;
}
/*�ڶ��� ȫ�ֺ������������*/
Person operator +(Person& p1, Person& p2)
{
	Person temp;
	temp.num1 = p1.num1 + p2.num1;
	temp.num2 = p1.num2 + p2.num2;
	return temp;
}

Person operator +(Person& p1, int a)
{
	Person temp;
	temp.num1 = p1.num1 + a;
	temp.num2 = p1.num2 + a;
	return temp;
}