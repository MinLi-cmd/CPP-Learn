/*string�ַ���ƴ��
��������
	ʵ�����ַ���ĩβƴ���ַ���
����ԭ��
string& operator+=(const char* str);			//����+=������
string& operator+=(const char c);			//����+=������
string& operator+=(const string& str);		//����+=������
string& append(const char* s);				//���ַ���s���ӵ���ǰ�ַ�����β
string& append(const char* s, int n);			//���ַ���s ��ǰn���ַ����ӵ���ǰ�ַ�����β
string& append(const string& s);				//ͬoperator+=(const string& str)
string& append(const string& s,int pos, int n);	//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
*/

#include <iostream>
using namespace std;
#include <string>

void PersonStringArr(string* _s)
{
	for (int i = 0; i < 7; i++)
	{
		cout << _s[i] << endl;
	}
}

void Study_StringAppEnd(void)
{
	string s[7] = { {"��"},{"Includ"},{"��Ҳ"},{"I "},{"Go To "},{"��Ҳ"},{"test"}};
	string temp = "��C++";

	cout << "ƴ��ǰ��" << endl;
	PersonStringArr(s);
	cout << endl;

	s[0] += "��C++";
	s[1] += 'e';
	s[2] += temp;
	s[3].append("Love You");
	s[4].append("School And Home", 6);
	s[5].append(temp);
	s[6].append("include", 2, 5);
	s[6].append(temp, 0, 4);
	cout << "ƴ�Ӻ�" << endl;
	PersonStringArr(s);
}