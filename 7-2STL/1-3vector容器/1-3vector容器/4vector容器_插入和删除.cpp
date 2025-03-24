/*vector 插入和删除
	功能描述：
		对 vector 容器进行插入、删除操作
	函数原型：
		push_back(ele); // 尾部插入元素 ele
		pop_back(); // 删除最后一个元素
		insert(const_iterator pos, ele); // 迭代器指向位置 pos 插入元素 ele
		insert(const_iterator pos, int count,ele); // 迭代器指向位置 pos 插入 count 个元素 ele
		erase(const_iterator pos); // 删除迭代器指向的元素
		erase(const_iterator start, const_iterator end); // 删除迭代器从 start 到 end 之间的元素
		clear(); // 删除容器中所有元素

		尾插 ——  push_back
		尾删 ——  pop_back
		插入 ——  insert	（位置迭代器）
		删除 ——  erase	（位置迭代器）
		清空 ——  clear	
*/

#include <iostream>
#include <vector>

void PrintVector41(std::vector<int>& _v)
{
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_VectorInsertAndErase(void)
{
	std::vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i+1);
	}
	PrintVector41(v1);

	v1.insert(v1.begin(),100);
	PrintVector41(v1);

	v1.insert(v1.begin() + 2, 2, 1000);
	PrintVector41(v1);

	v1.erase(v1.begin());
	PrintVector41(v1);
	
	v1.clear();
	/*v1.erase(v1.begin(), v1.end());*/
	if (v1.empty())
		std::cout << "容器为空" << std::endl;
	else
		PrintVector41(v1);
}