/*
* 设计一个英雄的结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中存放5名英雄。
* 通过冒泡排序的算法，将数组中的英雄按照年龄进行升序，最终打印排序后的结果。
* 五名英雄信息如下：
* 刘备，23，男；关羽，22，男；张飞，20，男；赵云，21，男；貂蝉，19，女
*/

#include <iostream>
using namespace std;
#include <string>

struct Hero
{
	string name;
	int age;
	string gender;
};

void PrintStruct_Array(Hero* a, int len);
void StructArray_ZhiZhenMaoPao(Hero* h, int len);


void Study_Struct_MaoPao(void)
{
	Hero h[] = { {"刘备",23,"男"},{"关羽",22,"男"} ,{"张飞",20,"男"} ,{"赵云",21,"男"} ,{"貂蝉",19,"女"} };
	
	int GeShu = sizeof(h) / sizeof(h[0]);

	cout << "原排序：" << endl;
	PrintStruct_Array(h, GeShu);
	StructArray_ZhiZhenMaoPao(h, GeShu);
	cout << "冒泡后排序：" << endl;
	PrintStruct_Array(h, GeShu);
}

void PrintStruct_Array(Hero* a, int len)
{
	Hero* temp = a;
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << a->name << "\t年龄：" << a->age << "\t性别：" << a->gender << endl;
		a++;
	}
}

void StructArray_ZhiZhenMaoPao(Hero* a, int len)
{
	Hero temp;
	Hero* l, * n;
	for (int i = 0; i < len - 1; i++)
	{
		l = a;
		n = a + 1;
		for (int j = 0; j < len - i - 1; j++)
		{
			if (l->age > n->age)
			{
				temp = *n;
				*n = *l;
				*l = temp;
			}
			l++;
			n++;
		}
	}
}