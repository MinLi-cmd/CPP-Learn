/*
* 封装一个函数，利用冒泡排序，实现对整形数组的升序排序
* 例如数组：int arr[10]={4,3,6,9,1,2,10,8,7,5};
*/

#include <iostream>
using namespace std;

void Study_ZhiZhen_MaoPao(int* arr, int GeShu);
void PrintArray(int* arr, int YuanSu_GeShu);

void Study_ZhiZhen_MaoPao_main(void)
{
	int arr[] = { 4,3,6,9,1,2,10,8,7,5,13,11,12 };
	int YuanSu_GeShu;
	YuanSu_GeShu = sizeof(arr) / sizeof(arr[0]);

	cout << "原数组排序：" << endl;
	PrintArray(arr, YuanSu_GeShu);

	Study_ZhiZhen_MaoPao(arr, YuanSu_GeShu);

	cout << "冒泡后数组排序：" << endl;
	PrintArray(arr, YuanSu_GeShu);
}
 
void Study_ZhiZhen_MaoPao(int* arr, int GeShu)
{
	int temp;
	for (int i = 0; i < GeShu - 1; i++)
	{
		for (int j = 0; j < GeShu - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void PrintArray(int *arr,int YuanSu_GeShu)
{
	for (int i = 0; i < YuanSu_GeShu; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}