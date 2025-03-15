#pragma once

#include <iostream>
using namespace std;
#include <string>

template <class T1,class T2>
class Person71
{
public:
	Person71(T1 name, T2 age);
	void ShowPerson(void);

	T1 m_name;
	T2 m_age;
};

template<class T1, class T2>
Person71<T1, T2>::Person71(T1 name, T2 age) :m_name(name), m_age(age)
{

}

template <class T1, class T2>
void Person71<T1, T2>::ShowPerson(void)
{
	cout << "ÐÕÃû£º" << this->m_name << "\nÄêÁä£º" << this->m_age << endl;
}

