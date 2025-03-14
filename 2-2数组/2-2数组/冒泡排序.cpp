/*
* 利用冒泡排序实现升序序列
*/

#include <iostream>
using namespace std;

void Study_MaoPao(void)
{
	int Arr_Start[] = { 4,2,8,0,5,7,1,3,9,10,13,12,11 };
	int temp;
	unsigned int YuanSu_GeShu = sizeof(Arr_Start) / sizeof(Arr_Start[0]);
	cout << "原数组元素排序：" << endl;
	for (unsigned int i = 0; i < YuanSu_GeShu; i++)
	{
		cout << Arr_Start[i] << "\t";
	}
	cout << endl;

	for (unsigned int i = 0; i < YuanSu_GeShu - 1; i++)
	{
		for (unsigned int j = 0; j < YuanSu_GeShu - i - 1; j++)
			{
				if (Arr_Start[j] > Arr_Start[j + 1])
				{
					temp = Arr_Start[j];
					Arr_Start[j] = Arr_Start[j + 1];
					Arr_Start[j + 1] = temp;
				}
			}
	}
	
	cout << "冒泡排序后的数组元素排序：" << endl;
	for (unsigned int i = 0; i < YuanSu_GeShu; i++)
	{
		cout << Arr_Start[i] << "\t";
	}
	cout << endl;
}