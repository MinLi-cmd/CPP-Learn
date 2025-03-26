/*
	queue 常用接口
		功能描述：
			栈容器常用的对外接口
	构造函数：
		queue<T> que; //queue采用模板类实现，queue对象的默认构造形式
		queue(const queue &que); //拷贝构造函数
	赋值操作：	
		queue& operator=(const queue &que); //重载等号操作符
	数据存取：
		push(elem); //往队尾添加元素
		pop(); //从队头移除第一个元素
		back(); //返回最后一个元素
		front(); //返回第一个元素
	大小操作：
		empty(); //判断堆栈是否为空
		size(); //返回栈的大小

	总结：
		入队 --- push
		出队 --- pop
		返回队头元素 --- front
		返回队尾元素 --- back
		判断队是否为空 --- empty
		返回队列大小 --- size
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
	Person p[5] = { {"张三",20},{"李四",21}, {"王五",22}, {"赵六",23}, {"陈七",24} };

	std::queue<Person> q;
	for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++)
	{
		q.push(p[i]);
	}

	while (!q.empty())
	{
		std::cout << "此时队列的大小为：" << q.size() << std::endl;
		std::cout << "对头的姓名为：" << q.front()._name << "\t年龄为：" << q.front()._age << std::endl;
		std::cout << "对尾的姓名为：" << q.back()._name << "\t年龄为：" << q.back()._age << std::endl;
		
		q.pop();
	}
}