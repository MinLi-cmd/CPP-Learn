#include "����������.h"
#include <fstream>

/*========================������========================*/
class Person31
{
public:
	char m_Name[64];
	int m_Age;
};

/*========================д�ļ��ĺ������========================*/
void Study_BinaryFile_Write(void)
{
	ofstream ofs("D:/C����/��ϰ/C++Project/6-1C++�ļ�����/file-user/binarytest31.txt", ios::binary | ios::out);
	//ofs.open("D:/C����/��ϰ/C++Project/6-1C++�ļ�����/file-user/binarytest31.txt", ios::binary | ios::out);
	Person31 p1 = { "����",21 };
	ofs.write((const char*)&p1, sizeof(Person31));

	ofs.close();
}