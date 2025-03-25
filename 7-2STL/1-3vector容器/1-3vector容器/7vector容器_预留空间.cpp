/*
vector预留空间
	功能描述：
		减少vector在动态扩展容量时的扩展次数
	函数原型：
		reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问

	总结：如果数据量比较大，可以一开始利用serve预留空间
*/

#include <iostream>
#include <vector>

void Study_VectorReserver(void)
{
	std::vector<int> v1;
	std::vector<int> v2;
	int count(0);
	int* p = NULL;

	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			count++;
		}
	}
	std::cout << "没用reserve之前，扩展了" << count << "次" << std::endl;

	count = 0;
	p = NULL;

	v2.reserve(100000);
	for (int i = 0; i < 100000; i++)
	{
		v2.push_back(i);
		if (p != &v2[0])
		{
			p = &v2[0];
			count++;
		}
	}
	std::cout << "用reserve之后，扩展了" << count << "次" << std::endl;
}