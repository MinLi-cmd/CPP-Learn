#include <iostream>
using namespace std;

void Study_ErWeiArray(void)
{
	int Arr_User[][3] = { {2,3,6},{4,3,7},{2,5,7}, {2,1} };
	int Number_Line, Number_Columns;
	Number_Line = sizeof(Arr_User) / sizeof(Arr_User[0]);
	Number_Columns = sizeof(Arr_User[0]) / sizeof(Arr_User[0][0]);
	for (int i = 0; i < Number_Line; i++)
	{
		for (int j = 0; j < Number_Columns; j++)
		{
			cout << Arr_User[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "该二维数组占用空间为：" << sizeof(Arr_User) << "个字节" << endl;
	cout << "该二维数组第一行占用空间为：" << sizeof(Arr_User[0]) << "个字节" << endl;
	cout << "该二维数组第一列占用空间为：" << ((sizeof(Arr_User)/sizeof(Arr_User[0]))*sizeof(Arr_User[0][0])) << "个字节" << endl;
	cout << "该二维数组每一行有：" << sizeof(Arr_User[0]) / sizeof(Arr_User[0][0]) << "个元素" << endl;
	cout << "该二维数组每一列有：" << sizeof(Arr_User) / sizeof(Arr_User[0]) << "个元素" << endl;
	cout << "该二维数组首地址为：" << Arr_User << endl;
	cout << "该二维数组第一行首地址为：" << Arr_User[0] << endl;
	cout << "该二维数组第二行首地址为：" << Arr_User[1] << endl;
	cout << "该二维数组第一行第一列元素地址为：" << &Arr_User[0][0] << endl;
	cout << "该二维数组第二行第一列元素地址为：" << &Arr_User[1][0] << endl;
	cout << "该二维数组第一行首地址和第二行首地址差值为：" << (long long int)Arr_User[1] - (long long int)Arr_User[0] << "个字节" << endl;
	
}