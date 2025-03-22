/*string字符串比较
	功能描述
		字符串之间的比较
	比较方式
		字符串比较是按字符的ASCII码进行对比
		=返回0
		>返回1
		<返回-1
	函数原型
		int compare(const string& s)const;	//与字符串s比较
		int compare(const char* s)const;	//与字符串s比较
*/
#include <iostream>
using namespace std;
#include <string>

void Study_StringCompare(void)
{
	string str1 = "我爱C++";
	string str2 = "我爱C++";

	int result = str1.compare(str2);

	if (result == 0)
	{
		cout << "str1 等于 str2" << endl;
	}
	else if (result == 1)
	{
		cout << "str1 大于 str2" << endl;
	}
	else if (result == -1)
	{
		cout << "str1 小于 str2" << endl;
	}
}