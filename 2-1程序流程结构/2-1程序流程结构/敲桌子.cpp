/*
* ��1��ʼ������100��������ָ�λ����7����������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ���
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
	cout << "��Ҫ�����ӵ�����Ϊ��" << endl;
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