/* 
deque �����ɾ��
	����������
		��deque�����в����ɾ������
	����ԭ�ͣ�
		���˲��������
			push_back(elem); //������β�����һ������
			push_front(elem); //������ͷ������һ������
			pop_back(); //ɾ���������һ������
			pop_front(); //ɾ��������һ������
		ָ��λ�ò�����
			insert(pos,elem); //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
			insert(pos,n,elem); //��posλ�ò���n��elem���ݣ��޷���ֵ��
			insert(pos,beg,end); //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
			clear(); //�����������������
			erase(beg,end); //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
			erase(pos); //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
	�ܽ᣺
		�����ɾ���ṩ��λ���ǵ�������
		β�� --- push_back
		βɾ --- pop_back
		ͷ�� --- push_front
		ͷɾ --- pop_front
*/

#include <iostream>
#include <deque>

void PrintDeque41(const std::deque<int>& _d)
{
	for (std::deque<int>::const_iterator it = _d.begin(); it != _d.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_DequeInsertAndErase(void)
{
	std::deque<int> d1;
	//-100 - 81 - 64 - 49 - 36 - 25 - 16 - 9 - 4 - 1 1 4 9 16 25 36 49 64 81 100
	for (int i = 1; i <= 10; i++)
	{
		d1.push_back(i * i);
		d1.push_front(i * (-i));
	}
	PrintDeque41(d1);
	std::cout << std::endl;

	//-81 - 64 - 49 - 36 - 25 - 16 - 9 - 4 - 1 1 4 9 16 25 36 49 64 81
	d1.pop_back();
	d1.pop_front();
	PrintDeque41(d1);
	std::cout << std::endl;

	//-81 -64 666 666 666 -49 -36 -25 -16 -9 -4 -1 1 4 9 16 25 36 49 64 81
	d1.insert(d1.begin() + 2, 3, 666);
	PrintDeque41(d1);
	std::cout << std::endl;

	std::deque<int>d2(3, 10);

	//-81 - 64 666 666 666 - 49 - 36 - 25 - 16 - 9 - 4 - 1 1 4 9 16 25 36 49 10 10 10 64 81
	d1.insert(d1.end() - 2, d2.begin(), d2.end());
	PrintDeque41(d1);
	std::cout << std::endl;

	d1.erase(d1.begin() + 2);
	PrintDeque41(d1);
	std::cout << std::endl;

	//����Ϊ��
	d1.clear();
	/*d1.erase(d1.begin(), d1.end());*/
	if (d1.empty())
	{
		std::cout << "����Ϊ��" << std::endl;
	}
	else
	{
		PrintDeque41(d1);
		std::cout << std::endl;
	}
	
}