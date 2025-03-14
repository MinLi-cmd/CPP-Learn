/*
* 水仙花数是指一个3位数，它的每个位上的数字的3次幂之和等于它本身
* 例如：1^3+5^3+3^3=153
* 用do...while语句求出3位数中的水仙花数
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
	cout << "3位数水仙花数为：";
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