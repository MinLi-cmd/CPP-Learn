/* 
list构造函数
	功能描述：
		创建list容器
	函数原型：
		list<T> lst; //list采用采用模板类实现,对象的默认构造形式：
		list(beg,end); //构造函数将[beg, end)区间中的元素拷贝给本身。
		list(n,elem); //构造函数将n个elem拷贝给本身。
		list(const list &lst); //拷贝构造函数。
		总结：list构造方式同其他几个STL常用容器，熟练掌握即可
*/

#include <iostream>
#include <list>
#include <string>

void PrintList11(const std::list<int>& _l)
{
	for (std::list<int>::const_iterator it = _l.begin(); it != _l.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void List_GouZaoHanShu(void)
{
	std::list<int> l1;
	for (int i = 1; i <= 5; i++)
	{
		l1.push_back(i * i);
		l1.push_front(i * (-i));
	}
	PrintList11(l1);
	std::cout << std::endl;

	std::list<int> l2(l1.begin(),l1.end());
	PrintList11(l2);
	std::cout << std::endl;

	std::list<int> l3(10, 1000);
	PrintList11(l3);
	std::cout << std::endl;

	std::list<int> l4(l3);
	PrintList11(l4);
}