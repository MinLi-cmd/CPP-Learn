/*
list 反转和排序
	功能描述：
		将容器中的元素反转，以及将容器中的数据进行排序
	函数原型：
		reverse(); //反转链表
		sort(); //链表排序
	总结：
		反转 --- reverse
		排序 --- sort （成员函数）
*/

#include <iostream>
#include <list>
#include <string>

void PrintList61(const std::list<int>& _l)
{
	for (std::list<int>::const_iterator it = _l.begin(); it != _l.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void List_ReverseAndSort(void)
{
	std::list<int> l1;
	for (int i = 5; i < 10; i++)
	{
		l1.push_back(i * i);
		l1.push_back(i * (-i));
	}

	std::cout << "l1容器反转前：";
	PrintList61(l1);

	l1.reverse();
	std::cout << "l1容器反转后：";
	PrintList61(l1);

	//默认从小到大排序
	l1.sort();
	std::cout << "l1容器排序后：";
	PrintList61(l1);
}