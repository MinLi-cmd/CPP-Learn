/*
* Ŀ�꣺������ģ�������Ԫ���������ں�����ʵ��
* 
* ȫ�ֺ�������ʵ��-ֱ��������������Ԫ����
* ȫ�ֺ�������ʵ��-��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
* 
* �ܽ᣺����ȫ�ֺ���������ʵ�֣��÷��򵥣����ұ���������ֱ��ʶ���õ�һ��ȫ����Ԫ��������ʵ��
*/

#include "0����������.h"
/*================�ڶ���ȫ����Ԫ��������ʵ��================*/
template<class T1,class T2>
class Person81;
template<class T1, class T2>
void ShowPerson3(Person81<T1, T2> _p);
/*================�ڶ���ȫ����Ԫ��������ʵ��================*/

template <class T1,class T2>
class Person81
{
	/*================��һ��ȫ����Ԫ��������ʵ��================*/
	friend void ShowPerson2(Person81<T1,T2> _p)
	{
		cout << "ȫ�ֺ�������ʵ�֡���������" << _p.m_name << "\n���䣺" << _p.m_age << endl;
	}
	/*================��һ��ȫ����Ԫ��������ʵ��================*/

	friend void ShowPerson3<T1,T2>(Person81<T1, T2> _p);

public:
	Person81(T1 name, T2 age) :m_name(name), m_age(age) {}

	void ShowPerson1(void)
	{
		cout << "���ڡ���������" << this->m_name << "\n���䣺" << this->m_age << endl;
	}

private:
	T1 m_name;
	T2 m_age;
};


/*================�ڶ���ȫ����Ԫ��������ʵ��================*/
template<class T1,class T2>
void ShowPerson3(Person81<T1, T2> _p)
{
	cout << "ȫ�ֺ�������ʵ�֡���������" << _p.m_name << "\n���䣺" << _p.m_age << endl;
}
/*================�ڶ���ȫ����Ԫ��������ʵ��================*/

void Study_LeiMuBanAndFriend(void)
{
	Person81<string, int> p("����", 33);
	p.ShowPerson1();
	ShowPerson2(p);
	ShowPerson3(p);
}