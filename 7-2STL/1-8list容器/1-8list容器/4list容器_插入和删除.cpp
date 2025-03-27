/*
list �����ɾ��
	����������
		��list�����������ݵĲ����ɾ��
	����ԭ�ͣ�
		push_back(elem);//������β������һ��Ԫ��
		pop_back();//ɾ�����������һ��Ԫ��
		push_front(elem);//��������ͷ����һ��Ԫ��
		pop_front();//��������ͷ�Ƴ���һ��Ԫ��
		insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
		insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
		insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
		clear();//�Ƴ���������������
		erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
		erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
		remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
	�ܽ᣺
			β�� --- push_back
			βɾ --- pop_back
			ͷ�� --- push_front
			ͷɾ --- pop_front
			���� --- insert
			ɾ�� --- erase
			�Ƴ� --- remove
			��� --- clear
*/

#include <iostream>
#include <list>

void PrintList41(const std::list<int>& _l)
{
	for (std::list<int>::const_iterator it = _l.begin(); it != _l.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void List_InsertAndErase(void)
{
	std::list<int> l1;
	for (int i = 5; i < 10; i++)
	{
		l1.push_back(i * i);
		l1.push_front(i * (-i));
	}
	//-81 -64 -49 -36 -25 25 36 49 64 81
	PrintList41(l1);
	std::cout << std::endl;

	//- 64 -49 -36 -25 25 36 49 64
	l1.pop_back();
	l1.pop_front();
	PrintList41(l1);
	std::cout << std::endl;

	//-64 1000 1000 1000 1000 -49 -36 -25 25 36 49 64 -64 1000 1000 1000 1000 -49 -36 -25 25 36 49 64
	std::list<int>::iterator tempit = l1.begin();
	tempit++;
	l1.insert(tempit, 4, 1000);
	l1.insert(l1.end(), l1.begin(), l1.end());
	PrintList41(l1);
	std::cout << std::endl;
		
	tempit = l1.end();
	--tempit;
	--tempit;
	l1.erase(tempit, l1.end());
	l1.remove(1000);
	PrintList41(l1);
	std::cout << std::endl;

	l1.clear();
	if (l1.empty())
	{
		std::cout << "l1����Ϊ��" << std::endl;
	}
	else
	{
		PrintList41(l1);
	}

}