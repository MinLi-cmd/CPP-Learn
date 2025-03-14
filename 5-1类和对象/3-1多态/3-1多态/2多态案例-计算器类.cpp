#include "函数声明库.h"

/*
* 分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
* 
* 多态的优点：
* 1.代码组织结构清晰
* 2.可读性强
* 3.利用前期和后期的扩展以及维护
* 
* 普通写法如果想要扩展新的功能，需要修改源码
* 在真实开发中 提倡 开闭原则
* 开闭原则：对扩展进行开发，对修改进行关闭
*/

void Calculator_CommonWriting(void);
void Calculator_PolymorphicWriting(void);

/*=========案例-计算器的函数入口=========*/
void Study_AnLi_Calculator(void)
{
	Calculator_CommonWriting();
	cout << endl;
	Calculator_PolymorphicWriting();
}

/*==============================================分割线==============================================*/

/*=======================================普通写法=======================================*/
/*=========类声明=========*/
class Calculator21
{
public:
	LL_int GetResult(string oper);
	Calculator21(void);
	LL_int m_num1;
	LL_int m_num2;
};

/*=========普通写法的函数入口=========*/
void Calculator_CommonWriting(void)
{
	Calculator21 c1;
	cout << c1.m_num1 << " + " << c1.m_num2 << " = " << c1.GetResult("+") << endl;
	cout << c1.m_num1 << " - " << c1.m_num2 << " = " << c1.GetResult("-") << endl;
	cout << c1.m_num1 << " * " << c1.m_num2 << " = " << c1.GetResult("*") << endl;
	cout << c1.m_num1 << " / " << c1.m_num2 << " = " << c1.GetResult("/") << endl;
}

/*=========普通写法 函数的实现=========*/
Calculator21::Calculator21(void)
{
	this->m_num1 = 300;
	this->m_num2 = 100;
}

LL_int Calculator21::GetResult(string oper)
{
	if (oper == "+")
	{
		return this->m_num1 + this->m_num2;
	}
	else if (oper == "-")
	{
		return this->m_num1 - this->m_num2;
	}
	else if (oper == "*")
	{
		return this->m_num1 * this->m_num2;
	}
	else if (oper == "/")
	{
		return this->m_num1 / this->m_num2;
	}
	else
	{
		return 0;
	}
}

/*==============================================分割线==============================================*/

/*=======================================多态技术写法=======================================*/
/*=========类声明=========*/

/*===计算器抽象类===*/
class AbstractCalculator21
{
public:
	AbstractCalculator21(void);
	virtual LL_int GetResult(void);
	LL_int m_num1;
	LL_int m_num2;
};

/*===加法计算器类===*/
class AdditionCalculator21 :public AbstractCalculator21
{
public:
	LL_int GetResult(void);
};

/*===减法计算器类===*/
class SubtractionCalculator21 :public AbstractCalculator21
{
public:
	LL_int GetResult(void);
};

/*===乘法计算器类===*/
class MultiplicationCalculator21 :public AbstractCalculator21
{
public:
	LL_int GetResult(void);
};

/*===除法计算器类===*/
class DivisionCalculator21 :public AbstractCalculator21
{
public:
	LL_int GetResult(void);
};

/*=========多态技术写法的函数入口=========*/

void Calculator_PolymorphicWriting(void)
{
	AbstractCalculator21* sum;

	sum = new AdditionCalculator21;
	cout << sum->m_num1 << " + " << sum->m_num2 << " = " << sum->GetResult() << endl;
	if (sum != NULL)delete sum;

	sum = new SubtractionCalculator21;
	cout << sum->m_num1 << " - " << sum->m_num2 << " = " << sum->GetResult() << endl;
	if (sum != NULL)delete sum;

	sum = new MultiplicationCalculator21;
	cout << sum->m_num1 << " * " << sum->m_num2 << " = " << sum->GetResult() << endl;
	if (sum != NULL)delete sum;

	sum = new DivisionCalculator21;
	cout << sum->m_num1 << " / " << sum->m_num2 << " = " << sum->GetResult() << endl;
	if (sum != NULL)delete sum;
}

/*=========多态技术写法 函数的实现=========*/

/*===计算器抽象类函数===*/
AbstractCalculator21::AbstractCalculator21(void)
{
	//cout << "AbstractCalculator21 构造函数调用" << endl;
	this->m_num1 = 400;
	this->m_num2 = 200;
}

LL_int AbstractCalculator21::GetResult(void)
{
	return 0;
}

/*===加法计算器类函数===*/
LL_int AdditionCalculator21::GetResult(void)
{
	return this->m_num1 + this->m_num2;
}

/*===减法计算器类函数===*/
LL_int SubtractionCalculator21::GetResult(void)
{
	return this->m_num1 - this->m_num2;
}

/*===乘法计算器类函数===*/
LL_int MultiplicationCalculator21::GetResult(void)
{
	return this->m_num1 * this->m_num2;
}

/*===除法计算器类函数===*/
LL_int DivisionCalculator21::GetResult(void)
{
	return this->m_num1 / this->m_num2;
}