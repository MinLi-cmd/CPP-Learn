#include <iostream>
using namespace std;
#include <ctime>

int main(void)
{
	srand((unsigned int)NULL);
	unsigned int BigJiang,Chose=1;
	unsigned int gailv;
	unsigned count=0;
	while (Chose==1)
	{
		BigJiang = rand() % 10000;
		gailv = rand() % 10000 - 101;
		count++;
		if (BigJiang > gailv && BigJiang < gailv + 100)
		{
			cout << "������";
			for (int i = 0; i < 15; i++)
			{
				cout << "!";
			}
			cout << endl;
			cout << "��ϲ���" << count << "�γ齱����" << endl;
			break;
		}
		else
		{
			cout << "лл�ݹˣ���ӭ�´�����^_^" << endl;
		}
	}
	
}