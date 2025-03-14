#include "函数声明库.h"

/*
* 多态是C++面向对象三大特性之一
* 多态分为两类
* 1.静态多态：函数重载 和 运算符重载 属于静态多态，复用函数名
* 2.动态多态：派生类 和虚函数 实现运行时多态
* 
* 静态多态和动态多态区别：
* 1.静态多态的函数地址早绑定 - 编译阶段确定函数地址
* 2.动态多态的函数地址晚绑定 - 运行阶段确定函数地址
* 
* 动态多态满足条件
* 1.有继承关系
* 2.子类重写父类的虚函数
* 重写：函数返回值类型 函数名 参数列表 完全相同
* 
* 动态多态使用
* 父类的指针或者引用 指向子类对象
*/

/*=========类声明=========*/

class Animal11
{
public:
	virtual void speak(void);//虚函数
};

class Cat11 :public Animal11
{
public:
	void speak(void);
};

class Dog11 :public Animal11
{
public:
	void speak(void);
};

void dospeak(Animal11& animal);

void test11(void);
void test12(void);

/*=========多态的基本概念的函数入口=========*/
void Study_Polymorphic_BasicConception(void)
{
	test11();
}

/*=========函数定义=========*/

void Animal11::speak(void)
{
	cout << "动物发出叫声" << endl;
}

void Cat11::speak(void)
{
	cout << "猫发出叫声" << endl;
}

void Dog11::speak(void)
{
	cout << "狗发出叫声" << endl;
}

/*执行发出叫声的函数 
* 地址早绑定 在编译阶段确定函数地址
* 如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
*/
void dospeak(Animal11& animal)//当父类的指针或引用指向子类对象时候，发生多态
{
	animal.speak();
}

void test11(void)
{
	Cat11 cat;
	Dog11 dog;
	dospeak(cat);
	dospeak(dog);
}

void test12(void)
{
	cout << "sizeof(Animal11) = " << sizeof(Animal11) << endl;
	cout << "sizeof(Cat11) = " << sizeof(Cat11) << endl;
	cout << "sizeof(Dog11) = " << sizeof(Dog11) << endl;
}