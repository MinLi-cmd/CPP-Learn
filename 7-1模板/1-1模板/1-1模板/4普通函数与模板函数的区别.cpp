/*
* 1����ͨ�������ÿ��Է�����ʽ����ת��
* 2������ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
* 3������ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��
* 
* �ܽ᣺����ʹ����ʾָ�����͵ķ�ʽ�����ú���ģ�壬��Ϊ�����Լ�ȷ��ͨ������T
*/

#include "0����������.h"

int MyAdd41(int a, int b);

template<typename T>
T MyAdd42(T a, T b);

void Study_MuBanYuPuTongHanShuQuBie(void)
{
	int a = 10, b = 20;
	char c = 'c';
	cout << MyAdd41(a, c) << endl;

	//�Զ������Ƶ�	�����Է�����ʽ����ת��
	//cout << MyAdd42(a, c) << endl;

	//��ʾָ������	���Է�����ʽ����ת��
	cout << MyAdd42<int>(a, c) << endl;
}	

int MyAdd41(int a, int b)
{
	return a + b;
}

template<typename T>
T MyAdd42(T a, T b)
{
	return a + b;
}

