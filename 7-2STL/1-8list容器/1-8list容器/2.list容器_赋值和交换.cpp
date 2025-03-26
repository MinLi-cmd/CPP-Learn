/* 
list ��ֵ�ͽ���
	����������
		��list�������и�ֵ���Լ�����list����
		����ԭ�ͣ�
			assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
			assign(n, elem); //��n��elem������ֵ������
			list& operator=(const list &lst); //���صȺŲ�����
			swap(lst); //��lst�뱾���Ԫ�ػ�����
*/

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

void PrintList21(const std::list<int>& _l)
{
	for (std::list<int>::const_iterator it = _l.begin(); it != _l.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void List_AssignAndSwap(void)
{
	std::list<int> l1;
	for (int i = 1; i <= 10; i++)
	{
		l1.push_back(i * i);
	}
	PrintList21(l1);
	std::cout << std::endl;

	std::list<int> l2;
	l2 = l1;
	PrintList21(l2);
	std::cout << std::endl;

	std::list<int> l3;
	l3.assign(l2.begin(),l2.end());
	PrintList21(l3);
	std::cout << std::endl;

	std::list<int> l4;
	l4 = l3;
	PrintList21(l4);
	l4.assign(10, 1000);
	PrintList21(l4);

	for (int i = 0; i < 100; i++)
		std::cout << '=';
	std::cout << std::endl;

	std::cout << "����ǰ��" << std::endl;
	std::cout << "l3��"; PrintList21(l3);
	std::cout << "l4��"; PrintList21(l4);

	std::cout << std::endl;

	std::cout << "������" << std::endl;
	l3.swap(l4);
	std::cout << "l3��"; PrintList21(l3);
	std::cout << "l4��"; PrintList21(l4);
}