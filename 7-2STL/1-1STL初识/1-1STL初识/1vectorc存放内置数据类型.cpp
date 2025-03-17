#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void test_Print(int val)
{
	std::cout << val << std::endl;
}

void Study_VectorCunFangNeiZhiDataType(void)
{
	using std::vector;
	using std::cout;
	using std::endl;

	vector<int> v1;
	for (int i = 0; i < 6; i++)
		v1.push_back(i * 10);

	//第一种遍历方式
	vector<int>::iterator itBegin = v1.begin();
	vector<int>::iterator itEnd = v1.end();

	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}
	cout << endl;

	//第二种遍历方式
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl;

	//第三种遍历方式
	std::for_each(v1.begin(), v1.end(), test_Print);
}