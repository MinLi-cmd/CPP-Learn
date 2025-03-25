/*
deque ���ݴ�ȡ
	����������
		��deque �е����ݵĴ�ȡ����
	����ԭ�ͣ�
		at(int idx); //��������idx��ָ������
		operator[]; //��������idx��ָ������
		front(); //���������е�һ������Ԫ��
		back(); //�������������һ������Ԫ��
	�ܽ᣺
		�����õ�������ȡdeque������Ԫ�أ�[ ]��atҲ����
		front����������һ��Ԫ��
		back�����������һ��Ԫ��
*/

#include <iostream>
#include <deque>

void PrintDeque51(const std::deque<int>& _d)
{
	for (std::deque<int>::const_iterator it = _d.begin(); it != _d.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_DequeData(void)
{
	std::deque<int> d1;
	for (int i = 1; i <= 10; i++)
	{
		d1.push_back(i * i);
	}
	PrintDeque51(d1);
	std::cout << std::endl;

	std::cout << "d1[3] = " << d1[3] << std::endl;
	std::cout << std::endl;

	std::cout << "d1.at(5) = " << d1.at(5) << std::endl;
	std::cout << std::endl;

	std::cout << "d1.front() = " << d1.front() << std::endl;
	std::cout << std::endl;

	std::cout << "d1.back() = " << d1.back() << std::endl;
	std::cout << std::endl;

}