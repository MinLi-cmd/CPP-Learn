#include "函数声明库.h"

/*
* 父类中所有非静态成员属性都会被子类继承下去
* 父类中私有成员属性 是被编译器给隐藏了 因此是访问不到的 但是确实被继承下去了
* 利用 开发者命令提示符工具（Developer Command Prompt） 查看对象模型
* 在>后输入cd D:\C语言\练习\C++Project\5-1类和对象\2-1继承\2-1继承 （跳转到文件所在路径）
* 在>后输入dir 查看目录
* 在>后输入cl /d1 reportSingleClassLayoutSon31(类名) 3继承中对象模型.cpp(文件名 table键补全) 
*（report 报告;Single 单个的;Class 类;Layout 布局;reportSingleClassLayout报告单个类布局）
*/

/*=========类声明=========*/

class Base31
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class Son31 :public Base31
{
public:
	int m_a;
};

/*=========继承中对象模型的函数入口=========*/

void Study_Inheritance_DuiXiangMuXing(void)
{
	Base31 b31;
	Son31 s31;
	cout << sizeof(b31) << endl;//12
	cout << sizeof(s31) << endl;//16
}

/*=========函数的实现=========*/