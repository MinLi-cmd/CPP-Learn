#include "����������.h"

/*
* ���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
* ������˽�г�Ա���� �Ǳ��������������� ����Ƿ��ʲ����� ����ȷʵ���̳���ȥ��
* ���� ������������ʾ�����ߣ�Developer Command Prompt�� �鿴����ģ��
* ��>������cd D:\C����\��ϰ\C++Project\5-1��Ͷ���\2-1�̳�\2-1�̳� ����ת���ļ�����·����
* ��>������dir �鿴Ŀ¼
* ��>������cl /d1 reportSingleClassLayoutSon31(����) 3�̳��ж���ģ��.cpp(�ļ��� table����ȫ) 
*��report ����;Single ������;Class ��;Layout ����;reportSingleClassLayout���浥���಼�֣�
*/

/*=========������=========*/

class Base31
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class Son31 :public Base31
{
public:
	int m_a;
};

/*=========�̳��ж���ģ�͵ĺ������=========*/

void Study_Inheritance_DuiXiangMuXing(void)
{
	Base31 b31;
	Son31 s31;
	cout << sizeof(b31) << endl;//12
	cout << sizeof(s31) << endl;//16
}

/*=========������ʵ��=========*/