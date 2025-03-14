#include <iostream>
using namespace std;

int main(void)
{
	short num1, num2;
	int sum1;
	num1 = 5000;
	num2 = 4000;
	num1 > num2 ? sum1 = num1 + num2 : sum1 = num1 - num2;
	cout << "sum1= " << sum1 << endl;

	system("pause");
	return 0;
}