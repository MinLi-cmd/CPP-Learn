#include <iostream>
using namespace std;

#define Person Person2

class Person
{
public:
	/*
	* 1.���캯��
	* û�з���ֵ ����дvoid
	* ������ ��������ͬ
	* ���캯�������в��������Է�������
	* ���������ʱ�򣬹��캯�����Զ����ã�����ֻ����һ��
	*/
	Person()
	{
		cout << "Person ���캯���ĵ���" << endl;
	}

	/*
	* 2.��������
	* û�з���ֵ ����дvoid
	* ��������������ͬ ������ǰ�� ~
	* ���������������в����������Է�������
	* ����������ǰ ���Զ�������������������ֻ�ᷢ��һ��
	*/
	~Person()
	{
		cout << "Person ���������ĵ���" << endl;
	}
};

void Study_HanShu_GouZaoAndXiGou(void)
{
	Person p1;//����������Ż��������������ջ�ϵ�����
}


