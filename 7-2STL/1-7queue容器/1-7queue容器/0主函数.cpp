/*
queue 基本概念
	概念：Queue是一种先进先出(First In First Out,FIFO)的数据结构，它有两个出口
		队列容器允许从一端新增元素，从另一端移除元素
		队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为
		队列中进数据称为 --- 入队 push
		队列中出数据称为 --- 出队 pop
*/

#include <iostream>
#include <string>
#include <queue>
#include "0个人函数库.h"

int main(void)
{
	Study_QueueCommonPort();

	system("pause");
	return 0;
}
