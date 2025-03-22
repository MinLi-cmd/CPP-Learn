/*
string构造函数
string();					//创建一个空的字符串，例如：string str;
string(const char* s);		//使用字符串s初始化
string(const string& str);	//使用一个string对象初始化另一个string对象
string(int n, char c);			//使用n个字符c初始化
*/

#include <iostream>
#include <string>
using namespace std;

void Study_Srting(void)
{
	string s1;//string s1();会报错，加上括号会当成函数的声明

	const char* chararr = { "Hello Worlad" };
	string s2(chararr);

	const string temp = "Hello Li";
	string s3(temp);

	string s4(10, 'b');

	cout << "s1 = " << s1 << "\ns2 = " << s2 << "\ns3 = " << s3 << "\ns4 = " << s4 << endl;

}
