/*string�ַ����Ƚ�
	��������
		�ַ���֮��ıȽ�
	�ȽϷ�ʽ
		�ַ����Ƚ��ǰ��ַ���ASCII����жԱ�
		=����0
		>����1
		<����-1
	����ԭ��
		int compare(const string& s)const;	//���ַ���s�Ƚ�
		int compare(const char* s)const;	//���ַ���s�Ƚ�
*/
#include <iostream>
using namespace std;
#include <string>

void Study_StringCompare(void)
{
	string str1 = "�Ұ�C++";
	string str2 = "�Ұ�C++";

	int result = str1.compare(str2);

	if (result == 0)
	{
		cout << "str1 ���� str2" << endl;
	}
	else if (result == 1)
	{
		cout << "str1 ���� str2" << endl;
	}
	else if (result == -1)
	{
		cout << "str1 С�� str2" << endl;
	}
}