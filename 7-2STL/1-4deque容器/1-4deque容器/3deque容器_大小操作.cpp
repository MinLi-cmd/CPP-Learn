/*
deque大小操作
	功能描述：
		对deque容器的大小进行操作
	函数原型：
		deque.empty(); //判断容器是否为空
		deque.size(); //返回容器中元素的个数
		deque.resize(num);	//重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
​							//如果容器变短，则末尾超出容器长度的元素被删除。
		deque.resize(num, elem);	//重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
​									//如果容器变短，则末尾超出容器长度的元素被删除。
	总结：
		deque没有容量的概念
		判断是否为空 --- empty
		返回元素个数 --- size
		重新指定个数 --- resize
*/

#include <iostream>
#include <deque>

void PrintDeque31(const std::deque<int>& _q)
{
	for (std::deque<int>::const_iterator it = _q.begin(); it != _q.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_DequeSize(void)
{
	std::deque<int> q1;
	for (int i = 0; i < 10; i++)
	{
		q1.push_back(i * i);
	}

	PrintDeque31(q1);
	std::cout << "容器q1的大小为：" << q1.size() << std::endl;
	std::cout << std::endl;

	q1.resize(20);
	PrintDeque31(q1);
	std::cout << "容器q1的大小为：" << q1.size() << std::endl;
	std::cout << std::endl;

	q1.resize(15);
	q1.resize(20,666);
	PrintDeque31(q1);
	std::cout << "容器q1的大小为：" << q1.size() << std::endl;

	std::cout << std::endl;

	std::deque<int> q2;
	if (q2.empty())
	{
		std::cout << "容器为空" << std::endl;
	}
	else
	{
		PrintDeque31(q2);
	}
}