/*
list ��ת������
	����������
		�������е�Ԫ�ط�ת���Լ��������е����ݽ�������
	����ԭ�ͣ�
		reverse(); //��ת����
		sort(); //��������
	�ܽ᣺
		��ת --- reverse
		���� --- sort ����Ա������
*/

#include <iostream>
#include <list>
#include <string>

void PrintList61(const std::list<int>& _l)
{
	for (std::list<int>::const_iterator it = _l.begin(); it != _l.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void List_ReverseAndSort(void)
{
	std::list<int> l1;
	for (int i = 5; i < 10; i++)
	{
		l1.push_back(i * i);
		l1.push_back(i * (-i));
	}

	std::cout << "l1������תǰ��";
	PrintList61(l1);

	l1.reverse();
	std::cout << "l1������ת��";
	PrintList61(l1);

	//Ĭ�ϴ�С��������
	l1.sort();
	std::cout << "l1���������";
	PrintList61(l1);
}