#include "����������.h"
#include <fstream>

/*========================������========================*/
class Person41
{
public:
	char m_Name[64];
	int m_Age;
};

/*========================���ļ��ĺ������========================*/
void Study_BinaryFile_Read(void)
{
	ifstream ifs("D:/C����/��ϰ/C++Project/6-1C++�ļ�����/file-user/binarytest31.txt", ios::binary | ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	cout << "�ļ��򿪳ɹ�" << endl;

	Person41 p1;
	ifs.read((char*)&p1, sizeof(Person41));
	cout << "������" << p1.m_Name << endl;
	cout << "���䣺" << p1.m_Age << endl;

	ifs.close();
	cout << "�ļ��ѹر�" << endl;
}