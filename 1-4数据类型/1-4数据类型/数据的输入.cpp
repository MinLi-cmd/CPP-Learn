#include<iostream>
using namespace std;
#include<string>

int main()
{
	int a=0;
	cout << "������һ���������ݣ�";
	cin >> a;
	cout << "���������������Ϊa= " << a << endl;

	double de = 3.14;
	cout << "������һ�����������ݣ�";
	cin >> de;
	cout << "������ĸ���������Ϊde=" << de << endl;

	char ch = 65;
	cout << "������һ���ַ������ݣ�";
	cin >> ch;
	cout << "��������ַ�������Ϊch=" << ch << endl;

	string str0 = "hi!";
	cout << "������һ���ַ��������ݣ�";
	cin >> str0;
	cout << "��������ַ���������Ϊstr0=" << str0 << endl;

	bool flag = 0;
	cout << "������һ�������������ݣ�";
	cin >> flag;
	cout << "������Ĳ�����������Ϊflag=" << flag << endl;

	system("pause");
	return 0;
}