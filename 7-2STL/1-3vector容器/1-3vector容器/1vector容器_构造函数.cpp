/*vector构造函数
	功能描述：
		创建vector容器
	函数原型：
		vector<T> v;				//采用模板实现类实现，默认构造函数
		vector(v.begin(), v.end());	//将v[begin(), end())区间中的元素拷贝给本身。
		vector(n, elem);			//构造函数将n个elem拷贝给本身
		vector(const vector& vec);	//拷贝构造函数

	总结：vector的多种构造方式没有可比性，灵活使用即可。
*/

#include <iostream>
using namespace std;
#include <vector>

void PrintVector11(vector<int>& _v)
{
	for (vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void Study_VectorGouZao(void)
{
	//默认构造 无参构造
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(23 + i);
	}
	PrintVector11(v1);

	//通过区间方式进行构造
	vector<int> v2(v1.begin(), v1.end());
	PrintVector11(v2);

	//n个elem的方式构造
	vector<int> v3(10, 100);
	PrintVector11(v3);

	//拷贝构造，经常使用
	vector<int> v4(v3);
	PrintVector11(v4);

}
