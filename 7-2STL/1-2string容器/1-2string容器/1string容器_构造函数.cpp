/*
string���캯��
string();					//����һ���յ��ַ��������磺string str;
string(const char* s);		//ʹ���ַ���s��ʼ��
string(const string& str);	//ʹ��һ��string�����ʼ����һ��string����
string(int n, char c);			//ʹ��n���ַ�c��ʼ��
*/

#include <iostream>
#include <string>
using namespace std;

void Study_Srting(void)
{
	string s1;//string s1();�ᱨ���������Żᵱ�ɺ���������

	const char* chararr = { "Hello Worlad" };
	string s2(chararr);

	const string temp = "Hello Li";
	string s3(temp);

	string s4(10, 'b');

	cout << "s1 = " << s1 << "\ns2 = " << s2 << "\ns3 = " << s3 << "\ns4 = " << s4 << endl;

}
