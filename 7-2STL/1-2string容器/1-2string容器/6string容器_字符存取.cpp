/*string�ַ���ȡ
	string�е����ַ���ȡ��ʽ������
		char& operator[](int n);		//ͨ��[]��ʽȡ�ַ�
		char& at(int n);			//ͨ��at������ȡ�ַ�
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