/*
* ����ģ�������̳�ʱ����Ҫע�����¼��㣺
* 1.������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ��������T������
* 2.�����ָ�����������޷�����������ڴ�
* 3.��������ָ����������T�����ͣ�����Ҳ���Ϊģ��
*/

#include "0����������.h"

template<class T>
class Base51
{
public:
	Base51()
	{
		this->m = 10;
	}
	Base51(T m)
	{
		this->m = m;
		cout << "�����е�m = " << this->m << endl;
		cout << "������m������Ϊ��" << typeid(m).name() << endl;
	}
	T m;

};

class Son51 :public Base51<int>
{
public:
	Son51(int m)
	{
		this->m = m;
		cout << "�����е�m = " << this->m << endl;
		cout << "������m������Ϊ��" << typeid(m).name() << endl;
	}
};

template <class T1,class T2>
class Son52 :public Base51<T2>
{
public:
	Son52()
	{
		this->m = 'b';
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
	}
	T2 obj;
};

void Study_LeiMuBanYuJiCheng(void)
{
	CoutLine('=', 80); cout << endl;

	Son51 s1(20);

	CoutLine('=', 80); cout << endl;

	Base51<char> b1(97);

	CoutLine('=', 80); cout << endl;

	Son52<int, char> s2;

	cout << s2.m << endl;
	CoutLine('=', 80); cout << endl;

}
