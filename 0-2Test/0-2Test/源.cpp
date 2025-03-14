
// proj3.cpp
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class doc
{
private:
	char* str;  //�ı��ַ����׵�ַ
	int length; //�ı��ַ�����
public:
	//���캯������ȡ�ļ����ݣ����ڳ�ʼ���¶���filename���ļ����ַ����׵�ַ��
	doc(char* filename);
	void reverse(); //���ַ����з�ת
	~doc();
	void writeToFile(char* filename);
};

doc::doc(char* filename)
{
	ifstream myFile(filename);
	int len = 1001, tmp;
	str = new char[len];
	length = 0;
	while ((tmp = myFile.get()) != EOF)
	{
		str[length++] = tmp;
	}
	str[length] = '\0';
	myFile.close();
}

void doc::reverse() {
	// ������str�е�length���ַ��еĵ�һ���ַ������һ���ַ��������ڶ����ַ��뵹���ڶ���
	// �ַ���������
	//*************333***********         
	int i, j;
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	//*************666***********
}

doc::~doc()
{
	delete[] str;
}

void doc::writeToFile(char* filename)
{
	ofstream outFile(filename);
	outFile << str;
	outFile.close();
}

void main()
{
	doc myDoc("in.dat");
	myDoc.reverse();
	myDoc.writeToFile("out.dat");
}

