#include "函数声明库.h"
#include <fstream>

/*========================类声明========================*/
class Person41
{
public:
	char m_Name[64];
	int m_Age;
};

/*========================读文件的函数入口========================*/
void Study_BinaryFile_Read(void)
{
	ifstream ifs("D:/C语言/练习/C++Project/6-1C++文件操作/file-user/binarytest31.txt", ios::binary | ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	cout << "文件打开成功" << endl;

	Person41 p1;
	ifs.read((char*)&p1, sizeof(Person41));
	cout << "姓名：" << p1.m_Name << endl;
	cout << "年龄：" << p1.m_Age << endl;

	ifs.close();
	cout << "文件已关闭" << endl;
}