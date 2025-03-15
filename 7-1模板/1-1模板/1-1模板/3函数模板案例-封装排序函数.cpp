/*
* 利用函数模板封装一个排序的函数，可以对不同的数据类型数组进行排序
* 排序规则为从大到小，排序算法为选择排序
* 分别利用char数组和int数组进行测试
*/

#include"0函数声明库.h"

template<typename T>
void Array_PaiXu(T arr[],int Count);

template<typename T>
void ShowArray(T arr[],int Count);

template <typename T>
void SwapArray(T& a, T& b);

void Study_MuBan_PaiXuFunction(void)
{
	char line = '=';
	ULL_int count = 30;
	int arr1[] = { 3,5,8,2,10,23,24,19,20,7 };
	char arr2[] = { 'a','c','e','b','f','g' };
	int count_intarr = sizeof(arr1) / sizeof(arr1[0]);
	int count_chararr = sizeof(arr2) / sizeof(arr2[0]);

	CoutLine(line, count);

	cout << "排序前：" << endl;
	ShowArray<int>(arr1, count_intarr);
	ShowArray(arr2, count_chararr);
	CoutLine(line, count);
	Array_PaiXu(arr1, count_intarr);
	Array_PaiXu(arr2, count_chararr);
	cout << "排序后：" << endl;
	ShowArray(arr1, count_intarr);
	ShowArray(arr2, count_chararr);
	CoutLine(line, count);
}


template<typename T>
void Array_PaiXu(T arr[], int Count)
{
	int i, j, k;
	for (i = 0; i < Count-1; i++)
	{
		k = i;
		for (j = i; j < Count; j++)
		{
			if (arr[j] >= arr[k])
			{
				k = j;
			}
		}
		SwapArray(arr[i], arr[k]);
	}
}

template <typename T>
void SwapArray(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void ShowArray(T arr[], int Count)
{
	for (int i = 0; i < Count; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}