/*
* 类模板作用：
* 建立一个通用类，类中的成员 数据类型可以不具体制定，用一个 虚拟的类型 来代表
* 
* 语法：
* template<typename T>
* 类
* 
* 解释：
* template	——	声明创建模板
* typename	——	表面其后面的符号是一种数据类型，可以用class代替
* T			——	通用的数据类型，名称可以替换，通常为大写字母
* 
* 总结：类模板和函数模板语法相似，在声明模板template后面加类，此类成为类模板
*/

#include "0函数声明库.h"

template <class NameType,class AgeType>
class Person11
{
public:
	Person11(NameType name, AgeType age)
	{
		this->name = name;
		this->age = age;
	}

	void ShowPerson()
	{
		cout << "name: " << this->name << "\n" << "age: " << this->age << endl;
	}

	NameType name;
	AgeType age;
};

void Study_LeiMuBanYuFa(void)
{
	Person11<string, int> p1("孙悟空", 999);
	p1.ShowPerson();
}
