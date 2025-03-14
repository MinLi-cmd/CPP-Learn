/*
* 请声明一个5个元素的数组，并且将元素逆置
* 如原数组元素为：1，3，2，5，4；
* 逆置后输出结果为：4，5，2，3，1；
*/

#include <iostream>
using namespace std;

void Study_TurnArray(void)
{
	int Arr_Start[] = { 1,3,2,5,4 };
	int Arr_Result[sizeof(Arr_Start) / sizeof(Arr_Start[0])] = { 0 };
	int temp = (sizeof(Arr_Start) / sizeof(Arr_Start[0]));
	
	for (int i = 0; i < temp; i++)
	{
		Arr_Result[temp - i - 1] = Arr_Start[i];
	}
	cout << "原数组为：" << endl;
	for (int i = 0; i < temp; i++)
	{
		cout << Arr_Start[i] << "\t";
	}
	cout << endl;
	cout << "逆置后数组为：" << endl;
	for (int i = 0; i < temp; i++)
	{
		cout << Arr_Result[i] << "\t";
	}
	cout << endl;
}