/*
* 目标：掌握类模板配合友元函数的类内和类外实现
* 
* 全局函数类内实现-直接在类内声明友元即可
* 全局函数类外实现-需要提前让编译器知道全局函数的存在
* 
* 总结：建议全局函数做类内实现，用法简单，而且编译器可以直接识别，用第一种全局友元函数类内实现
*/

#include "0函数声明库.h"
/*================第二种全局友元函数类外实现================*/
template<class T1,class T2>
class Person81;
template<class T1, class T2>
void ShowPerson3(Person81<T1, T2> _p);
/*================第二种全局友元函数类外实现================*/

template <class T1,class T2>
class Person81
{
	/*================第一种全局友元函数类内实现================*/
	friend void ShowPerson2(Person81<T1,T2> _p)
	{
		cout << "全局函数类内实现——姓名：" << _p.m_name << "\n年龄：" << _p.m_age << endl;
	}
	/*================第一种全局友元函数类内实现================*/

	friend void ShowPerson3<T1,T2>(Person81<T1, T2> _p);

public:
	Person81(T1 name, T2 age) :m_name(name), m_age(age) {}

	void ShowPerson1(void)
	{
		cout << "类内——姓名：" << this->m_name << "\n年龄：" << this->m_age << endl;
	}

private:
	T1 m_name;
	T2 m_age;
};


/*================第二种全局友元函数类外实现================*/
template<class T1,class T2>
void ShowPerson3(Person81<T1, T2> _p)
{
	cout << "全局函数类外实现——姓名：" << _p.m_name << "\n年龄：" << _p.m_age << endl;
}
/*================第二种全局友元函数类外实现================*/

void Study_LeiMuBanAndFriend(void)
{
	Person81<string, int> p("王五", 33);
	p.ShowPerson1();
	ShowPerson2(p);
	ShowPerson3(p);
}