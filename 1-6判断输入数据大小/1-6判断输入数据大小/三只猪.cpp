#include <iostream>
using namespace std;

int main0()
{
	int A, B, C;
	cout << "请输入小猪A的体重为多少千克：";
	cin >> A;
	cout << "请输入小猪B的体重为多少千克：";
	cin >> B;
	cout << "请输入小猪C的体重为多少千克：";
	cin >> C;

	if (A > B)
	{
		if (A > C)
		{
			cout << "小猪A的体重最重" << endl;
		}
		else if (A < C)
		{
			cout << "小猪C的体重最重" << endl;
		}
	}
	else
	{
		if (B > C)
		{
			cout << "小猪B的体重最重" << endl;
		}
		else if (B < C)
		{
			cout << "小猪C的体重最重" << endl;
		}
	}

	system("pause");
	return 0;
}