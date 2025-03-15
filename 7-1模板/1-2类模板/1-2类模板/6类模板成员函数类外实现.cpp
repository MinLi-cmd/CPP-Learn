/*
* 总结：类模板中成员函数类外实现时，需要加上模板参数列表
*/

#include "0函数声明库.h"

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
		cout << "姓名为：" << this->name << "\n" << "年龄为：" << this->age << endl;
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
	cout << "姓名为：" << this->name << "\n" << "年龄为：" << this->age << endl;
}

void Study_LeiMuBanChengYuanHanShuLeiWaiShiXian(void)
{
	Person61<string, int> p1("张三", 36);
	p1.ShowPerson();

}