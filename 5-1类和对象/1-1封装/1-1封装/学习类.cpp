#include <iostream>
using namespace std;

/*
* 设计一个圆类，求圆的周长
* 圆求周长的公式：2 * PI * 半径
*/

const double PI = 3.14159;

class Circle//class代表设计一个类，类后面紧跟着的就是类名称圆：Circle
{
	//访问权限
	//公共权限
public:

	//属性
	int m_r;

	//行为
	//获取圆的周长
	double CalculatePerimeter(void)//计算周长
	{
		return 2 * PI * m_r;
	}	
};

void Study_Lei_Learn(void)
{
	//通过圆类，创建一个具体的圆（对象）
	//实例化	通过一个类创建一个对象的过程
	Circle c1{10};

	//给圆对象 的属性进行赋值
	c1.m_r = 10;

	cout << "圆c1的周长为：" << c1.CalculatePerimeter() << endl;
}