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
#include <deque>
#include <string>
#include <algorithm>
#include "player.h"



int main(void)
{
	srand((unsigned int)time(NULL));

	std::vector<Player> v;

	//在vector容器重新分配内存的时候这个迭代器会失效
	/*std::vector<Player>::iterator userit = v.begin();*/
	
	//创建5名选手
	CreatedPlayer(v);
	
	//评委打分
	Judging(v);

	//for (int i = 1; i <= 5; i++)
	//{
	//	v.push_back(p[i - 1]);
	//	for (int j = 1; j <= 10; j++)
	//	{
	//		//v[i - 1]._scores.push_back(j * j * i);//这里的警告是怕存入的数字超出int范围
	//	}
	//}

	//测试
	PrintInfo(v);

	system("pause");
	return 0;
}

