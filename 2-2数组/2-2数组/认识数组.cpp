#include <iostream>
using namespace std;

void Study_Array(void)
{
	int Array_User[10] = { 0 };
	cout << "��������ռ�ÿռ�Ϊ��" << sizeof(Array_User) << " �ֽ�" << endl;
	cout << "��һ������Ԫ��ռ�ÿռ�Ϊ��" << sizeof(Array_User[0]) << " �ֽ�" << endl;
	cout << "������һ���У�" << sizeof(Array_User) / sizeof(Array_User[0]) << " Ԫ��" << endl;
	cout << "�������һ��Ԫ�صĵ�ַΪ��" << Array_User << endl;
	cout << "������ڶ���Ԫ�صĵ�ַΪ��" << &Array_User[1] << endl;
}
