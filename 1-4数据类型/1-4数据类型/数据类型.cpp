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

	cout << "shortռ�� " << sizeof(short) << " �ֽ�" << endl;
	cout << "intռ�� " << sizeof(int) << " �ֽ�" << endl;
	cout << "longռ�� " << sizeof(long) << " �ֽ�" << endl;
	cout << "long longռ�� " << sizeof(long long) << " �ֽ�" << endl;
	cout << "floatռ�� " << sizeof(float) << " �ֽ�" << endl;
	cout << "doubleռ�� " << sizeof(double) << " �ֽ�" << endl;
	

	system("pause");
	return 0;
}