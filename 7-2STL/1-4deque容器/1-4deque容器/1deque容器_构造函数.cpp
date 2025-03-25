/*
deque���캯��
	����������
		deque��������
	����ԭ�ͣ�
		deque<T> deqT; //Ĭ�Ϲ�����ʽ
		deque(beg, end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
		deque(n, elem); //���캯����n��elem����������
		deque(const deque &deq); //�������캯��
	
	�ܽ᣺deque������vector�����Ĺ��췽ʽ����һ�£�������ü���
*/

#include <iostream>
#include <deque>

void PrintDeque11(const std::deque<int>& _q)
{
	for (std::deque<int>::const_iterator it = _q.begin(); it != _q.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_DequeGouZao(void)
{
	std::deque<int> q1;
	for (int i = 0; i < 10; i++)
	{
		q1.push_back(i * i);
	}
	PrintDeque11(q1);

	std::deque<int> q2(q1.begin(), q1.end());
	PrintDeque11(q2);

	std::deque<int> q3(10, 100);
	PrintDeque11(q3);

	std::deque<int> q4(q3);
	PrintDeque11(q4);
}