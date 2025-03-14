/*
* 从1开始到数字100，如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出
*/

#include <iostream>
using namespace std;

void HitDesk(void)
{
	unsigned short DeskChose, Count=0;
	for (DeskChose = 1; DeskChose < 101; DeskChose++)
	{
		cout << DeskChose << "\t";
		if (DeskChose % 5 == 0) { cout << endl; }	
	}
	cout << "需要敲桌子的数字为：" << endl;
	for (DeskChose = 1; DeskChose < 101; DeskChose++)
	{
		if (DeskChose % 10 == 7 || (DeskChose / 10) % 10 == 7 || DeskChose % 7 == 0)
		{
			cout << DeskChose << "\t";
			Count++;
			if (Count != 0 && Count % 5 == 0) { cout << endl; }
		}
	}
	
}