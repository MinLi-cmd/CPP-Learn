/*
*	静态成员变量
* ·所有对象共享同一份数据
* ·在编译阶段分配内存
* ·类内声明，类外初始化
*/

#include <iostream>
using namespace std;

#define Person Person8

class Person
{
public:
	static int m_a;/*类内声明*/
private:
	static int m_b;
};

int Person::m_a = 100;/*类外初始化*/
int Person::m_b = 300;

void Study_StaticMember_Variable(void)
{
	/*该类的所有对象共享同一份静态变量数据*/
	Person p1;
	cout << p1.m_a << endl;/*通过成员访问*/
	Person p2;
	p2.m_a = 200;
	cout << p1.m_a << endl;
	cout << Person::m_a << endl;/*通过类名进行访问*/
	//cout << Person::m_b << endl;/*静态变量成员也是受访问权限控制的*/
}