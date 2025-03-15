/*
* 类模板与函数模板区别主要有两点：
* 1.类模板没有自动类型推导的使用方式
* 2.类模板在模板参数列表中可以有默认参数
* 
* 总结：
* 1.类模板使用只能用显示指定类型方式
* 2.类模板中的模板参数列表可以有默认参数
*/


#include "0函数声明库.h"

template<class NameType = string,class AgeType = int>
class Person21
{
public:
	Person21(NameType name,AgeType age)
	{
		this->name = name;
		this->age = age;
	}

	void ShowPerson(void)
	{
		cout << "姓名为：" << this->name << "\n" << "年龄为：" << this->age << endl;
	}

	NameType name;
	AgeType age;
};

void Study_LeiMuBanYuHanShuMuBanQuBie(void)
{
	//Person21 p("孙悟空", 1000);//错误，类模板没有自动类型推导
	Person21<string, int> p1("孙悟空", 999);
	Person21<> p2("猪八戒",1000);//Person21 p2("猪八戒",1000);错误
	p1.ShowPerson();
	p2.ShowPerson();
}
