#include "����������.h"
#include <fstream>

/*
* д�ļ��������£�
* 1.����ͷ�ļ���#include <fstream>
* 2.����������ofstream ofs;
* 3.���ļ���	ofs.open("�ļ�·��","�򿪷�ʽ")
* 4.д���ݣ�	ofs<<"д�������";
* 5.�ر��ļ���	ofs.close();
*/

/*========================д�ļ��ĺ������========================*/
void Study_TextFile_Write(void)
{
	ofstream f1;
	//f1.open("test11.txt", ios::app | ios::ate);//Ĭ��λ�� �� ��.cpp�ļ�ͬ·��
	f1.open("D:/C����/��ϰ/C++Project/6-1C++�ļ�����/file-user/Texttest11.txt", ios::out);
	f1 << "����������" << endl;
	f1 << "�Ա���" << endl;
	f1 << "���䣺21" << endl;
	f1.close();
}

/*========================���๦�ܺ���ʵ��========================*/