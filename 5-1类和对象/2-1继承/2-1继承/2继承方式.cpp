#include "����������.h"

/*
* �̳з�ʽһ�������֣�
* �������̳�
* �������̳�
* ��˽�м̳�
* �ܽ᣺
* 1.����Ĺ��� ����Ȩ�޳�Ա����̳к���Է��ʣ�˽��Ȩ�޳�Ա���಻���Է���
* 2.����ļ̳з�ʽ��ı�̳й����ĸ����Ա�����ԣ�˽��>����>����
*/

class Base21
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

/*===�����̳�===*/
class Son21 :public Base21
{
public:
	void visit_son1(void);
};

/*===�����̳�===*/
class Son22 :protected Base21
{
public:
	void visit_son2(void);
};

/*===˽�м̳�===*/
class Son23 :private Base21
{
public:
	void visit_son3(void);
};

class GrandSon21 :public Son23
{
public:
	void visit_GrandSon1(void);
};

/*=========�̳еļ̳з�ʽ�ĺ������=========*/

void Study_Inheritance_Mode(void)
{
	Son21 s21;
	s21.visit_son1();
	s21.m_a = 100;

	Son22 s22;
	s22.visit_son2();

	Son23 s23;
	s23.visit_son3();

}

/*=========������ʵ��=========*/

void Son21::visit_son1(void)
{
	m_a = 10;	//�����еĹ���Ȩ�޳�Ա �������������ǹ���Ȩ��
	m_b = 20;	//�����еı���Ȩ�޳�Ա �������������Ǳ���Ȩ��
	//m_c = 30;	//�����е�˽��Ȩ�޳�Ա ��������������˽��Ȩ�� ������ʲ��� ����
}

void Son22::visit_son2(void)
{
	m_a = 10;	//�����еĹ���Ȩ�޳�Ա �������б�Ϊ����Ȩ��
	m_b = 30;	//�����еı���Ȩ�޳�Ա �������������Ǳ���Ȩ��
	//m_c = 40;	//�����е�˽��Ȩ�޳�Ա ��������������˽��Ȩ�� ������ʲ��� ����
}

void Son23::visit_son3(void)
{
	m_a = 10;	//�����еĹ���Ȩ�޳�Ա �������б�Ϊ˽��Ȩ��
	m_b = 20;	//�����еı���Ȩ�޳�Ա �������б�Ϊ˽��Ȩ��
	//m_c = 30;	//�����е�˽��Ȩ�޳�Ա ��������������˽��Ȩ�� ������ʲ��� ����
}

void GrandSon21::visit_GrandSon1(void)
{
	//m_a = 10;
}