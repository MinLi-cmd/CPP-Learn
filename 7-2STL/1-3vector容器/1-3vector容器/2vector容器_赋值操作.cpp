/*vector��ֵ����
	����������
		��vector�������и�ֵ
	����ԭ�ͣ�
			vector& operator=(const vector &vec); //���صȺŲ�����
			assign(beg, end);   //��[beg, end)�����е����ݿ�����ֵ������
			assign(n, elem);   //��n��elem������ֵ������
*/

#include <iostream>
#include <vector>

void PrintVector21(std::vector<int>& _v)
{
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
}

void Study_VectorAssign(void)
{
	//Ĭ��
	std::vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(23 + i);
	}
	PrintVector21(v1);

	//operator=����
	std::vector<int> v2;
	v2 = v1;
	PrintVector21(v2);

	//assign����
	std::vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	PrintVector21(v3);

	//n��elem��ʽ��ֵ
	std::vector<int> v4;
	v4.assign(10, 100);
	PrintVector21(v4);

}