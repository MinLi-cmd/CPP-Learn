#include "1WorkerManager.h"

/*===WorkerManager构造函数===*/
WorkerManager::WorkerManager(void)
{
	ifstream ifs(FileName, ios::in);
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		this->FileEmplyFlag = true;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	char ch;
	ifs >> ch;//先读一个字符
	if (ifs.eof())
	{
		//cout << "文件为空" << endl;
		this->FileEmplyFlag = true;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	ifs.close();
	this->FileEmplyFlag = false;
	InitEmp();
}

/*===菜单显示===*/
void WorkerManager::Menu_Show(void)
{
	ULL_int width = 13;//菜单宽度 默认13
	char LineMod = '*';//菜单样式 默认42	'*'
	WMMenuText("", LineMod, width + 9);
	WMMenuText("  欢迎使用职工管理系统！  ", LineMod, width - 4);
	WMMenuText("  0.退出管理程序  ", LineMod, width);
	WMMenuText("  1.增加职工信息  ", LineMod, width);
	WMMenuText("  2.显示职工信息  ", LineMod, width);
	WMMenuText("  3.删除离职职工  ", LineMod, width);
	WMMenuText("  4.修改职工信息  ", LineMod, width);
	WMMenuText("  5.查找职工信息  ", LineMod, width);
	WMMenuText("  6.按照编号排序  ", LineMod, width);
	WMMenuText("  7.清空所有文档  ", LineMod, width);
	WMMenuText("", LineMod, width + 9);
	cout << endl;
}

/*===退出系统===*/
void WorkerManager::ExitSystem(void)
{
	cout << "已退出系统，欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

/*===批量添加新职工信息===*/
void WorkerManager::AddEmp(void)
{
	ULL_int AddNum;
	cout << "请输入增加职工的数量：";
	cin >> AddNum;
	if (AddNum == 0)
	{
		return;
	}

	ULL_int NewSize;
	NewSize = this->m_EmpNum + AddNum;

	Worker** newspace = new Worker* [NewSize];

	if (this->m_EmpArray != NULL)
	{
		for (ULL_int i = 0; i < this->m_EmpNum; i++)
		{
			newspace[i] = this->m_EmpArray[i];
		}
	}

	for (ULL_int i = 0; i < AddNum; i++)
	{
		ULL_int Id;
		string Name;
		ULL_int DepartmentSelect;
		cout << "请输入新增的第" << i + 1 << "名职工的职工编号：";
		cin >> Id;
		cout << "请输入新增的第" << i + 1 << "名职工的姓名：";
		cin >> Name;
		cout << "1——普通员工" << endl;
		cout << "2——经理" << endl;
		cout << "3——总裁" << endl;
		cout << "请选择该职工的岗位：" << endl;
		
		do
		{
			cin >> DepartmentSelect;
			switch (DepartmentSelect)
			{
			case 1:
				newspace[this->m_EmpNum + i] = new Employee(Id, Name, 001);
				break;
			case 2:
				newspace[this->m_EmpNum + i] = new Manager(Id, Name, 002);
				break;
			case 3:
				newspace[this->m_EmpNum + i] = new Boss(Id, Name, 003);
				break;
			default:
				cout << "输入有误，请重新选择：";
				break;
			}
		}
		while (DepartmentSelect != 1 && DepartmentSelect != 2 && DepartmentSelect != 3);
	}
	delete [] this->m_EmpArray;
	this->m_EmpArray = newspace;
	this->m_EmpNum = NewSize;
	SaveInFile();
	this->FileEmplyFlag = false;
	cout << "成功添加" << AddNum << "名新职工" << endl;
	
}

/*===显示职工信息===*/
void WorkerManager::ShowEmp(void)
{
	if (this->m_EmpNum != 0 && this->FileEmplyFlag == false)
	{
		for (ULL_int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->ShowInfo();
		}
	}
	else
	{
		cout << "该系统暂无职工信息，请先添加" << endl;
	}
}

/*===删除职工信息===*/
void WorkerManager::DeleteEmp(void)
{
	ShowEmp();
	if (this->m_EmpNum == 0 || this->FileEmplyFlag == true)
	{
		return;
	}

	ULL_int Id;
	cout << "请输入要删除的职工的编号：";
	cin >> Id;

	ULL_int DelNum = EmpExist(Id);
	if (DelNum == -1)
	{
		cout << "未找到该职工" << endl;
		return;
	}
	for (ULL_int i = DelNum; i < this->m_EmpNum; i++)
	{
		this->m_EmpArray[i] = this->m_EmpArray[i + 1];
		//0 1 2 3 4 5
	}
	this->m_EmpNum--;
	if (this->m_EmpNum == 0)
	{
		this->FileEmplyFlag = true;
	}
	this->SaveInFile();
	cout << "删除成功" << endl;
}

/*===修改职工信息===*/
void WorkerManager::AmendEmp(void)
{
	ShowEmp();

	if (this->m_EmpNum == 0 && this->FileEmplyFlag == true)
	{
		return;
	}

	ULL_int Id;
	cout << "请输入要修改的职工的编号：";
	cin >> Id;

	ULL_int AmendNum = EmpExist(Id);
	if (AmendNum == -1)
	{
		cout << "未找到该职工" << endl;
		return;
	}

	delete this->m_EmpArray[AmendNum];
	Worker* w1 = NULL;

	string Name;
	ULL_int DepartmentId;
	cout << "请输入该职工修改后的编号：";
	cin >> Id;
	cout << "请输入该职工修改后的姓名：";
	cin >> Name;
	cout << "1——普通员工" << endl;
	cout << "2——经理" << endl;
	cout << "3——总裁" << endl;
	cout << "请选择该职工修改后的岗位：" << endl;

	do
	{
		cin >> DepartmentId;
		switch (DepartmentId)
		{
		case 1:
			w1 = new Employee(Id, Name, DepartmentId);
			break;
		case 2:
			w1 = new Manager(Id, Name, DepartmentId);
			break;
		case 3:
			w1 = new Boss(Id, Name, DepartmentId);
			break;
		default:
			cout << "输入有误，请重新选择：";
			break;
		}
	} while (DepartmentId != 1 && DepartmentId != 2 && DepartmentId != 3);
	this->m_EmpArray[AmendNum] = w1;
	this->SaveInFile();
	cout << "修改成功" << endl;
}

/*===查找职工信息===*/
void WorkerManager::FindEmp(void)
{
	ShowEmp();

	int Select;
	ULL_int Id;
	string Name;
	cout << "1——根据职工编号查找" << endl;
	cout << "2——根据职工姓名查找" << endl;
	cout << "请选择要查找的方式：" << endl;

	LL_int ret = -1;
	do
	{
		cin >> Select;
		switch (Select)
		{
		case 1:
			cout << "请输入要查找的职工的编号：";
			cin >> Id;

			if ((ret = EmpExist(Id)) != -1)
			{
				cout << "查找成功，信息如下：" << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
			else
			{
				cout << "未查找到该编号的职工" << endl;
			}
			break;

		case 2:
			cout << "请输入要查找的职工的姓名：";
			cin >> Name;

			for (ULL_int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == Name)
				{
					ret = i;
					break;
				}
			}

			if (ret == -1)
			{
				cout << "未查找到该姓名的职工" << endl;
			}
			else
			{
				cout << "查找成功，信息如下：" << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
			break;

		default:
			cout << "输入有误请重新输入：";
			break;
		}
	} while (Select != 1 && Select != 2);

}

/*===排序职工信息===*/
void WorkerManager::SortEmp(void)
{
	if (this->m_EmpNum == 0 && this->FileEmplyFlag == true)
	{
		cout << "该系统暂无职工信息，请先添加" << endl;
		return;
	}
	
	int select;
	cout << "1——按职工编号进行升序排序" << endl;
	cout << "2——按职工编号进行降序排序" << endl;
	cout << "请选择要排序的方法：";
	do
	{
		cin >> select;
		if (select == 1 || select == 2)
		{
			break;
		}
		else
		{
			cout << "输入有误请重新输入：";
		}
	} while (true);
	
	cout << "正在排序..." << endl;
	ULL_int swap;
	for (ULL_int i = 0; i < this->m_EmpNum; i++)
	{
		swap = i;
		for (ULL_int j = i; j < this->m_EmpNum; j++)
		{
			if (select == 1)//升序
			{
				if (this->m_EmpArray[swap]->m_Id > this->m_EmpArray[j]->m_Id)
				{
					swap = j;
				}
			}
			else if (select == 2)//降序
			{
				if (this->m_EmpArray[swap]->m_Id < this->m_EmpArray[j]->m_Id)
				{
					swap = j;
				}
			}
		}
		if (swap != i)
		{
			Worker* temp = this->m_EmpArray[i];
			this->m_EmpArray[i] = this->m_EmpArray[swap];
			this->m_EmpArray[swap] = temp;
		}
	}
	cout << "排序完成" << endl;
	cout << "正在保存到文件中..." << endl;
	this->SaveInFile();
	cout << "已保存到文件中" << endl;
}

/*===清空职工信息===*/
void WorkerManager::CleanFile(void)
{
	if (this->m_EmpNum == 0 && this->FileEmplyFlag == true)
	{
		cout << "该系统暂无职工信息，请先添加" << endl;
		return;
	}

	int select;
	cout << "确认要清空？" << endl;
	cout << "1——确认" << endl;
	cout << "2——返回" << endl;
	do
	{
		cin >> select;
		if (select == 1)
		{
			break;
		}
		if (select == 2)
		{
			return;
		}
		cout << "输入有误请重新输入：";
	} while (true);

	ofstream ofs(FileName, ios::trunc);
	ofs.close();

	if (this->m_EmpArray != NULL)
	{
		for (ULL_int i = 0; i < this->m_EmpNum; i++)
		{
			delete this->m_EmpArray[i];
		}
		//delete this->m_EmpArray[this->m_EmpNum + 1];//初始化时候多开辟了一个
		this->m_EmpNum = 0;
		this->FileEmplyFlag = true;
		this->m_EmpArray = NULL;
	}
	cout << "文件已清空" << endl;
}

/*===保存信息到文件中===*/
void WorkerManager::SaveInFile(void)
{
	ofstream ofs(FileName, ios::out);
	for (ULL_int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DepartmentId << endl;
	}
	ofs.close();
}

/*===获取文件中职工人数===*/
ULL_int WorkerManager::GetEmpNum(void)
{
	ifstream ifs(FileName, ios::in);

	ULL_int Id;
	string Name;
	ULL_int DepartmentId;
	ULL_int num=0;
	while (ifs >> Id && ifs >> Name && ifs >> DepartmentId)
	{
		num++;
	}
	ifs.close();
	return num;
}

/*===初始化职工信息===*/
void WorkerManager::InitEmp(void)
{
	ifstream ifs(FileName, ios::in);
	ULL_int Id;
	string Name;
	ULL_int DepartmentId;

	ULL_int count = 0;
	ULL_int num = GetEmpNum();
	this->m_EmpNum = num;
	this->m_EmpArray = new Worker * [num + 1];
	while (ifs >> Id && ifs >> Name && ifs >> DepartmentId)
	{
		Worker* w1 = NULL;
		if (DepartmentId == 1)
		{
			w1 = new Employee(Id,Name, DepartmentId);
		}
		if (DepartmentId == 2)
		{
			w1 = new Manager(Id, Name, DepartmentId);
		}
		if (DepartmentId == 3)
		{
			w1 = new Boss(Id, Name, DepartmentId);
		}
		this->m_EmpArray[count] = w1;
		count++;
	}
	ifs.close();
}

/*===根据Id查找数据中职工是否存在===*/ //返回值：若没有找到返回 -1;若找到返回对应Id的职工数组元素数字
int WorkerManager::EmpExist(ULL_int Id)
{
	for (ULL_int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == Id)
		{
			return (int)i;
		}
	}
	return -1;
}

/*===WorkerManager析构函数===*/
WorkerManager::~WorkerManager(void)
{
}

/*===职工管理系统菜单文本===*/
void WMMenuText(const char arr[40], char mod, ULL_int len)
{
	for (ULL_int i = 0; i < len; i++)
	{
		cout << mod;
	}
	cout << arr;
	for (ULL_int i = 0; i < len; i++)
	{
		cout << mod;
	}
	cout << endl;
}
