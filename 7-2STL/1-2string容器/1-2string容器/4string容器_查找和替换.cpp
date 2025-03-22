/*string���Һ��滻
	����������
		���ң�����ָ���ַ��Ƿ����
		�滻����ָ����λ���滻�ַ���
	����ԭ��:
		int find (const string& str, int pos = 0) const; // ���� str ��һ�γ���λ�ã��� pos ��ʼ���� 
		int find (const char* s, int pos = 0) const; // ���� s ��һ�γ���λ�ã��� pos ��ʼ���� 
		int find (const char* s, int pos, int n) const; // �� pos λ�ò��� s ��ǰ n ���ַ���һ��λ�� 
		int find (const char c, int pos = 0) const; // �����ַ� c ��һ�γ���λ�� 
		int rfind (const string& str, int pos = npos) const; // ���� str ���һ��λ�ã��� pos ��ʼ���� 
		int rfind (const char* s, int pos = npos) const; // ���� s ���һ�γ���λ�ã��� pos ��ʼ���� 
		int rfind (const char* s, int pos, int n) const; // �� pos ���� s ��ǰ n ���ַ����һ��λ�� 
		int rfind (const char c, int pos = 0) const; // �����ַ� c ���һ�γ���λ�� 
		string& replace (int pos, int n, const string& str); // �滻�� pos ��ʼ n ���ַ�Ϊ�ַ��� 
		str string& replace (int pos, int n,const char* s); // �滻�� pos ��ʼ�� n ���ַ�Ϊ�ַ��� s

	�ܽ᣺
		find�����Ǵ������ң�rfind�Ǵ�������
		find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ�λ�ã��Ҳ�������-1
		replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���
*/

#include <iostream>
using namespace std;
#include <string>

void Study_StringFindAndReplace(void)
{
	string TestString = "abdedcdefdghided";
	size_t pos;

	pos = TestString.find("de");//����������
	cout << "pos = " << pos << endl;

	pos = TestString.rfind("de");//����������
	cout << "pos = " << pos << endl;

	cout << "�滻ǰ��" << TestString << endl;
	TestString.replace(1, 3, "�Ұ�C++");//��"bde"�滻Ϊ"�Ұ�C++"
	cout << "�滻��" << TestString << endl;


}