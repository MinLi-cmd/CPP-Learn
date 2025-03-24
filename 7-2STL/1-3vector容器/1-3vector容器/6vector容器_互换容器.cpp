/*
vector ��������
	����������
		ʵ�����������ڵ�Ԫ�ؽ���
	����ԭ�ͣ�
		swap(vec);	//��vec�뱾���Ԫ�ػ���
*/
#include <iostream>
#include <vector>

void PrintVector61(std::vector<int>& _v)
{
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_VectorSwap(void)
{
	/*=======================��;һ=======================*/
	std::vector<int> v1;
	std::vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}

	std::cout << "����ǰ��" << std::endl;
	PrintVector61(v1);
	PrintVector61(v2);

	v1.swap(v2);

	std::cout << "������" << std::endl;
	PrintVector61(v1);
	PrintVector61(v2);

	std::cout << std::endl;
	/*=======================��;��=======================*/
	/*��swap���������ռ�*/
	std::vector<int> v3;
	for (int i = 0; i < 10000; i++)
	{
		v3.push_back(i);
	}
	std::cout << "v3������Ϊ��" << v3.capacity() << std::endl;
	std::cout << "v3�Ĵ�СΪ��" << v3.size() << std::endl;

	std::cout << std::endl;

	v3.resize(3);
	std::cout << "��С��С֮��" << std::endl;
	std::cout << "v3������Ϊ��" << v3.capacity() << std::endl;
	std::cout << "v3�Ĵ�СΪ��" << v3.size() << std::endl;

	std::cout << std::endl;

	/*std::vector<int>(v3).swap(v3);*/
	v3.swap(v3);
	std::cout << "swap�������С֮��" << std::endl;
	std::cout << "v3������Ϊ��" << v3.capacity() << std::endl;
	std::cout << "v3�Ĵ�СΪ��" << v3.size() << std::endl;
}