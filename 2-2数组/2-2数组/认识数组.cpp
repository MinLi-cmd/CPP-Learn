#include <iostream>
using namespace std;

void Study_Array(void)
{
	int Array_User[10] = { 0 };
	cout << "整个数组占用空间为：" << sizeof(Array_User) << " 字节" << endl;
	cout << "第一个数组元素占用空间为：" << sizeof(Array_User[0]) << " 字节" << endl;
	cout << "该数组一共有：" << sizeof(Array_User) / sizeof(Array_User[0]) << " 元素" << endl;
	cout << "该数组第一个元素的地址为：" << Array_User << endl;
	cout << "该数组第二个元素的地址为：" << &Array_User[1] << endl;
}
