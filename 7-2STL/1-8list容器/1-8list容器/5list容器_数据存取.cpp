/*
list 数据存取
	功能描述：
		对list容器中数据进行存取
	函数原型：
		front(); //返回第一个元素。
		back(); //返回最后一个元素。
	总结：
		list容器中不可以通过[]或者at方式访问数据
		返回第一个元素 --- front
		返回最后一个元素 --- back
*/

#include <iostream>
#include <list>
#include <string>

void PrintList51(const std::list<int>& _l)
{
	for (std::list<int>::const_iterator it = _l.begin(); it != _l.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void List_DataAccess(void)
{
	std::list<int> l1;
	for (int i = 5; i < 10; i++)
	{
		l1.push_back(i * i);
		l1.push_front(i * (-i));
	}
	PrintList51(l1);

	std::cout << "l1的第一个元素为：" << l1.front() << "\nl2的最后一个元素为：" << l1.back() << std::endl;

}

