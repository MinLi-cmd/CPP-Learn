/*string字符存取
	string中单个字符存取方式有两种
		char& operator[](int n);		//通过[]方式取字符
		char& at(int n);			//通过at方法获取字符
*/

#include<iostream>
using namespace std;
#include<string>

void Study_stringCharCunQu(void)
{
	string str = "Hello World!";

	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	str[0] = 'x';
	cout << "str = " << str << endl;

	str.at(6) = 'b';
	cout << "str = " << str << endl;
}