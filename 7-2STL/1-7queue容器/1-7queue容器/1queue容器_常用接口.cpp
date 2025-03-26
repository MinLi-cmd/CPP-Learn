/*
	queue ���ýӿ�
		����������
			ջ�������õĶ���ӿ�
	���캯����
		queue<T> que; //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
		queue(const queue &que); //�������캯��
	��ֵ������	
		queue& operator=(const queue &que); //���صȺŲ�����
	���ݴ�ȡ��
		push(elem); //����β���Ԫ��
		pop(); //�Ӷ�ͷ�Ƴ���һ��Ԫ��
		back(); //�������һ��Ԫ��
		front(); //���ص�һ��Ԫ��
	��С������
		empty(); //�ж϶�ջ�Ƿ�Ϊ��
		size(); //����ջ�Ĵ�С

	�ܽ᣺
		��� --- push
		���� --- pop
		���ض�ͷԪ�� --- front
		���ض�βԪ�� --- back
		�ж϶��Ƿ�Ϊ�� --- empty
		���ض��д�С --- size
*/

#include <iostream>
#include <string>
#include <queue>

class Person
{
public:
	Person(std::string name, int age) :_name(name), _age(age) {}

	std::string _name;
	int _age;
};

void Study_QueueCommonPort(void)
{
	Person p[5] = { {"����",20},{"����",21}, {"����",22}, {"����",23}, {"����",24} };

	std::queue<Person> q;
	for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++)
	{
		q.push(p[i]);
	}

	while (!q.empty())
	{
		std::cout << "��ʱ���еĴ�СΪ��" << q.size() << std::endl;
		std::cout << "��ͷ������Ϊ��" << q.front()._name << "\t����Ϊ��" << q.front()._age << std::endl;
		std::cout << "��β������Ϊ��" << q.back()._name << "\t����Ϊ��" << q.back()._age << std::endl;
		
		q.pop();
	}
}