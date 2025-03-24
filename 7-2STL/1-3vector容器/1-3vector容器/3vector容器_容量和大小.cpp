/*vector容量和大小
	功能描述：
		对 vector 容器的容量和大小操作
	函数原型
		empty(); // 判断容器是否为空
		capacity(); // 容器的容量
		size(); // 返回容器中元素的个数
		resize(int num); // 重新指定容器的长度为 num，若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
		resize(int num, elem); // 重新指定容器的长度为 num，若容器变长，则以 elem 值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除
	总结：
		判断是否为空 —— empty()
		返回元素个数 —— size()
		返回容器容量 —— capacity()
		重新指定大小 —— resize() 
*/

#include <iostream>
#include <vector>

void PrintVector31(std::vector<int>& _v)
{
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_VectorCapacityAndSize(void)
{
	std::vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	if (v1.empty())//容器为空返回true
	{
		std::cout << "容器为空" << std::endl;
	}
	else
	{
		std::cout << "容器不为空" << std::endl;
		PrintVector31(v1);
		std::cout << "容器的容量大小为：" << v1.capacity() << std::endl;
		std::cout << "容器的大小为：" << v1.size() << std::endl;
		std::cout << std::endl;

		v1.resize(14,100);
		v1.push_back(42);
		PrintVector31(v1);
		std::cout << "容器的容量大小为：" << v1.capacity() << std::endl;
		std::cout << "容器的大小为：" << v1.size() << std::endl;
		std::cout << std::endl;

		v1.resize(5);
		PrintVector31(v1);
		std::cout << "容器的容量大小为：" << v1.capacity() << std::endl;
		std::cout << "容器的大小为：" << v1.size() << std::endl;
		std::cout << std::endl;
	}
}
