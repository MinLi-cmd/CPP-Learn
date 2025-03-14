/*
* 有三名同学（张三，李四，王五）在一次考试中的成绩分别为
* 姓名		语文	数学	英语
* 张三		100		100		100
* 李四		90		50		100
* 王五		60		70		80
* 分别输出三名同学的总成绩
* 请用二维数组实现
*/

#include <iostream>
using namespace std;
#include <string>

void Study_ErWeiArray_OutScores(void)
{
	int scores[][3] = { {100,100,100},{90,50,100},{60,70,80} };
	int Number_Line, Number_Columns;
	int result[3] = { 0 };
	string names[3] = { "张三","李四","王五" };

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
		cout << names[i] << "的总成绩为：" << result[i] << endl;
	}
}