/*
* 案例描述：实现一个通用的数组类，要求如下：
* 1.可以对内置数据类型以及自定义数据类型的数据进行存储
* 2.将数组中的数据存储到堆区
* 3.构造函数中可以传入数组的容量
* 4.提供对应的拷贝构造函数以及operator=防止浅拷贝问题
* 5.提供尾插法和尾删法对数组中的数据进行增加和删除
* 6.可以提供下标的方式访问数组中的元素
* 7.可以获取数组中当前元素个数和数组的容量
* 
*/

#include"0函数声明库.h"
#include <iostream>
using namespace std;
#include "9UserArr.hpp"

class Person91
{
public:
	Person91() :_name("1"), _age(0) {}
	Person91(string name, int age) : _name(name), _age(age) {}

	string GetName(void) { return this->_name; }

	int GetAge(void) { return this->_age; }

private:
	string _name;
	int _age;
};

void TestPrint91(UserArr91<int>& u)
{
	for (short i = 0; i < u.GetSize(); i++)
	{
		cout << u[i] << endl;
	}
	cout << "该容器的容量为：" << u.GetCapacity() << endl;
	cout << "该容器中数据个数为：" << u.GetSize() << endl;
}

void TestPrint91(UserArr91<Person91>& u)//重载
{
	for (short i = 0; i < u.GetSize(); i++)
	{
		cout <<"姓名为：" << u[i].GetName() <<"\t年龄为："<<u[i].GetAge() << endl;
	}
	cout << "该容器的容量为：" << u.GetCapacity() << endl;
	cout << "该容器中数据个数为：" << u.GetSize() << endl;
}

void AnLi_ArrClass(void)
{
	CoutLine('=', 50);
	cout << endl;

	UserArr91<int> u1(5);
	for (int i = 0; i < 5; i++)
	{
		u1.PushBlock(i);
	}
	TestPrint91(u1);

	CoutLine('=', 50);
	cout << endl;

	UserArr91<int> u2(u1);
	u2.PopBlock();
	u2.PopBlock();
	TestPrint91(u2);

	CoutLine('=', 50);
	cout << endl;

	UserArr91<Person91> u3(5);

	Person91 p1("张三", 20); u3.PushBlock(p1);
	Person91 p2("李四", 21); u3.PushBlock(p2);
	Person91 p3("王五", 22); u3.PushBlock(p3);
	Person91 p4("赵六", 23); u3.PushBlock(p4);
	Person91 p5("陈七", 24); u3.PushBlock(p5);

	TestPrint91(u3);

	CoutLine('=', 50);
	cout << endl;

}