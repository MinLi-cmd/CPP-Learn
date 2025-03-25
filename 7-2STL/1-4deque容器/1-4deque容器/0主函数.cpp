/* deque容器
deque容器基本概念
	功能：
		deque 是双端数组，可以对头端进行插入删除操作
	deque 与 vector 区别:
		vector 对于头部的插入删除效率低，数据量越大，效率越低。
		deque 相对而言，对头部的插入删除速度比 vector 快。
		vector 访问元素时的速度会比 deque 快，这和两者内部实现有关 。
*/

#include <iostream>
#include <deque>

#include "0个人函数库.h"

int main(void)
{
	Study_DequeSort();

	system("pause");
	return 0;
}