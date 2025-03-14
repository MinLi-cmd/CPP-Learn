#include<iostream>
using namespace std;

struct NUM
{
	int a;
	short b;
	char c;
	int* d;
};

int main0()
{
	unsigned short num0 = 65535;
	int num1 = 2147483647;
	long num2 = 2147483647;
	long long num3 = 9223372036854775807;
	double de = 300.1415926;
	float ft = 30.14f;
	float ft1 = 2e-3;

	cout << "num0= " << num0 << endl;
	cout << "num1= " << num1 << endl;
	cout << "num2= " << num2 << endl;
	cout << "num3= " << num3 << endl;
	cout << "ft= " << ft << endl;
	cout << "ft1= " << ft1 << endl;
	cout << "de= " << de << endl;

	cout << "short占用 " << sizeof(short) << " 字节" << endl;
	cout << "int占用 " << sizeof(int) << " 字节" << endl;
	cout << "long占用 " << sizeof(long) << " 字节" << endl;
	cout << "long long占用 " << sizeof(long long) << " 字节" << endl;
	cout << "float占用 " << sizeof(float) << " 字节" << endl;
	cout << "double占用 " << sizeof(double) << " 字节" << endl;
	

	system("pause");
	return 0;
}