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
		cout << "请输入您的选择：";
		cin >> choice;

		switch (choice)
		{
		case 0:	//退出系统
			wm.ExitSystem();
			break;

		case 1:	//添加职工
			wm.AddEmp();
			system("pause");
			system("cls");
			break;

		case 2:	//显示职工
			wm.ShowEmp();
			system("pause");
			system("cls");
			break;

		case 3:	//删除职工
			wm.DeleteEmp();
			system("pause");
			system("cls");
			break;

		case 4:	//修改职工
			wm.AmendEmp();
			system("pause");
			system("cls");
			break;

		case 5:	//查找职工
			wm.FindEmp();
			system("pause");
			system("cls");
			break;

		case 6:	//排序职工
			wm.SortEmp();
			system("pause");
			system("cls");
			break;

		case 7:	//清空文件
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

