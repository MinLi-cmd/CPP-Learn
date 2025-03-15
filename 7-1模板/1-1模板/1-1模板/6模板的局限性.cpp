/*
*模板的局限性
* 模板并不是万能的，有些特定数据类型，需要用具体化方式做特殊实现
* 
* 总结：
* 1.模板的通用性并不是万能的
* 2.利用具体化的模板，可以解决自定义类型的通用化
* 3.学习模板并不是为了写模板，而是在STL能够运用系统提供的模板
*/

#include "0函数声明库.h"

/*====================================类定义====================================*/
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

/*====================================入口====================================*/
void test61(void);
void test62(void);

void Study_MuBanDeJuXianXing(void)
{
	test62();
}

/*====================================模板====================================*/
//对比两个数据是否相等函数
template<class T>
bool MyCompare61(T& a, T& b)
{
	return a == b;
}

//bool MyCompare61(Person61& p1, Person61& p2)同样也可以
template<> bool MyCompare61(Person61& p1, Person61& p2)
{
	return p1.name == p2.name && p1.age == p2.age;
}

/*====================================函数定义====================================*/
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