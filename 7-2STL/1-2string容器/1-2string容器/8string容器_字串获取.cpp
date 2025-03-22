/*string字串
	功能描述
		从字符串中获取想要的字串
	函数原型
		string substr(int pos = 0, int n = npos)const;	//返回由pos开始的n个字符组成的字符串

	总结：灵活的运用求字串功能，可以在实际开发中获取有效的信息
*/

#include<iostream>
using namespace std;
#include <string>

void Study_StringSon(void)
{
	string str = "Hello World";
	string str_son;
	str_son = str.substr(1, 3);
	cout << "str_son = " << str_son << endl;

	//实用案例
	string email = "ZhangSan@qq.com";
	size_t pos = email.find('@');
	str_son = email.substr(0, pos);
	cout << "str_son = " << str_son << endl;
}