#include<iostream>
using namespace std;

int main1()
{
	char ch1 = 65;
	char ch2 = 'A';
	cout << "char字符型占用空间为：" << sizeof(char) << " 字节" << endl;
	cout << "ch1 = " << ch1 << endl;
	cout << "ch2 = " << ch2 << endl;
	cout << "(int)ch1 = " << (int)ch1 << endl;
	system("pause");
	return 0;
}