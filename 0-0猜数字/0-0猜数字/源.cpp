/*
	�����֣�ϵͳ�������һ��1��100�����֣���ҽ��в²⣬
	����´���ʾ������ֹ�����С��
	����¶���ϲ�����Ϸʤ����
*/
#include <iostream>
using namespace std;
#include <ctime>

void game(void);

int main(void)
{
	char chose = 0;
	unsigned int count = 0;
	cout << "�Ƿ�ʼ��������Ϸ����Y��or��N����" << endl;
	cin >> chose;
	system("cls");
	if (chose == 'Y' || chose == 'y')
	{
		game();
		system("cls");
		count++;
		cout << "��һ����Ϸ�ѽ����Ƿ�����棿����Y��or��N����" << endl;
		cin >> chose;
		system("cls");
		while (1)
		{
			if (chose != 'Y' && chose != 'y')
			{
				break;
			}
			game();
			system("cls");
			count++;
			cout << "��" << count << "����Ϸ�ѽ����Ƿ�����棿����Y��or��N����" << endl;
			cin >> chose;
			system("cls");
		}
	}

	cout << "��Ϸ���˳�" << endl;

	system("pause");
	return 0;
}

void game(void)
{
	short num1, num2 = 0, count = 0;
	srand((unsigned int)time(NULL));
	num1 = rand() % 100 + 1;//���ɵ���α�����
	cout << "���ڿ�ʼ��Ϸ,�����˳�������Ϸ������һ������100�����ּ���" << endl;
	cout << "ϵͳ������һ��0~100���������" << endl;

	while ((num2 != num1) && (num2 <= 100))
	{
		cout << "��������Ҫ�µ����֣�";
		cin >> num2;
		if ((num2 > num1) && (num2 < 101))
		{
			cout << "��µ����ֱ����ɵ����ִ�" << endl;
		}
		if (num2 < num1)
		{
			cout << "��µ����ֱ����ɵ�����С" << endl;
		}
		count++;
		if (num2 == num1)
		{
			cout << "��ϲ���" << count << "�β¶���" << endl;
		}
	}
}