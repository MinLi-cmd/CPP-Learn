/*
deque 数据存取
	功能描述：
		对deque 中的数据的存取操作
	函数原型：
		at(int idx); //返回索引idx所指的数据
		operator[]; //返回索引idx所指的数据
		front(); //返回容器中第一个数据元素
		back(); //返回容器中最后一个数据元素
	总结：
		除了用迭代器获取deque容器中元素，[ ]和at也可以
		front返回容器第一个元素
		back返回容器最后一个元素
*/

#include <iostream>
#include <deque>

void PrintDeque51(const std::deque<int>& _d)
{
	for (std::deque<int>::const_iterator it = _d.begin(); it != _d.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_DequeData(void)
{
	std::deque<int> d1;
	for (int i = 1; i <= 10; i++)
	{
		d1.push_back(i * i);
	}
	PrintDeque51(d1);
	std::cout << std::endl;

	std::cout << "d1[3] = " << d1[3] << std::endl;
	std::cout << std::endl;

	std::cout << "d1.at(5) = " << d1.at(5) << std::endl;
	std::cout << std::endl;

	std::cout << "d1.front() = " << d1.front() << std::endl;
	std::cout << std::endl;

	std::cout << "d1.back() = " << d1.back() << std::endl;
	std::cout << std::endl;

}