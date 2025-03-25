/*
deque 排序
	功能描述：
		利用算法实现对deque容器进行排序
	算法：
		sort(iterator beg, iterator end) //对beg和end区间内元素进行排序
	总结：sort算法非常实用，使用时包含头文件 algorithm即可
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

	std::cout << "排序之前：";
	PrintDeque61(d1);

	//默认升序排序
	std::sort(d1.begin(), d1.end());

	std::cout << "排序之后：";
	PrintDeque61(d1);

	std::cout << std::endl;

	int arr[10] = { 12,43,2,45,13,646,23,43,312,666 };
	std::cout << "排序之前：";
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::sort(&arr[0], &arr[9]);

	std::cout << "排序之后：";
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}