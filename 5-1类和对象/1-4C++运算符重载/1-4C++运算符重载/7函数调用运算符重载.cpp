/*
* ���������������()��Ҳ��������
* �������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
* �º���û�й̶�д�����ǳ����
*/

#include <iostream>
using namespace std;

#define MyPrint MyPrint7
#define MyAdd MyAdd7

class MyPrint
{
public:
	void operator ()(string str);
};

class MyAdd
{
public:
	int operator ()(int num1, int num2);
};

void CallFunction_test_print(string str);

/*=========����������������صĺ������=========*/

void Study_OperatorOverloading_CallFunction(void)
{
	MyPrint myprint;
	myprint("Hello World!");/*����ʹ�������ǳ������ں������ã���˳�Ϊ�º���*/
	CallFunction_test_print("Hello World!");//�����ĵ���

	MyAdd myadd;
	int sum = myadd(100, 200);
	cout << "sum = " << sum << endl;

	/*===������������===*/
	cout << MyAdd()(300, 400) << endl;/* ����(���캯�����ز���) */

}

/*=========������ʵ��=========*/

void MyPrint::operator ()(string str)
{
	cout << str << endl;
}

int MyAdd::operator ()(int num1, int num2)
{
	return num1 + num2;
}

void CallFunction_test_print(string str)
{
	cout << str << endl;
}