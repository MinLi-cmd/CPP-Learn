/*
deque构造函数
	功能描述：
		deque容器构造
	函数原型：
		deque<T> deqT; //默认构造形式
		deque(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身。
		deque(n, elem); //构造函数将n个elem拷贝给本身。
		deque(const deque &deq); //拷贝构造函数
	
	总结：deque容器与vector容器的构造方式几乎一致，灵活运用即可
*/

#include <iostream>
#include <deque>

void PrintDeque11(const std::deque<int>& _q)
{
	for (std::deque<int>::const_iterator it = _q.begin(); it != _q.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_DequeGouZao(void)
{
	std::deque<int> q1;
	for (int i = 0; i < 10; i++)
	{
		q1.push_back(i * i);
	}
	PrintDeque11(q1);

	std::deque<int> q2(q1.begin(), q1.end());
	PrintDeque11(q2);

	std::deque<int> q3(10, 100);
	PrintDeque11(q3);

	std::deque<int> q4(q3);
	PrintDeque11(q4);
}