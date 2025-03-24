/*vector �����ɾ��
	����������
		�� vector �������в��롢ɾ������
	����ԭ�ͣ�
		push_back(ele); // β������Ԫ�� ele
		pop_back(); // ɾ�����һ��Ԫ��
		insert(const_iterator pos, ele); // ������ָ��λ�� pos ����Ԫ�� ele
		insert(const_iterator pos, int count,ele); // ������ָ��λ�� pos ���� count ��Ԫ�� ele
		erase(const_iterator pos); // ɾ��������ָ���Ԫ��
		erase(const_iterator start, const_iterator end); // ɾ���������� start �� end ֮���Ԫ��
		clear(); // ɾ������������Ԫ��

		β�� ����  push_back
		βɾ ����  pop_back
		���� ����  insert	��λ�õ�������
		ɾ�� ����  erase	��λ�õ�������
		��� ����  clear	
*/

#include <iostream>
#include <vector>

void PrintVector41(std::vector<int>& _v)
{
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void Study_VectorInsertAndErase(void)
{
	std::vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i+1);
	}
	PrintVector41(v1);

	v1.insert(v1.begin(),100);
	PrintVector41(v1);

	v1.insert(v1.begin() + 2, 2, 1000);
	PrintVector41(v1);

	v1.erase(v1.begin());
	PrintVector41(v1);
	
	v1.clear();
	/*v1.erase(v1.begin(), v1.end());*/
	if (v1.empty())
		std::cout << "����Ϊ��" << std::endl;
	else
		PrintVector41(v1);
}