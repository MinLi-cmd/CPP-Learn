#include <iostream>
using namespace std;

int main0()
{
	int A, B, C;
	cout << "������С��A������Ϊ����ǧ�ˣ�";
	cin >> A;
	cout << "������С��B������Ϊ����ǧ�ˣ�";
	cin >> B;
	cout << "������С��C������Ϊ����ǧ�ˣ�";
	cin >> C;

	if (A > B)
	{
		if (A > C)
		{
			cout << "С��A����������" << endl;
		}
		else if (A < C)
		{
			cout << "С��C����������" << endl;
		}
	}
	else
	{
		if (B > C)
		{
			cout << "С��B����������" << endl;
		}
		else if (B < C)
		{
			cout << "С��C����������" << endl;
		}
	}

	system("pause");
	return 0;
}