/*
vectorԤ���ռ�
	����������
		����vector�ڶ�̬��չ����ʱ����չ����
	����ԭ�ͣ�
		reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

	�ܽ᣺����������Ƚϴ󣬿���һ��ʼ����serveԤ���ռ�
*/

#include <iostream>
#include <vector>

void Study_VectorReserver(void)
{
	std::vector<int> v1;
	std::vector<int> v2;
	int count(0);
	int* p = NULL;

	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			count++;
		}
	}
	std::cout << "û��reserve֮ǰ����չ��" << count << "��" << std::endl;

	count = 0;
	p = NULL;

	v2.reserve(100000);
	for (int i = 0; i < 100000; i++)
	{
		v2.push_back(i);
		if (p != &v2[0])
		{
			p = &v2[0];
			count++;
		}
	}
	std::cout << "��reserve֮����չ��" << count << "��" << std::endl;
}