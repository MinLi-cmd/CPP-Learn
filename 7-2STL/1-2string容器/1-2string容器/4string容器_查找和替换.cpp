/*string查找和替换
	功能描述：
		查找：查找指定字符是否存在
		替换：在指定的位置替换字符串
	函数原型:
		int find (const string& str, int pos = 0) const; // 查找 str 第一次出现位置，从 pos 开始查找 
		int find (const char* s, int pos = 0) const; // 查找 s 第一次出现位置，从 pos 开始查找 
		int find (const char* s, int pos, int n) const; // 从 pos 位置查找 s 的前 n 个字符第一次位置 
		int find (const char c, int pos = 0) const; // 查找字符 c 第一次出现位置 
		int rfind (const string& str, int pos = npos) const; // 查找 str 最后一次位置，从 pos 开始查找 
		int rfind (const char* s, int pos = npos) const; // 查找 s 最后一次出现位置，从 pos 开始查找 
		int rfind (const char* s, int pos, int n) const; // 从 pos 查找 s 的前 n 个字符最后一次位置 
		int rfind (const char c, int pos = 0) const; // 查找字符 c 最后一次出现位置 
		string& replace (int pos, int n, const string& str); // 替换从 pos 开始 n 个字符为字符串 
		str string& replace (int pos, int n,const char* s); // 替换从 pos 开始的 n 个字符为字符串 s

	总结：
		find查找是从左往右，rfind是从右往左
		find找到字符串后返回查找的第一个字符位置，找不到返回-1
		replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串
*/

#include <iostream>
using namespace std;
#include <string>

void Study_StringFindAndReplace(void)
{
	string TestString = "abdedcdefdghided";
	size_t pos;

	pos = TestString.find("de");//从左往右找
	cout << "pos = " << pos << endl;

	pos = TestString.rfind("de");//从右往左找
	cout << "pos = " << pos << endl;

	cout << "替换前：" << TestString << endl;
	TestString.replace(1, 3, "我爱C++");//将"bde"替换为"我爱C++"
	cout << "替换后：" << TestString << endl;


}