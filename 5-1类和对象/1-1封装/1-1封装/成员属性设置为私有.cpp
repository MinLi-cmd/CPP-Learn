/*
* 成员属性设置为私有
* 1.可以自己控制读写权限
* 2.对于写可以检测数据有效性
*/
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>

typedef unsigned long long int ULL_int;

class Person1
{
public://公共权限
	//设置姓名
	void setname(string name)
	{
		p_name = name;
	}
	//获取姓名
	string getname(void)
	{
		return p_name;
	}
	//设置年龄（0~150）
	void setage(int age)
	{
		if (age >= 0 && age <= 150)
		{
			p_age = age;
		}
		else
		{
			cout << "年龄设置无效" << endl;
		}
	}
	//获取年龄
	int getage(void)
	{
		return p_age;
	}
	//写新的密码
	void writepassward(ULL_int newpassward)
	{
		p_passward = newpassward;
	}

private://私有权限
	
	string p_name;//名字			可读 可写
	int p_age = 0;//年龄			只读 也可以写（年龄必须在0~150之间）
	ULL_int p_passward = 0;//密码	只写	

};

void Study_Lei_MemberAmend(void)
{
	Person1 p1{};
	ULL_int passward;
	int Inage;
	p1.setname("张三");
	cout << "请输入年龄：";
	cin >> Inage;
	p1.setage(Inage);
	cout << "姓名：" << p1.getname() << endl;
	cout << "年龄：" << p1.getage() << endl;
	cout << "请输入新密码(最多19位)：";
	cin >> passward;
	p1.writepassward(passward);
	cout << "新密码已写入" << endl;
}