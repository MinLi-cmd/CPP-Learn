/*
* ��ģ���г�Ա��������ͨ���г�Ա��������ʱ����������ģ�
* 1.��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
* 2.��ģ���еĳ�Ա�����ڵ��òŴ���
* 
* �ܽ᣺��ģ���еĳ�Ա����������һ��ʼ�ʹ����ģ��ڵ��õ�ʱ��Ŵ���
*/

#include "0����������.h"

class Person31
{
public:
	void ShowPerson(void)
	{
		cout << "Person31 ShowPerson�ĵ���" << endl;
	}
};

class Person32
{
	void ShowPerson(void)
	{
		cout << "Person32 ShowPerson�ĵ���" << endl;
	}
};

template <class T>
class MyClass31
{
public:
	void func1(void)
	{
		obj.ShowPerson();
	}

	void func2(void)
	{
		obj.ShowPerosn();
	}

	T obj;
};

void Study_LeiMuBanChuangJianShiJi(void)
{
	MyClass31<Person31> m;
	m.func1();
	//m.func2();�޷����ã��������˵���ڵ��õ�ʱ��Żᴴ����Ա����
}
