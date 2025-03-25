/* 
deque 插入和删除
	功能描述：
		向deque容器中插入和删除数据
	函数原型：
		两端插入操作：
			push_back(elem); //在容器尾部添加一个数据
			push_front(elem); //在容器头部插入一个数据
			pop_back(); //删除容器最后一个数据
			pop_front(); //删除容器第一个数据
		指定位置操作：
			insert(pos,elem); //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
			insert(pos,n,elem); //在pos位置插入n个elem数据，无返回值。
			insert(pos,beg,end); //在pos位置插入[beg,end)区间的数据，无返回值。
			clear(); //清空容器的所有数据
			erase(beg,end); //删除[beg,end)区间的数据，返回下一个数据的位置。
			erase(pos); //删除pos位置的数据，返回下一个数据的位置。
	总结：
		插入和删除提供的位置是迭代器！
		尾插 --- push_back
		尾删 --- pop_back
		头插 --- push_front
		头删 --- pop_front
*/

#include <iostream>
#include <deque>

void PrintDeque41(const std::deque<int>& _d)
{
	for (std::deque<int>::const_iterator it = _d.begin(); it != _d.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_DequeInsertAndErase(void)
{
	std::deque<int> d1;
	//-100 - 81 - 64 - 49 - 36 - 25 - 16 - 9 - 4 - 1 1 4 9 16 25 36 49 64 81 100
	for (int i = 1; i <= 10; i++)
	{
		d1.push_back(i * i);
		d1.push_front(i * (-i));
	}
	PrintDeque41(d1);
	std::cout << std::endl;

	//-81 - 64 - 49 - 36 - 25 - 16 - 9 - 4 - 1 1 4 9 16 25 36 49 64 81
	d1.pop_back();
	d1.pop_front();
	PrintDeque41(d1);
	std::cout << std::endl;

	//-81 -64 666 666 666 -49 -36 -25 -16 -9 -4 -1 1 4 9 16 25 36 49 64 81
	d1.insert(d1.begin() + 2, 3, 666);
	PrintDeque41(d1);
	std::cout << std::endl;

	std::deque<int>d2(3, 10);

	//-81 - 64 666 666 666 - 49 - 36 - 25 - 16 - 9 - 4 - 1 1 4 9 16 25 36 49 10 10 10 64 81
	d1.insert(d1.end() - 2, d2.begin(), d2.end());
	PrintDeque41(d1);
	std::cout << std::endl;

	d1.erase(d1.begin() + 2);
	PrintDeque41(d1);
	std::cout << std::endl;

	//容器为空
	d1.clear();
	/*d1.erase(d1.begin(), d1.end());*/
	if (d1.empty())
	{
		std::cout << "容器为空" << std::endl;
	}
	else
	{
		PrintDeque41(d1);
		std::cout << std::endl;
	}
	
}