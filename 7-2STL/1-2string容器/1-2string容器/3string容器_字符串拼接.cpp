/*string字符串拼接
功能描述
	实现在字符串末尾拼接字符串
函数原型
string& operator+=(const char* str);			//重载+=操作符
string& operator+=(const char c);			//重载+=操作符
string& operator+=(const string& str);		//重载+=操作符
string& append(const char* s);				//把字符串s连接到当前字符串结尾
string& append(const char* s, int n);			//把字符串s 的前n个字符链接到当前字符串结尾
string& append(const string& s);				//同operator+=(const string& str)
string& append(const string& s,int pos, int n);	//字符串s中从pos开始的n个字符链接到字符串结尾
*/

#include <iostream>
using namespace std;
#include <string>

void PersonStringArr(string* _s)
{
	for (int i = 0; i < 7; i++)
	{
		cout << _s[i] << endl;
	}
}

void Study_StringAppEnd(void)
{
	string s[7] = { {"我"},{"Includ"},{"你也"},{"I "},{"Go To "},{"他也"},{"test"}};
	string temp = "爱C++";

	cout << "拼接前：" << endl;
	PersonStringArr(s);
	cout << endl;

	s[0] += "爱C++";
	s[1] += 'e';
	s[2] += temp;
	s[3].append("Love You");
	s[4].append("School And Home", 6);
	s[5].append(temp);
	s[6].append("include", 2, 5);
	s[6].append(temp, 0, 4);
	cout << "拼接后：" << endl;
	PersonStringArr(s);
}