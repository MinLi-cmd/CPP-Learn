/*string�ִ�
	��������
		���ַ����л�ȡ��Ҫ���ִ�
	����ԭ��
		string substr(int pos = 0, int n = npos)const;	//������pos��ʼ��n���ַ���ɵ��ַ���

	�ܽ᣺�����������ִ����ܣ�������ʵ�ʿ����л�ȡ��Ч����Ϣ
*/

#include<iostream>
using namespace std;
#include <string>

void Study_StringSon(void)
{
	string str = "Hello World";
	string str_son;
	str_son = str.substr(1, 3);
	cout << "str_son = " << str_son << endl;

	//ʵ�ð���
	string email = "ZhangSan@qq.com";
	size_t pos = email.find('@');
	str_son = email.substr(0, pos);
	cout << "str_son = " << str_son << endl;
}