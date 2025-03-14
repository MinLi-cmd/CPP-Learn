/*
* 利用嵌套循环，实现九九乘法表
*/

#include <iostream>
using namespace std;

void ChengFaBiao(void)
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << i * j << "\t";
		}
		cout << endl;
	}
}