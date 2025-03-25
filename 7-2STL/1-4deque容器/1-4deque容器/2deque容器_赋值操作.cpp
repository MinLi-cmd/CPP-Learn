/*
deque��ֵ����
	����������
		��deque�������и�ֵ
	����ԭ�ͣ�
		deque& operator=(const deque &deq); //���صȺŲ�����
		assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
		assign(n, elem); //��n��elem������ֵ������

	�ܽ᣺deque��ֵ����Ҳ��vector��ͬ������������
*/

#include <iostream>
#include <deque>

void PrintDeque21(const std::deque<int>& _q)
{
	for (std::deque<int>::const_iterator it = _q.begin(); it != _q.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_DequeAssign(void)
{
	std::deque<int> q1;
	for (int i = 0; i < 10; i++)
	{
		q1.push_back(i * i);
	}
	PrintDeque21(q1);

	std::deque<int> q2;
	q2 = q1;
	PrintDeque21(q2);

	std::deque<int> q3;
	q3.assign(10, 100);
	PrintDeque21(q3);

	std::deque<int> q4;
	q4.assign(q3.begin(),q3.end());
	PrintDeque21(q4);
}