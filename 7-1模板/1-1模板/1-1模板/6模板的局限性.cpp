/*
*ģ��ľ�����
* ģ�岢�������ܵģ���Щ�ض��������ͣ���Ҫ�þ��廯��ʽ������ʵ��
* 
* �ܽ᣺
* 1.ģ���ͨ���Բ��������ܵ�
* 2.���þ��廯��ģ�壬���Խ���Զ������͵�ͨ�û�
* 3.ѧϰģ�岢����Ϊ��дģ�壬������STL�ܹ�����ϵͳ�ṩ��ģ��
*/

#include "0����������.h"

/*====================================�ඨ��====================================*/
class Person61
{
public:
	Person61(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	
	string name;
	int age;
};

/*====================================���====================================*/
void test61(void);
void test62(void);

void Study_MuBanDeJuXianXing(void)
{
	test62();
}

/*====================================ģ��====================================*/
//�Ա����������Ƿ���Ⱥ���
template<class T>
bool MyCompare61(T& a, T& b)
{
	return a == b;
}

//bool MyCompare61(Person61& p1, Person61& p2)ͬ��Ҳ����
template<> bool MyCompare61(Person61& p1, Person61& p2)
{
	return p1.name == p2.name && p1.age == p2.age;
}

/*====================================��������====================================*/
void test61(void)
{
	int a = 10, b = 20;
	bool ret = MyCompare61(a, b);
	if (ret)
		cout << "a == b" << endl;
	else
		cout << "a !=b " << endl;
}

void test62(void)
{
	Person61 p1("Tom", 10);
	Person61 p2("Tom", 10);

	bool ret = MyCompare61(p1, p2);
	if (ret)
		cout << "p1 == p2" << endl;
	else
		cout << "p1 != p2" << endl;
}