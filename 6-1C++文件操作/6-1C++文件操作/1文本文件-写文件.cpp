#include "函数声明库.h"
#include <fstream>

/*
* 写文件步骤如下：
* 1.包含头文件：#include <fstream>
* 2.创建流对象：ofstream ofs;
* 3.打开文件：	ofs.open("文件路径","打开方式")
* 4.写数据：	ofs<<"写入的数据";
* 5.关闭文件：	ofs.close();
*/

/*========================写文件的函数入口========================*/
void Study_TextFile_Write(void)
{
	ofstream f1;
	//f1.open("test11.txt", ios::app | ios::ate);//默认位置 与 该.cpp文件同路径
	f1.open("D:/C语言/练习/C++Project/6-1C++文件操作/file-user/Texttest11.txt", ios::out);
	f1 << "姓名：张三" << endl;
	f1 << "性别：男" << endl;
	f1 << "年龄：21" << endl;
	f1.close();
}

/*========================其余功能函数实现========================*/