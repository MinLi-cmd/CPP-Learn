#include "����������.h"
/*
* �ڶ�̬�У�ͨ���������麯����ʵ����������ģ���Ҫ���ǵ���������д������
* ��˿��Խ��麯����Ϊ���麯��
* ���麯���﷨��virtual ����ֵ���� ������ (�����б�) = 0;
* ���������˴��麯���������Ҳ��Ϊ������
* 
* �������ص㣺
* 1.�޷�ʵ��������
* 2.���������д�������еĴ��麯��������Ҳ���ڳ�����
*/


/*=========������=========*/

class Base31
{
public:
	virtual void func(void) = 0;
};

class Son31 :public Base31
{
public:
	void func(void)
	{
		cout << "Son31 ��func��������" << endl;
	}
};

/*=========���麯���ͳ�����ĺ������=========*/

void Study_PureVirtualFunctionAndAbstractClass(void)
{
	//Base31 b1;	//���� ������ʹ�ó���������"Base31"�Ķ��� ����"Base31::func(void)"�Ǵ����⺯��
	//new Base31;	//���� ������ʹ�ó���������"Base31"�Ķ��� ����"Base31::func(void)"�Ǵ����⺯��
	Base31* b1 = new Son31;
	b1->func();

	cout << (LL_int)b1 << endl;
	delete b1;
	cout << (LL_int)b1 << endl;
}

/*=========����ʵ��=========*/

