/* 
list���캯��
	����������
		����list����
	����ԭ�ͣ�
		list<T> lst; //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
		list(beg,end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
		list(n,elem); //���캯����n��elem����������
		list(const list &lst); //�������캯����
		�ܽ᣺list���췽ʽͬ��������STL�����������������ռ���
*/

#include <iostream>
#include <list>
#include <string>

void PrintList11(const std::list<int>& _l)
{
	for (std::list<int>::const_iterator it = _l.begin(); it != _l.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void List_GouZaoHanShu(void)
{
	std::list<int> l1;
	for (int i = 1; i <= 5; i++)
	{
		l1.push_back(i * i);
		l1.push_front(i * (-i));
	}
	PrintList11(l1);
	std::cout << std::endl;

	std::list<int> l2(l1.begin(),l1.end());
	PrintList11(l2);
	std::cout << std::endl;

	std::list<int> l3(10, 1000);
	PrintList11(l3);
	std::cout << std::endl;

	std::list<int> l4(l3);
	PrintList11(l4);
}