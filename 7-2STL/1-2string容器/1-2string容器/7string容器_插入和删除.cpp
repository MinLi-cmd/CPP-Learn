/*string插入和删除
	功能描述：
		对string字符串进行插入和删除字符操作
	函数原型：
		string& insert (int pos, const char* s); 	// 插入字符串 
		string& insert (int pos, const string& str); 	// 插入字符串 
		string& insert (int pos, int n, char c); 		//在指定位置插入 n 个字符 c 
		string& erase (int pos, int n = npos); 		//删除从 Pos 开始的 n 个字符
*/

#include<iostream>
using namespace std;
#include<string>

void Study_StringInsertAndErase(void)
{
	string str = "Hello";

	str.insert(1, "我爱C++");
	cout << "str = " << str << endl;

	str.erase(1, 5);
	cout << "str = " << str << endl;
}