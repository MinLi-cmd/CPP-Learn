#include<iostream>
using namespace std;

int main4()
{
	cout << "bool类型占用的空间大小为：" << sizeof(bool) << endl;
	bool flag = true;//1
	cout << "flag = " << flag << endl;
	flag = false;//0
	cout << "flag = " << flag << endl;
	system("pause");
	return 0;
}