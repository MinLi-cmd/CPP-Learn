/*
* struct 默认权限为公共
* class  默认权限为私有
* class 和 struct 都可以设置权限
*/

#include <iostream>
using namespace std;

struct stu
{
//private://可以这样操作
	int num;
	
	void Print(void)
	{
		cout << num << endl;
	}
};

class c
{
	int num;
};

void Study_LeiAndStruct_Difference(void)
{
	stu stu1{ 0 };
	c c1{};
	stu1.num = 10;
	stu1.Print();
	//c1.num = 10;//报错 显示不可访问
}