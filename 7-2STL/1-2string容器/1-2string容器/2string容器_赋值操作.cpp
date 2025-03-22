/*string赋值操作
功能描述：
		给string字符串进行赋值
赋值的函数原型
		string& operator=(const char* s);	//char*类型字符串赋值给当前的字符串
		string& operator=(const string& s);	//把字符串s赋给当前的字符串
		string& operator=(char c);			//字符赋值给当前的字符串
		string& assign(const char* s);		//把字符串s赋给当前的字符串
		string& assign(const char* s, int n);	//把字符串s的前n个字符赋给当前的字符串
		string& assign(const string& s);		//把字符串s赋给当前字符串
		string& assign(int n, char c);			//用n个字符串c赋给当前字符串
*/

#include <iostream>
using namespace std;
#include <string>

#define STRING_SIZEMAX 7

void Study_String_FuZhi(void)
{
	string s[STRING_SIZEMAX];

	s[0] = "Hello World!";

	string s_temp = "Hello Li!";
	s[1] = s_temp;

	s[2] = 'c';

	s[3].assign("你好世界，assign成员函数");

	s[4].assign("Hello Maomeme", 9);

	s_temp = "你好醨，assign成员函数";
	s[5].assign(s_temp);

	s[6].assign(9, 'h');

	for (int i = 0; i < STRING_SIZEMAX; i++)
	{
		cout << "s" << i + 1 << " = " << s[i] << endl;
	}
}