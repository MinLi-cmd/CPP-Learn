/*string��ֵ����
����������
		��string�ַ������и�ֵ
��ֵ�ĺ���ԭ��
		string& operator=(const char* s);	//char*�����ַ�����ֵ����ǰ���ַ���
		string& operator=(const string& s);	//���ַ���s������ǰ���ַ���
		string& operator=(char c);			//�ַ���ֵ����ǰ���ַ���
		string& assign(const char* s);		//���ַ���s������ǰ���ַ���
		string& assign(const char* s, int n);	//���ַ���s��ǰn���ַ�������ǰ���ַ���
		string& assign(const string& s);		//���ַ���s������ǰ�ַ���
		string& assign(int n, char c);			//��n���ַ���c������ǰ�ַ���
*/

#include <iostream>
using namespace std;
#include <string>

#define STRING_SIZEMAX 7

void Study_String_FuZhi(void)
{
	string s[STRING_SIZEMAX];

	s[0] = "Hello World!";

	string s_temp = "Hello Li!";
	s[1] = s_temp;

	s[2] = 'c';

	s[3].assign("������磬assign��Ա����");

	s[4].assign("Hello Maomeme", 9);

	s_temp = "����r��assign��Ա����";
	s[5].assign(s_temp);

	s[6].assign(9, 'h');

	for (int i = 0; i < STRING_SIZEMAX; i++)
	{
		cout << "s" << i + 1 << " = " << s[i] << endl;
	}
}