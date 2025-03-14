/*
* C++类中的成员可以是另一个类的对象，我们称该成员为对象成员
* 结论：当其他类对象作为本类成员，构造时候先构造类对象，再构造自身
* 析构时候先析构自身再析构类对象
* 先构造后析构
*/

#include <iostream>
using namespace std;
#include <string>

#define Phone Phone1
#define Person Person7

/*手机类*/
class Phone
{
public:
	Phone(string PhoneName)
	{
		phone_name = PhoneName;
		cout << "Phone1 的有参构造函数调用" << endl;
	}
	~Phone()
	{
		cout << "Phone1 的析构函数调用" << endl;
	}
	string phone_name;
};
/*人类*/
class Person
{
public:
	Person(string PersonName, string PhoneName):person_name(PersonName),person_havephone(PhoneName)
	{
		cout << "Person7 的有参构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person7 的析构函数调用" << endl;
	}
	string person_name;
	Phone1 person_havephone;
};
void Study_Lei_DuiXiangIsChengYuan(void)
{
	Person p1("张三", "IPhone15ProMAX");
	cout << p1.person_name << "拿的" << p1.person_havephone.phone_name << endl;
}