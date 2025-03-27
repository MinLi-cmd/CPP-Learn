/*
list 插入和删除
	功能描述：
		对list容器进行数据的插入和删除
	函数原型：
		push_back(elem);//在容器尾部加入一个元素
		pop_back();//删除容器中最后一个元素
		push_front(elem);//在容器开头插入一个元素
		pop_front();//从容器开头移除第一个元素
		insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
		insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
		insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
		clear();//移除容器的所有数据
		erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
		erase(pos);//删除pos位置的数据，返回下一个数据的位置。
		remove(elem);//删除容器中所有与elem值匹配的元素。
	总结：
			尾插 --- push_back
			尾删 --- pop_back
			头插 --- push_front
			头删 --- pop_front
			插入 --- insert
			删除 --- erase
			移除 --- remove
			清空 --- clear
*/

#include <iostream>
#include <list>

void PrintList41(const std::list<int>& _l)
{
	for (std::list<int>::const_iterator it = _l.begin(); it != _l.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void List_InsertAndErase(void)
{
	std::list<int> l1;
	for (int i = 5; i < 10; i++)
	{
		l1.push_back(i * i);
		l1.push_front(i * (-i));
	}
	//-81 -64 -49 -36 -25 25 36 49 64 81
	PrintList41(l1);
	std::cout << std::endl;

	//- 64 -49 -36 -25 25 36 49 64
	l1.pop_back();
	l1.pop_front();
	PrintList41(l1);
	std::cout << std::endl;

	//-64 1000 1000 1000 1000 -49 -36 -25 25 36 49 64 -64 1000 1000 1000 1000 -49 -36 -25 25 36 49 64
	std::list<int>::iterator tempit = l1.begin();
	tempit++;
	l1.insert(tempit, 4, 1000);
	l1.insert(l1.end(), l1.begin(), l1.end());
	PrintList41(l1);
	std::cout << std::endl;
		
	tempit = l1.end();
	--tempit;
	--tempit;
	l1.erase(tempit, l1.end());
	l1.remove(1000);
	PrintList41(l1);
	std::cout << std::endl;

	l1.clear();
	if (l1.empty())
	{
		std::cout << "l1容器为空" << std::endl;
	}
	else
	{
		PrintList41(l1);
	}

}