#include "����������.h"
#include <fstream>

/*
* ���ļ��������£�
* 1.����ͷ�ļ�						#include <fstream>
* 2.����������						ifstream ifs;
* 3.���ļ����ж��ļ��Ƿ�򿪳ɹ�	ifs.open("�ļ�·��","�򿪷�ʽ");
* 4.������							���ַ�ʽ��ȡ
* 5.�ر��ļ�						ifs.close();
*/

void CuttingLine(char line, ULL_int count);
/*========================���ļ��ĺ������========================*/
void Study_TextFile_Read(void)
{
	ifstream ifs;
	ifs.open("D:/C����/��ϰ/C++Project/6-1C++�ļ�����/file-user/Texttest11.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;

		return;
	}
	cout << "�ļ��򿪳ɹ�" << endl;

	/*======������======*/
	/*======��һ�ַ�ʽ======*/
	char buf1[1024] = { 0 };
	while (ifs >> buf1)
	{
		cout << buf1 << endl;
	}

	///*======�ڶ��ַ�ʽ======*/
	//char buf2[1024] = { 0 };
	//while (ifs.getline(buf2, sizeof(buf2)))
	//{
	//	cout << buf2 << endl;
	//}

	///*======�����ַ�ʽ======*/
	//string buf3;
	//while (getline(ifs, buf3))
	//{
	//	cout << buf3 << endl;
	//}

	///*======�����ַ�ʽ======*/
	//char c;
	//while ((c = ifs.get()) != EOF)//EOF:end of file
	//{
	//	cout << c;
	//}

	//ifs.close();
	cout << "�ļ��ѹر�" << endl;
}

/*========================���๦�ܺ���ʵ��========================*/
void CuttingLine(char line, ULL_int count)
{
	for (ULL_int i = 0; i < count; i++)
	{
		cout << line;
	}
	cout << endl;
}