#include<iostream>
using namespace std;
#include<string>

int main()
{
	int a=0;
	cout << "请输入一个整形数据：";
	cin >> a;
	cout << "你输入的整型数据为a= " << a << endl;

	double de = 3.14;
	cout << "请输入一个浮点型数据：";
	cin >> de;
	cout << "你输入的浮点型数据为de=" << de << endl;

	char ch = 65;
	cout << "请输入一个字符型数据：";
	cin >> ch;
	cout << "你输入的字符型数据为ch=" << ch << endl;

	string str0 = "hi!";
	cout << "请输入一个字符串型数据：";
	cin >> str0;
	cout << "你输入的字符串型数据为str0=" << str0 << endl;

	bool flag = 0;
	cout << "请输入一个布尔类型数据：";
	cin >> flag;
	cout << "你输入的布尔类型数据为flag=" << flag << endl;

	system("pause");
	return 0;
}