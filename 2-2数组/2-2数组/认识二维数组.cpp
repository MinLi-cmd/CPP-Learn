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
	cout << "�ö�ά����ռ�ÿռ�Ϊ��" << sizeof(Arr_User) << "���ֽ�" << endl;
	cout << "�ö�ά�����һ��ռ�ÿռ�Ϊ��" << sizeof(Arr_User[0]) << "���ֽ�" << endl;
	cout << "�ö�ά�����һ��ռ�ÿռ�Ϊ��" << ((sizeof(Arr_User)/sizeof(Arr_User[0]))*sizeof(Arr_User[0][0])) << "���ֽ�" << endl;
	cout << "�ö�ά����ÿһ���У�" << sizeof(Arr_User[0]) / sizeof(Arr_User[0][0]) << "��Ԫ��" << endl;
	cout << "�ö�ά����ÿһ���У�" << sizeof(Arr_User) / sizeof(Arr_User[0]) << "��Ԫ��" << endl;
	cout << "�ö�ά�����׵�ַΪ��" << Arr_User << endl;
	cout << "�ö�ά�����һ���׵�ַΪ��" << Arr_User[0] << endl;
	cout << "�ö�ά����ڶ����׵�ַΪ��" << Arr_User[1] << endl;
	cout << "�ö�ά�����һ�е�һ��Ԫ�ص�ַΪ��" << &Arr_User[0][0] << endl;
	cout << "�ö�ά����ڶ��е�һ��Ԫ�ص�ַΪ��" << &Arr_User[1][0] << endl;
	cout << "�ö�ά�����һ���׵�ַ�͵ڶ����׵�ַ��ֵΪ��" << (long long int)Arr_User[1] - (long long int)Arr_User[0] << "���ֽ�" << endl;
	
}