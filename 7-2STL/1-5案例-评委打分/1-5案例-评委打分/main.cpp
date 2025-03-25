/*
案例-评委打分
	案例描述
		有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
	实现步骤
		创建五名选手，放到vector中
		遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
		sort算法对deque容器中分数排序，去除最高和最低分
		deque容器遍历一遍，累加总分
		获取平均分
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{

	system("pause");
	return 0;
}