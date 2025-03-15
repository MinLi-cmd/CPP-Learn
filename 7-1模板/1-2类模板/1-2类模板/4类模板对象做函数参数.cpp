/*
* ��ģ��ʵ�������Ķ����������εķ�ʽ
* 
* һ�������ִ��뷽ʽ
* 1.ָ�����������	����	ֱ����ʾ�������������
* 2.����ģ�廯		����	�������еĲ�����Ϊģ����д���
* 3.������ģ�廯	����	������������� ģ�廯���д���
* 
* �ܽ᣺
* 1.ͨ����ģ�崴���Ķ��󣬿��������ַ�ʽ�����н��д���
* 2.ʹ�ñȽϹ㷺�ǵ�һ�֣�ָ�����������
*/
#include "0����������.h"

/*====================================��ģ��====================================*/
template<class T1, class T2>
class Person41
{
public:

	Person41(T1 name,T2 age)
	{
		this->_name = name;
		this->_age = age;
	}

	void ShowPerson(void)
	{
		cout << "name: " << this->_name << "\n" << "age: " << this->_age << endl;
	}

	T1 _name;
	T2 _age;
};

/*====================================����ģ��====================================*/
//1��ָ����������
void PrintPerson41(Person41<string,int> &p)
{
	p.ShowPerson();
	cout <<"p������Ϊ��" << typeid(p).name() << endl;
}
void PrintPerson41(Person41<string, double>& p)
{
	p.ShowPerson();
	cout << "p������Ϊ��" << typeid(p).name() << endl;
}

void test41(void)
{
	Person41<string, int> p("�����", 1000);
	Person41<string, double> p1("�����", 1000);
	PrintPerson41(p);
	PrintPerson41(p1);
}

//2������ģ�廯
template<class Y1, class Y2>	//���ֿ�����T1,T2
void PrintPerson42(Person41<Y1,Y2> &p)
{
	p.ShowPerson();
	cout << "Y1������Ϊ��" << typeid(Y1).name() << endl;
	cout << "Y2������Ϊ��" << typeid(Y2).name() << endl;
	cout << "p������Ϊ��" << typeid(p).name() << endl;
}

void test42(void)
{
	Person41<string, int> p("�����", 1000);
	PrintPerson42(p);
}

//3��������ģ�廯
template<class T1>
void PrintPerson43(T1& p)
{
	p.ShowPerson();
	cout << "p������Ϊ��" << typeid(p).name() << endl;
}
void test43(void)
{
	Person41<string, int> p("�����", 1000);
	PrintPerson43(p);
}

/*====================================��ģ�����������������ں���====================================*/
void Study_LeiMuBanDuiXiangZuoHanShuCanShu(void)
{
	CoutLine('=', 50); cout << "1.ָ����������"; CoutLine('=', 50); cout << endl;

	test41();

	CoutLine('=', 51); cout << "2.����ģ�廯"; CoutLine('=', 51); cout << endl;

	test42();

	CoutLine('=', 50); cout << "3.������ģ�廯"; CoutLine('=', 50); cout << endl;

	test43();

	CoutLine('=', 57); cout << "END"; CoutLine('=', 57); cout << endl;
}
