#include <iostream>
using namespace std;
#include "1WorkerManager.h"

int main(void)
{
	int choice;
	WorkerManager wm;
	while (true)
	{
		wm.Menu_Show();
		cout << "����������ѡ��";
		cin >> choice;

		switch (choice)
		{
		case 0:	//�˳�ϵͳ
			wm.ExitSystem();
			break;

		case 1:	//���ְ��
			wm.AddEmp();
			system("pause");
			system("cls");
			break;

		case 2:	//��ʾְ��
			wm.ShowEmp();
			system("pause");
			system("cls");
			break;

		case 3:	//ɾ��ְ��
			wm.DeleteEmp();
			system("pause");
			system("cls");
			break;

		case 4:	//�޸�ְ��
			wm.AmendEmp();
			system("pause");
			system("cls");
			break;

		case 5:	//����ְ��
			wm.FindEmp();
			system("pause");
			system("cls");
			break;

		case 6:	//����ְ��
			wm.SortEmp();
			system("pause");
			system("cls");
			break;

		case 7:	//����ļ�
			wm.CleanFile();
			system("pause");
			system("cls");
			break;

		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}

