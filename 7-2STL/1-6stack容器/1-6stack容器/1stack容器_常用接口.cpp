/*
stack 常用接口
	功能描述：
		栈容器常用的对外接口
	构造函数：
		stack<T> stk; //stack采用模板类实现， stack对象的默认构造形式
		stack(const stack &stk); //拷贝构造函数
	赋值操作：
		stack& operator=(const stack &stk); //重载等号操作符
	数据存取：
		push(elem); //向栈顶添加元素
		pop(); //从栈顶移除第一个元素
		top(); //返回栈顶元素
	大小操作：
		empty(); //判断堆栈是否为空
		size(); //返回栈的大小
	总结：
		入栈 --- push
		出栈 --- pop
		返回栈顶 --- top
		判断栈是否为空 --- empty
		返回栈大小 --- size
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
		std::cout << "s3容器为空" << std::endl;
	}
	else
	{
		std::cout << "容器s3的大小为：" << s3.size() << "\n容器s3栈顶的元素为：" << s3.top() << std::endl;
	}

	while (!s2.empty())
	{
		s2.pop();
	}
	if (s2.empty())
	{
		std::cout << "s2容器为空" << std::endl;
	}

}