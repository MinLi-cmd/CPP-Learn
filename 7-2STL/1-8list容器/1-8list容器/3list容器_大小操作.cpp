/*
list 大小操作
	功能描述：
		对list容器的大小进行操作
	函数原型：
		size(); //返回容器中元素的个数
		empty(); //判断容器是否为空
		resize(num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
​					//如果容器变短，则末尾超出容器长度的元素被删除。
		resize(num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
	总结：
		判断是否为空 --- empty
		返回元素个数 --- size
		重新指定个数 --- resize
*/

#include <iostream>
#include <string>
#include <list>

void PrintList31(std::list<int>& _l)
{
	for (std::list<int>::iterator it = _l.begin(); it != _l.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void List_ChangeSize(void)
{
	std::list<int> l1;
	for (int i = 5; i < 10; i++)
	{
		l1.push_back(i * i);
		l1.push_front(i * (-i));
	}
	PrintList31(l1);

	std::cout << "l1容器的大小为：" << l1.size() << std::endl;
	std::cout << std::endl;

	std::list<int> l2;
	l2 = l1;
	PrintList31(l2);

	l2.clear();
	if (l2.empty())
	{
		std::cout << "l2容器的大小为：" << l2.size() << std::endl;
		std::cout << "l2容器为空" << std::endl;
	}
	std::cout << std::endl;

	std::list<int> l3;
	l3 = l1;

	l3.resize(7);
	l3.resize(15, 1000);
	PrintList31(l3);

}