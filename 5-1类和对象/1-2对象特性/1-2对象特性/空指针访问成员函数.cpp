/*
* ��ָ���ǿ��Է��ʳ�Ա������
*/

#include <iostream>
using namespace std;

#define Person Person12

class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	void ShowClassName(void)
	{
		cout << "This is Person12 Class" << endl;
	}
	void ShowPersonAge(void)
	{
		/*��ߴ��뽡׳��*/
		if (this == NULL)
		{
			return;
		}
		/*��ֹ�����ָ��*/

		cout << "age = " << this->age << endl;
	}
	int age;
};

void Study_Pointer_NULL(void)
{
	Person* p = NULL;
	p->ShowClassName();/*û������*/
	p->ShowPersonAge();/*������*/
}