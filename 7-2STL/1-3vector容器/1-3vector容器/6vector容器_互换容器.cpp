/*
vector 互换容器
	功能描述：
		实现两个容器内的元素交换
	函数原型：
		swap(vec);	//将vec与本身的元素互换
*/
#include <iostream>
#include <vector>

void PrintVector61(std::vector<int>& _v)
{
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_VectorSwap(void)
{
	/*=======================用途一=======================*/
	std::vector<int> v1;
	std::vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}

	std::cout << "交换前：" << std::endl;
	PrintVector61(v1);
	PrintVector61(v2);

	v1.swap(v2);

	std::cout << "交换后：" << std::endl;
	PrintVector61(v1);
	PrintVector61(v2);

	std::cout << std::endl;
	/*=======================用途二=======================*/
	/*用swap可以收缩空间*/
	std::vector<int> v3;
	for (int i = 0; i < 10000; i++)
	{
		v3.push_back(i);
	}
	std::cout << "v3的容量为：" << v3.capacity() << std::endl;
	std::cout << "v3的大小为：" << v3.size() << std::endl;

	std::cout << std::endl;

	v3.resize(3);
	std::cout << "缩小大小之后：" << std::endl;
	std::cout << "v3的容量为：" << v3.capacity() << std::endl;
	std::cout << "v3的大小为：" << v3.size() << std::endl;

	std::cout << std::endl;

	/*std::vector<int>(v3).swap(v3);*/
	v3.swap(v3);
	std::cout << "swap收缩完大小之后：" << std::endl;
	std::cout << "v3的容量为：" << v3.capacity() << std::endl;
	std::cout << "v3的大小为：" << v3.size() << std::endl;
}