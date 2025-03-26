/*
stack ���ýӿ�
	����������
		ջ�������õĶ���ӿ�
	���캯����
		stack<T> stk; //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
		stack(const stack &stk); //�������캯��
	��ֵ������
		stack& operator=(const stack &stk); //���صȺŲ�����
	���ݴ�ȡ��
		push(elem); //��ջ�����Ԫ��
		pop(); //��ջ���Ƴ���һ��Ԫ��
		top(); //����ջ��Ԫ��
	��С������
		empty(); //�ж϶�ջ�Ƿ�Ϊ��
		size(); //����ջ�Ĵ�С
	�ܽ᣺
		��ջ --- push
		��ջ --- pop
		����ջ�� --- top
		�ж�ջ�Ƿ�Ϊ�� --- empty
		����ջ��С --- size
*/

#include <iostream>
#include <string>
#include <stack>

void ShowSize(std::stack<int>& _s)
{
	std::cout << _s.size() << std::endl;
}

void Study_StackCommonPort(void)
{
	std::stack<int> s1;

	for (int i = 1; i <= 10; i++)
	{
		s1.push(i * i);
	}

	std::stack<int> s2(s1);

	std::stack<int> s3;
	s3 = s2;

	s3.pop();

	if (s3.empty())
	{
		std::cout << "s3����Ϊ��" << std::endl;
	}
	else
	{
		std::cout << "����s3�Ĵ�СΪ��" << s3.size() << "\n����s3ջ����Ԫ��Ϊ��" << s3.top() << std::endl;
	}

	while (!s2.empty())
	{
		s2.pop();
	}
	if (s2.empty())
	{
		std::cout << "s2����Ϊ��" << std::endl;
	}

}