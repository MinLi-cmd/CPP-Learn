/*
* ��һ�������м�¼����ֻС�������
* �磺int arr[5]={300,350,200,400,250}
* �ҳ����Ҵ�ӡ���ص�С�������
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
	cout <<"��"<<j+1<<"ֻС�����أ�����Ϊ��" << arr[j] << endl;
}