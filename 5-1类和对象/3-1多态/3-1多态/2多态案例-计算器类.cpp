#include "����������.h"

/*
* �ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������
* 
* ��̬���ŵ㣺
* 1.������֯�ṹ����
* 2.�ɶ���ǿ
* 3.����ǰ�ںͺ��ڵ���չ�Լ�ά��
* 
* ��ͨд�������Ҫ��չ�µĹ��ܣ���Ҫ�޸�Դ��
* ����ʵ������ �ᳫ ����ԭ��
* ����ԭ�򣺶���չ���п��������޸Ľ��йر�
*/

void Calculator_CommonWriting(void);
void Calculator_PolymorphicWriting(void);

/*=========����-�������ĺ������=========*/
void Study_AnLi_Calculator(void)
{
	Calculator_CommonWriting();
	cout << endl;
	Calculator_PolymorphicWriting();
}

/*==============================================�ָ���==============================================*/

/*=======================================��ͨд��=======================================*/
/*=========������=========*/
class Calculator21
{
public:
	LL_int GetResult(string oper);
	Calculator21(void);
	LL_int m_num1;
	LL_int m_num2;
};

/*=========��ͨд���ĺ������=========*/
void Calculator_CommonWriting(void)
{
	Calculator21 c1;
	cout << c1.m_num1 << " + " << c1.m_num2 << " = " << c1.GetResult("+") << endl;
	cout << c1.m_num1 << " - " << c1.m_num2 << " = " << c1.GetResult("-") << endl;
	cout << c1.m_num1 << " * " << c1.m_num2 << " = " << c1.GetResult("*") << endl;
	cout << c1.m_num1 << " / " << c1.m_num2 << " = " << c1.GetResult("/") << endl;
}

/*=========��ͨд�� ������ʵ��=========*/
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

/*==============================================�ָ���==============================================*/

/*=======================================��̬����д��=======================================*/
/*=========������=========*/

/*===������������===*/
class AbstractCalculator21
{
public:
	AbstractCalculator21(void);
	virtual LL_int GetResult(void);
	LL_int m_num1;
	LL_int m_num2;
};

/*===�ӷ���������===*/
class AdditionCalculator21 :public AbstractCalculator21
{
public:
	LL_int GetResult(void);
};

/*===������������===*/
class SubtractionCalculator21 :public AbstractCalculator21
{
public:
	LL_int GetResult(void);
};

/*===�˷���������===*/
class MultiplicationCalculator21 :public AbstractCalculator21
{
public:
	LL_int GetResult(void);
};

/*===������������===*/
class DivisionCalculator21 :public AbstractCalculator21
{
public:
	LL_int GetResult(void);
};

/*=========��̬����д���ĺ������=========*/

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

/*=========��̬����д�� ������ʵ��=========*/

/*===�����������ຯ��===*/
AbstractCalculator21::AbstractCalculator21(void)
{
	//cout << "AbstractCalculator21 ���캯������" << endl;
	this->m_num1 = 400;
	this->m_num2 = 200;
}

LL_int AbstractCalculator21::GetResult(void)
{
	return 0;
}

/*===�ӷ��������ຯ��===*/
LL_int AdditionCalculator21::GetResult(void)
{
	return this->m_num1 + this->m_num2;
}

/*===�����������ຯ��===*/
LL_int SubtractionCalculator21::GetResult(void)
{
	return this->m_num1 - this->m_num2;
}

/*===�˷��������ຯ��===*/
LL_int MultiplicationCalculator21::GetResult(void)
{
	return this->m_num1 * this->m_num2;
}

/*===�����������ຯ��===*/
LL_int DivisionCalculator21::GetResult(void)
{
	return this->m_num1 / this->m_num2;
}