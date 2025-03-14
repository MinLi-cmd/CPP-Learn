#include <iostream>
using namespace std;

void Study_ZhiZhen_Array(void)
{
	int Array_User[] = { 1,2,3,4,5,6,7,8,9,10 };
	unsigned short Array_User_GeShu;
	Array_User_GeShu = sizeof(Array_User) / sizeof(Array_User[0]);
	const int* p;
	p = Array_User;
	for (int i = 0; i < Array_User_GeShu; i++,p++)
	{
		cout << p << "\t";
		cout << "*p = " << *p << endl;
	}
}