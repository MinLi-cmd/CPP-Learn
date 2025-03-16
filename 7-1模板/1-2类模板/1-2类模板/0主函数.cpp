#include "0函数声明库.h"

int main(void)
{
	Test_UniversalArrayClass();

	system("pause");
	return 0;
}

/*======分割线函数======*/
void CoutLine(char line, ULL_int count)
{
	for (ULL_int i = 0; i < count; i++)
	{
		cout << line;
	}
	/*cout << endl;*/
}