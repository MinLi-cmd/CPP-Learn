/*
* ˮ�ɻ�����ָһ��3λ��������ÿ��λ�ϵ����ֵ�3����֮�͵���������
* ���磺1^3+5^3+3^3=153
* ��do...while������3λ���е�ˮ�ɻ���
*/
#include <iostream>
using namespace std;

unsigned short ThirdPow(unsigned short num);

void ShuiXianHuaNumber(void)
{
	unsigned short Number, Num, Result[1000] = {0}, i;
	Number = 100;
	Num = 0;
	i = 0;
	cout << "3λ��ˮ�ɻ���Ϊ��";
	do
	{
		Num = ThirdPow(Number / 100) + ThirdPow((Number / 10) % 10) + ThirdPow(Number % 10);
		if (Num == Number)
		{
			Result[i] = Number;
			i++;
		}
		Number++;
	} while (Number < 1000);
	for (unsigned short k = 0; k < i; k++)
	{
		cout << Result[k] << " ";
	}
	cout << endl;
}

unsigned short ThirdPow(unsigned short num)
{
	return num * num * num;
}