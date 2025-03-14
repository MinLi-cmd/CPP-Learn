/*
* 在一个数组中记录了五只小猪的体重
* 如：int arr[5]={300,350,200,400,250}
* 找出并且打印最重的小猪的体重
*/

#include<iostream>
using namespace std;

void Study_FindPig(void)
{
	int arr[5] = { 300,350,200,400,250 };
	int temp[6] = { 0 };
	int i, j;
	for (i = 0, j = 1; i < 5; i++)
	{
		if (arr[i] > arr[j])
		{
			j = i;
		}
	}
	cout <<"第"<<j+1<<"只小猪最重，体重为：" << arr[j] << endl;
}