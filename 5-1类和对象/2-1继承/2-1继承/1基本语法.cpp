/*
* �̳������������������֮һ
* �̳еĺô��������ظ�����
* 
* �﷨��class ���� :�̳з�ʽ ����
* �﷨��class A :public b {};
* 
* A���Ϊ ���� �� ������
* B���Ϊ ���� �� ����
* ���� Ҳ��Ϊ ������
* ���� Ҳ��Ϊ ����
* 
* �������еĳ�Ա �������󲿷�
* һ���Ǵӻ���̳й����ģ�һ�����Լ����ӵĳ�Ա
* �ӻ���̳й����ı����乲�ԣ��������ĳ�Ա�����������
*/

#include "����������.h"

#define BasePage BasePage1

/*===����ҳ����===*/
class BasePage
{
public:
	void Header(void);
	void Footer(void);
	void Left(void);
};

/*===Javaҳ����===*/
class Java :public BasePage
{
public:
	void Content(void);
};

/*===Pythonҳ����===*/
class Python :public BasePage
{
public:
	void Content(void);
};

/*===C++ҳ����===*/
class CPP :public BasePage
{
public:
	void Content(void);
};

void Func_FGX(int FGXCount,char FGXClass);

/*=========�̳еĻ����﷨�ĺ������=========*/

void Study_Inheritance_BaseGrammar(void)
{
	int FGXCount = 50;
	char FGXClass = '=';

	Func_FGX(FGXCount, FGXClass);

	cout << "Java������Ƶҳ������" << endl;
	Java ja;
	ja.Header();
	ja.Footer();
	ja.Left();
	ja.Content();

	Func_FGX(FGXCount, FGXClass);

	cout << "Python������Ƶҳ������" << endl;
	Python py;
	py.Header();
	py.Footer();
	py.Left();
	py.Content();

	Func_FGX(FGXCount, FGXClass);
	
	cout << "C++������Ƶҳ������" << endl;
	CPP cpp;
	cpp.Header();
	cpp.Footer();
	cpp.Left();
	cpp.Content();

	Func_FGX(FGXCount, FGXClass);
}

/*=========������ʵ��=========*/

/*===����ҳ���ຯ��ʵ��===*/
void BasePage::Header(void)
{
	cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
}

void BasePage::Footer(void)
{
	cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
}

void BasePage::Left(void)
{
	cout << "Java��Python��C++...�����������б�" << endl;
}

/*===Javaҳ���ຯ��ʵ��===*/
void Java::Content(void)
{
	cout << "Javaѧ����Ƶ" << endl;
}

/*===Pythonҳ���ຯ��ʵ��===*/
void Python::Content(void)
{
	cout << "Pythonѧ����Ƶ" << endl;
}

/*===C++ҳ���ຯ��ʵ��===*/
void CPP::Content(void)
{
	cout << "C++ѧ����Ƶ" << endl;
}

/*===�ָ��ߺ���===*/
void Func_FGX(int FGXCount,char FGXClass)
{
	for (int i = 0; i < FGXCount; i++)
		cout << FGXClass;
	cout << endl;
}