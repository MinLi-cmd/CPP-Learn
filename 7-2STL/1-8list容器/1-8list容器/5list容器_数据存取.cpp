/*
list ���ݴ�ȡ
	����������
		��list���������ݽ��д�ȡ
	����ԭ�ͣ�
		front(); //���ص�һ��Ԫ�ء�
		back(); //�������һ��Ԫ�ء�
	�ܽ᣺
		list�����в�����ͨ��[]����at��ʽ��������
		���ص�һ��Ԫ�� --- front
		�������һ��Ԫ�� --- back
*/

#include <iostream>
#include <list>
#include <string>

void PrintList51(const std::list<int>& _l)
{
	for (std::list<int>::const_iterator it = _l.begin(); it != _l.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void List_DataAccess(void)
{
	std::list<int> l1;
	for (int i = 5; i < 10; i++)
	{
		l1.push_back(i * i);
		l1.push_front(i * (-i));
	}
	PrintList51(l1);

	std::cout << "l1�ĵ�һ��Ԫ��Ϊ��" << l1.front() << "\nl2�����һ��Ԫ��Ϊ��" << l1.back() << std::endl;

}

