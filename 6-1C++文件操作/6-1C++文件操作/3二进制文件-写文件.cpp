#include "函数声明库.h"
#include <fstream>

/*========================类声明========================*/
class Person31
{
public:
	char m_Name[64];
	int m_Age;
};

/*========================写文件的函数入口========================*/
void Study_BinaryFile_Write(void)
{
	ofstream ofs("D:/C语言/练习/C++Project/6-1C++文件操作/file-user/binarytest31.txt", ios::binary | ios::out);
	//ofs.open("D:/C语言/练习/C++Project/6-1C++文件操作/file-user/binarytest31.txt", ios::binary | ios::out);
	Person31 p1 = { "张三",21 };
	ofs.write((const char*)&p1, sizeof(Person31));

	ofs.close();
}