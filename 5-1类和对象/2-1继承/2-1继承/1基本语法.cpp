/*
* 继承是面向对象三大特性之一
* 继承的好处：减少重复代码
* 
* 语法：class 子类 :继承方式 父类
* 语法：class A :public b {};
* 
* A类称为 子类 或 派生类
* B类称为 父类 或 基类
* 子类 也称为 派生类
* 父类 也称为 基类
* 
* 派生类中的成员 包含两大部分
* 一类是从基类继承过来的，一类是自己增加的成员
* 从基类继承过来的表现其共性，而新增的成员体现了其个性
*/

#include "函数声明库.h"

#define BasePage BasePage1

/*===公共页面类===*/
class BasePage
{
public:
	void Header(void);
	void Footer(void);
	void Left(void);
};

/*===Java页面类===*/
class Java :public BasePage
{
public:
	void Content(void);
};

/*===Python页面类===*/
class Python :public BasePage
{
public:
	void Content(void);
};

/*===C++页面类===*/
class CPP :public BasePage
{
public:
	void Content(void);
};

void Func_FGX(int FGXCount,char FGXClass);

/*=========继承的基本语法的函数入口=========*/

void Study_Inheritance_BaseGrammar(void)
{
	int FGXCount = 50;
	char FGXClass = '=';

	Func_FGX(FGXCount, FGXClass);

	cout << "Java下载视频页面如下" << endl;
	Java ja;
	ja.Header();
	ja.Footer();
	ja.Left();
	ja.Content();

	Func_FGX(FGXCount, FGXClass);

	cout << "Python下载视频页面如下" << endl;
	Python py;
	py.Header();
	py.Footer();
	py.Left();
	py.Content();

	Func_FGX(FGXCount, FGXClass);
	
	cout << "C++下载视频页面如下" << endl;
	CPP cpp;
	cpp.Header();
	cpp.Footer();
	cpp.Left();
	cpp.Content();

	Func_FGX(FGXCount, FGXClass);
}

/*=========函数的实现=========*/

/*===公共页面类函数实现===*/
void BasePage::Header(void)
{
	cout << "首页、公开课、登录、注册...（公共头部）" << endl;
}

void BasePage::Footer(void)
{
	cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
}

void BasePage::Left(void)
{
	cout << "Java、Python、C++...（公共分类列表）" << endl;
}

/*===Java页面类函数实现===*/
void Java::Content(void)
{
	cout << "Java学科视频" << endl;
}

/*===Python页面类函数实现===*/
void Python::Content(void)
{
	cout << "Python学科视频" << endl;
}

/*===C++页面类函数实现===*/
void CPP::Content(void)
{
	cout << "C++学科视频" << endl;
}

/*===分隔线函数===*/
void Func_FGX(int FGXCount,char FGXClass)
{
	for (int i = 0; i < FGXCount; i++)
		cout << FGXClass;
	cout << endl;
}