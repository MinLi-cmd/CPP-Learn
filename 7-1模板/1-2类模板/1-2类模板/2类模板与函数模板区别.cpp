/*
* ��ģ���뺯��ģ��������Ҫ�����㣺
* 1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
* 2.��ģ����ģ������б��п�����Ĭ�ϲ���
* 
* �ܽ᣺
* 1.��ģ��ʹ��ֻ������ʾָ�����ͷ�ʽ
* 2.��ģ���е�ģ������б������Ĭ�ϲ���
*/


#include "0����������.h"

template<class NameType = string,class AgeType = int>
class Person21
{
public:
	Person21(NameType name,AgeType age)
	{
		this->name = name;
		this->age = age;
	}

	void ShowPerson(void)
	{
		cout << "����Ϊ��" << this->name << "\n" << "����Ϊ��" << this->age << endl;
	}

	NameType name;
	AgeType age;
};

void Study_LeiMuBanYuHanShuMuBanQuBie(void)
{
	//Person21 p("�����", 1000);//������ģ��û���Զ������Ƶ�
	Person21<string, int> p1("�����", 999);
	Person21<> p2("��˽�",1000);//Person21 p2("��˽�",1000);����
	p1.ShowPerson();
	p2.ShowPerson();
}
