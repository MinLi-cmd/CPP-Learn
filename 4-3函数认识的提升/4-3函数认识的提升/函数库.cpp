#include <iostream>
using namespace std;
#include "������.h"

int test01_sum(int a, int b = 20, int c = 30);
void test02_zhan(int a, int);
void test03_chongzai(void);
void test03_chongzai(int a);
void test03_chongzai(int a, double b);
void test03_chongzai(double b, int a);
void test_04_chongzai_yinyong(int& a);
void test_04_chongzai_yinyong(const int& a);
void test05_chongzai_morencanshu(int a);
void test05_chongzai_morencanshu(int a, int b = 10);




/*
* ������Ĭ�ϲ���
* * �������������ĳ��λ������Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
* ����int test01_sum(int a, int b = 20, int c)��仰�ǻᱨ���
* ��������ʱ����Ĭ�ϲ�������������Ͳ����Ը���Ĭ�ϲ���
* ��������ʱ����Ĭ�ϲ�������������Ͳ����Ը���Ĭ�ϲ���
*/

void Study_HanShu_MoRenCanShu(void)
{
	cout << test01_sum(10,50) << endl;
}

int test01_sum(int a, int b, int c)
{
	cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
	return a + b + c;
}

/*
* ����ռλ
*/
void Study_HanShu_ZhanWei(void)
{
	test02_zhan(10,20);
}

void test02_zhan(int a, int)
{
	cout << "This is test02_zhan" << endl;
}

/*
* ��������
* ���ã��������ֿ�����ͬ����߸�����
* ������������������
* 1.ͬһ����������
* 2.����������ͬ
* 3.�������� ���Ͳ�ͬ ���� ������ͬ ���� ˳��ͬ
* ע�⣺�����ķ���ֵ��������Ϊ�������ص�����
*/
void Study_HanShu_ChongZai(void)
{
	test03_chongzai();
	test03_chongzai(10);
	test03_chongzai(10,2.12);
	test03_chongzai(2.12,10);
}

void test03_chongzai(void)//ȫ�������򣬲������κκ�������ķ�Χ
{
	cout << "�޲�test03_chongzai(void)�ĵ���" << endl;
}
void test03_chongzai(int a)//ȫ�������򣬲������κκ�������ķ�Χ
{
	cout << "�в�test03_chongzai(int a)�ĵ���!" << endl;
}

void test03_chongzai(int a, double b)//ȫ�������򣬲������κκ�������ķ�Χ
{
	cout << "�в�test03_chongzai(int a, double b)�ĵ���!" << endl;
}

void test03_chongzai(double b, int a)//ȫ�������򣬲������κκ�������ķ�Χ
{
	cout << "�в�test03_chongzai(double b, int a)�ĵ���!" << endl;
}

/*
* �������ص�ע������
* ������Ϊ��������
* ����������������Ĭ������
*/
void Study_HanShu_ChongZai_ZhuYi(void)
{
	int a = 10;
	test_04_chongzai_yinyong(a);
	test_04_chongzai_yinyong(10);
	const int b = 20;
	test_04_chongzai_yinyong(b);
}

void test_04_chongzai_yinyong(int& a)
{
	cout << "test04_chongzai_yinyong(int& a)�ĵ���!" << endl;
}

void test_04_chongzai_yinyong(const int& a)
{
	cout << "test04_chongzai(const int& a)�ĵ���!" << endl;
}

/*
* ������������Ĭ�ϲ���
*/

void Study_HanShu_ChongZai_MoRenCanShu(void)
{
	int value = 10;
	//test05_chongzai_morencanshu(value);//�����ԣ����������������ص�ͬʱ����Ĭ�ϲ���
}

void test05_chongzai_morencanshu(int a)
{

}
void test05_chongzai_morencanshu(int a, int b = 10)
{

}
