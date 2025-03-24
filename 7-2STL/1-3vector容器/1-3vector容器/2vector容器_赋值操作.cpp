/*vector赋值操作
	功能描述：
		给vector容器进行赋值
	函数原型：
			vector& operator=(const vector &vec); //重载等号操作符
			assign(beg, end);   //将[beg, end)区间中的数据拷贝赋值给本身。
			assign(n, elem);   //将n个elem拷贝赋值给本身。
*/

#include <iostream>
#include <vector>

void PrintVector21(std::vector<int>& _v)
{
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
}

void Study_VectorAssign(void)
{
	//默认
	std::vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(23 + i);
	}
	PrintVector21(v1);

	//operator=重载
	std::vector<int> v2;
	v2 = v1;
	PrintVector21(v2);

	//assign区间
	std::vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	PrintVector21(v3);

	//n个elem方式赋值
	std::vector<int> v4;
	v4.assign(10, 100);
	PrintVector21(v4);

}