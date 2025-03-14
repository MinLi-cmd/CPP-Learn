#include <iostream>
using namespace std;

int main()
{
	int a1,b1;
	a1 = 10;
	b1 = ++a1 * 10;
	cout << "a1= " << a1 << "\t" << "b1= " << b1 << "\t" << endl;

	int a2, b2;
	a2 = 10;
	b2 = a2++ * 10;
	cout << "a2= " << a2 << "\t" << "b2= " << b2 << "\t" << endl;

	system("pause");
	return 0;
}