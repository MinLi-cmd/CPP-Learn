/*
* ������ͬѧ�����������ģ����壩��һ�ο����еĳɼ��ֱ�Ϊ
* ����		����	��ѧ	Ӣ��
* ����		100		100		100
* ����		90		50		100
* ����		60		70		80
* �ֱ��������ͬѧ���ܳɼ�
* ���ö�ά����ʵ��
*/

#include <iostream>
using namespace std;
#include <string>

void Study_ErWeiArray_OutScores(void)
{
	int scores[][3] = { {100,100,100},{90,50,100},{60,70,80} };
	int Number_Line, Number_Columns;
	int result[3] = { 0 };
	string names[3] = { "����","����","����" };

	Number_Line = sizeof(scores) / sizeof(scores[0]);
	Number_Columns = sizeof(scores[0]) / sizeof(scores[0][0]);

	for (int i = 0; i < Number_Line; i++)
	{
		for (int j = 0; j < Number_Columns; j++)
		{
			cout<<scores[i][j]<<"\t";
		}
		cout << endl;
	}

	for (int i = 0; i < Number_Line; i++)
	{
		for (int j = 0; j < Number_Columns; j++)
		{
			result[i] += scores[i][j];
		}
	}

	for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++)
	{
		cout << names[i] << "���ܳɼ�Ϊ��" << result[i] << endl;
	}
}