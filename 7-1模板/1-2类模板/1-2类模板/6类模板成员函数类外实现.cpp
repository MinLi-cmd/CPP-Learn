/*
* �ܽ᣺��ģ���г�Ա��������ʵ��ʱ����Ҫ����ģ������б�
*/

#include "0����������.h"

template<class T1,class T2>
class Person61
{
public:
	Person61(T1 name, T2 age);
	/*{
		this->name = name;
		this->age = age;
	}*/

	void ShowPerson(void);
	/*{
		cout << "����Ϊ��" << this->name << "\n" << "����Ϊ��" << this->age << endl;
	}*/

	T1 name;
	T2 age;
};

template<class T1,class T4>
Person61<T1,T4>::Person61(T1 name, T4 age)
{
	this->name = name;
	this->age = age;
}

template<class T1,class T3>
void Person61<T1, T3>::ShowPerson(void)
{
	cout << "����Ϊ��" << this->name << "\n" << "����Ϊ��" << this->age << endl;
}

void Study_LeiMuBanChengYuanHanShuLeiWaiShiXian(void)
{
	Person61<string, int> p1("����", 36);
	p1.ShowPerson();

}