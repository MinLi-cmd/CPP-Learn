/*string�����ɾ��
	����������
		��string�ַ������в����ɾ���ַ�����
	����ԭ�ͣ�
		string& insert (int pos, const char* s); 	// �����ַ��� 
		string& insert (int pos, const string& str); 	// �����ַ��� 
		string& insert (int pos, int n, char c); 		//��ָ��λ�ò��� n ���ַ� c 
		string& erase (int pos, int n = npos); 		//ɾ���� Pos ��ʼ�� n ���ַ�
*/

#include<iostream>
using namespace std;
#include<string>

void Study_StringInsertAndErase(void)
{
	string str = "Hello";

	str.insert(1, "�Ұ�C++");
	cout << "str = " << str << endl;

	str.erase(1, 5);
	cout << "str = " << str << endl;
}