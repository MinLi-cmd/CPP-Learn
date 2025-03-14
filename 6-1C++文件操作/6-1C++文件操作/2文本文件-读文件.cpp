#include "函数声明库.h"
#include <fstream>

/*
* 读文件步骤如下：
* 1.包含头文件						#include <fstream>
* 2.创建流对象						ifstream ifs;
* 3.打开文件并判断文件是否打开成功	ifs.open("文件路径","打开方式");
* 4.读数据							四种方式读取
* 5.关闭文件						ifs.close();
*/

void CuttingLine(char line, ULL_int count);
/*========================读文件的函数入口========================*/
void Study_TextFile_Read(void)
{
	ifstream ifs;
	ifs.open("D:/C语言/练习/C++Project/6-1C++文件操作/file-user/Texttest11.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;

		return;
	}
	cout << "文件打开成功" << endl;

	/*======读数据======*/
	/*======第一种方式======*/
	char buf1[1024] = { 0 };
	while (ifs >> buf1)
	{
		cout << buf1 << endl;
	}

	///*======第二种方式======*/
	//char buf2[1024] = { 0 };
	//while (ifs.getline(buf2, sizeof(buf2)))
	//{
	//	cout << buf2 << endl;
	//}

	///*======第三种方式======*/
	//string buf3;
	//while (getline(ifs, buf3))
	//{
	//	cout << buf3 << endl;
	//}

	///*======第四种方式======*/
	//char c;
	//while ((c = ifs.get()) != EOF)//EOF:end of file
	//{
	//	cout << c;
	//}

	//ifs.close();
	cout << "文件已关闭" << endl;
}

/*========================其余功能函数实现========================*/
void CuttingLine(char line, ULL_int count)
{
	for (ULL_int i = 0; i < count; i++)
	{
		cout << line;
	}
	cout << endl;
}