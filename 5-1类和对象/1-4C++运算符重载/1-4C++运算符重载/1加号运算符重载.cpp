/*
* 加法运算符重载关键字 operator+ 
* 运算符重载 也可以发生函数重载
* 总结：
* 1.对于内置的数据类型的表达式的运算符是不可能改变的
* 2.不要滥用运算符重载
*/


#include <iostream>
using namespace std;

#define Person Person1

class Person
{
public:
	/*成员函数重载+号*/
	//Person operator +(Person& p);//第一种方式的声明
	int num1, num2;
};
/*第一种 成员函数运算符重载*/
//Person Person::operator +(Person& p)
//{
//	Person temp;
//	temp.num1 = this->num1 + p.num1;
//	temp.num2 = this->num2 + p.num2;
//	return temp;
//}

Person operator +(Person& p1, Person& p2);//第二种方式的声明
Person operator +(Person& p1, int a);//运算符重载的函数重载


/*加号运算符重载函数入口*/
void Study_OperatorOverloading_Plus(void)
{
	Person p1;
	p1.num1 = 10;
	p1.num2 = 20;
	Person p2;
	p2.num1 = 30;
	p2.num2 = 40;

	Person sum1;
	sum1 = p1 + p2;
	Person sum2;
	sum2 = p2 + 100;

	/*第一种 成员函数运算符重载的本质*/
	/*sum = p1.operator+(p2);*/

	/*第二种 全局函数运算符重载的本质*/
	/*sum = operator +(p1, p2);*/

	cout << sum1.num1 << endl << sum1.num2 << endl;
	cout << sum2.num1 << endl << sum2.num2 << endl;
}
/*第二种 全局函数运算符重载*/
Person operator +(Person& p1, Person& p2)
{
	Person temp;
	temp.num1 = p1.num1 + p2.num1;
	temp.num2 = p1.num2 + p2.num2;
	return temp;
}

Person operator +(Person& p1, int a)
{
	Person temp;
	temp.num1 = p1.num1 + a;
	temp.num2 = p1.num2 + a;
	return temp;
}