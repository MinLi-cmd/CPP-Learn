/*
����-��ί���
	��������
		��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ���֡�
	ʵ�ֲ���
		��������ѡ�֣��ŵ�vector��
		����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
		sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
		deque��������һ�飬�ۼ��ܷ�
		��ȡƽ����
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

	//��vector�������·����ڴ��ʱ�������������ʧЧ
	/*std::vector<Player>::iterator userit = v.begin();*/
	
	//����5��ѡ��
	CreatedPlayer(v);
	
	//��ί���
	Judging(v);

	//for (int i = 1; i <= 5; i++)
	//{
	//	v.push_back(p[i - 1]);
	//	for (int j = 1; j <= 10; j++)
	//	{
	//		//v[i - 1]._scores.push_back(j * j * i);//����ľ������´�������ֳ���int��Χ
	//	}
	//}

	//����
	PrintInfo(v);

	system("pause");
	return 0;
}

