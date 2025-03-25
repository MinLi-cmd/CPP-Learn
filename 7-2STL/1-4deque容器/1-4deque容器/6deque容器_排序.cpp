/*
deque ����
	����������
		�����㷨ʵ�ֶ�deque������������
	�㷨��
		sort(iterator beg, iterator end) //��beg��end������Ԫ�ؽ�������
	�ܽ᣺sort�㷨�ǳ�ʵ�ã�ʹ��ʱ����ͷ�ļ� algorithm����
*/
#include <iostream>
#include <deque>
#include <algorithm>

void PrintDeque61(const std::deque<int>& _d)
{
	for (std::deque<int>::const_iterator it = _d.begin(); it != _d.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_DequeSort(void)
{
	std::deque<int> d1;
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2)
		{
			d1.push_back(i * i);
		}
		else
		{
			d1.push_front(i * i);
		}
	}

	std::cout << "����֮ǰ��";
	PrintDeque61(d1);

	//Ĭ����������
	std::sort(d1.begin(), d1.end());

	std::cout << "����֮��";
	PrintDeque61(d1);

	std::cout << std::endl;

	int arr[10] = { 12,43,2,45,13,646,23,43,312,666 };
	std::cout << "����֮ǰ��";
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::sort(&arr[0], &arr[9]);

	std::cout << "����֮��";
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}