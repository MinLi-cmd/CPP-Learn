/*
* 访问权限有三种
* 1.公共权限 public			成员 类内可以访问 类外也可以访问
* 2.保护权限 protected		成员 类内可以访问 类外不可以访问 子类也可以访问父类中的保护内容
* 3.私有权限 private		成员 类内可以访问 类外不可以访问 子类不可以访问父类中的私有内容
* 保护权限和私有权限的区别在继承体现
*/

#include <iostream>
using namespace std;
#include <string>

typedef unsigned long long int ULL_int;

class Person0
{
public:
	//公共权限
	string name;

protected:
	//保护权限
	string Car;

private:
	//私有权限
	ULL_int PassWard;

public:
	void SetValue(void)
	{
		name = "张三";
		Car = "小米su7";
		PassWard = 123456;
	}
	void PrintValue(void)
	{
		cout << "姓名：" << name << endl;
		cout << "车辆：" << Car << endl;
		cout << "密码：" << PassWard << endl;
	}
};

void Study_Lei_FangWenQuanXian(void)
{
	Person0 p1;
	p1.SetValue();
	p1.PrintValue();
}