/*vector ���ݴ�ȡ
	����������
		�� vector �е����ݵĴ�ȡ����
	����ԭ�ͣ�
		at(int idx);	// �������� idx ��ָ������
		operator[];		// �������� idx ��ָ������
		front();		// ���������е�һ������Ԫ��
		back();			// �������������һ������Ԫ��
*/

#include <iostream>
#include <vector>

void Study_VectorDataAccess(void)
{
	std::vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < v1.size(); i++)
	{
		std::cout << v1.at(i) << " ";
	}
	std::cout << std::endl;

	std::cout << "��һ��Ԫ���ǣ�" << v1.front() << std::endl;
	std::cout << "���һ��Ԫ���ǣ�" << v1.back() << std::endl;
}