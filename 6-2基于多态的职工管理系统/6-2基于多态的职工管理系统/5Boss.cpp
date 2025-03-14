#include "5Boss.h"

Boss::Boss(ULL_int Id, string Name, ULL_int DepartmentId)
{
	this->m_Id = Id;
	this->m_Name = Name;
	this->m_DepartmentId = DepartmentId;
}

void Boss::ShowInfo(void)
{
	cout << "职工编号：" << this->m_Id << "\t职工姓名：" << this->m_Name << "\t岗位：" << this->GetDepartmentName() << "\t岗位职责：管理公司所有事务" << endl;
}

string Boss::GetDepartmentName(void)
{
	return string("总裁");
}