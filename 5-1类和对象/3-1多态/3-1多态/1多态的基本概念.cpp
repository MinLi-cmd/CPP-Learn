#include "����������.h"

/*
* ��̬��C++���������������֮һ
* ��̬��Ϊ����
* 1.��̬��̬���������� �� ��������� ���ھ�̬��̬�����ú�����
* 2.��̬��̬�������� ���麯�� ʵ������ʱ��̬
* 
* ��̬��̬�Ͷ�̬��̬����
* 1.��̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
* 2.��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ
* 
* ��̬��̬��������
* 1.�м̳й�ϵ
* 2.������д������麯��
* ��д����������ֵ���� ������ �����б� ��ȫ��ͬ
* 
* ��̬��̬ʹ��
* �����ָ��������� ָ���������
*/

/*=========������=========*/

class Animal11
{
public:
	virtual void speak(void);//�麯��
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

/*=========��̬�Ļ�������ĺ������=========*/
void Study_Polymorphic_BasicConception(void)
{
	test11();
}

/*=========��������=========*/

void Animal11::speak(void)
{
	cout << "���﷢������" << endl;
}

void Cat11::speak(void)
{
	cout << "è��������" << endl;
}

void Dog11::speak(void)
{
	cout << "����������" << endl;
}

/*ִ�з��������ĺ��� 
* ��ַ��� �ڱ���׶�ȷ��������ַ
* �����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
*/
void dospeak(Animal11& animal)//�������ָ�������ָ���������ʱ�򣬷�����̬
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