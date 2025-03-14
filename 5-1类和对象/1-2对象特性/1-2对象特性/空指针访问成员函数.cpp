/*
* 空指针是可以访问成员函数的
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
		/*提高代码健壮性*/
		if (this == NULL)
		{
			return;
		}
		/*防止传入空指针*/

		cout << "age = " << this->age << endl;
	}
	int age;
};

void Study_Pointer_NULL(void)
{
	Person* p = NULL;
	p->ShowClassName();/*没有问题*/
	p->ShowPersonAge();/*有问题*/
}