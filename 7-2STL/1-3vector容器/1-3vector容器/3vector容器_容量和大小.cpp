/*vector�����ʹ�С
	����������
		�� vector �����������ʹ�С����
	����ԭ��
		empty(); // �ж������Ƿ�Ϊ��
		capacity(); // ����������
		size(); // ����������Ԫ�صĸ���
		resize(int num); // ����ָ�������ĳ���Ϊ num���������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
		resize(int num, elem); // ����ָ�������ĳ���Ϊ num���������䳤������ elem ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
	�ܽ᣺
		�ж��Ƿ�Ϊ�� ���� empty()
		����Ԫ�ظ��� ���� size()
		������������ ���� capacity()
		����ָ����С ���� resize() 
*/

#include <iostream>
#include <vector>

void PrintVector31(std::vector<int>& _v)
{
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_VectorCapacityAndSize(void)
{
	std::vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	if (v1.empty())//����Ϊ�շ���true
	{
		std::cout << "����Ϊ��" << std::endl;
	}
	else
	{
		std::cout << "������Ϊ��" << std::endl;
		PrintVector31(v1);
		std::cout << "������������СΪ��" << v1.capacity() << std::endl;
		std::cout << "�����Ĵ�СΪ��" << v1.size() << std::endl;
		std::cout << std::endl;

		v1.resize(14,100);
		v1.push_back(42);
		PrintVector31(v1);
		std::cout << "������������СΪ��" << v1.capacity() << std::endl;
		std::cout << "�����Ĵ�СΪ��" << v1.size() << std::endl;
		std::cout << std::endl;

		v1.resize(5);
		PrintVector31(v1);
		std::cout << "������������СΪ��" << v1.capacity() << std::endl;
		std::cout << "�����Ĵ�СΪ��" << v1.size() << std::endl;
		std::cout << std::endl;
	}
}
