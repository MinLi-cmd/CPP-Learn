/*vector 数据存取
	功能描述：
		对 vector 中的数据的存取操作
	函数原型：
		at(int idx);	// 返回索引 idx 所指的数据
		operator[];		// 返回索引 idx 所指的数据
		front();		// 返回容器中第一个数据元素
		back();			// 返回容器中最后一个数据元素
*/

#include <iostream>
#include <vector>

void Study_VectorDataAccess(void)
{
	std::vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < v1.size(); i++)
	{
		std::cout << v1.at(i) << " ";
	}
	std::cout << std::endl;

	std::cout << "第一个元素是：" << v1.front() << std::endl;
	std::cout << "最后一个元素是：" << v1.back() << std::endl;
}