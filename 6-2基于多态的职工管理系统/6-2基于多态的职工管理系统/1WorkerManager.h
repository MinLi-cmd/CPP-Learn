#pragma once

#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include "0user-typedef.h"
#include "3Employee.h"
#include "4Manager.h"
#include "5Boss.h"

/*==============================类声明==============================*/
class WorkerManager
{
public:
	WorkerManager(void);		//构造函数

	void Menu_Show(void);		//菜单显示
	void ExitSystem(void);		//退出系统
	void AddEmp(void);			//添加职工
	void ShowEmp(void);			//显示职工
	void DeleteEmp(void);		//删除职工
	void AmendEmp(void);		//修改职工
	void FindEmp(void);			//查找职工
	void SortEmp(void);			//排序职工
	void CleanFile(void);		//清空职工

	void SaveInFile(void);		//保存信息到文件中
	ULL_int GetEmpNum(void);	//获取文件中员工人数
	void InitEmp(void);			//初始化职工信息
	int EmpExist(ULL_int Id);	//根据Id查找职工是否存在

	~WorkerManager(void);		//析构函数

	ULL_int m_EmpNum;			//职工人数
	Worker** m_EmpArray;		//职工数组 二级指针
	bool FileEmplyFlag;			//文件为空标志位 true:文件为空 false
};

/*==============================其他函数声明==============================*/
void WMMenuText(const char arr[40], char mod, ULL_int len);//职工管理系统菜单显示的 文字 打印
