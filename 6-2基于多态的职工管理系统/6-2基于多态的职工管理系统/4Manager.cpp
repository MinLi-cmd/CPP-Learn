#include"4Manager.h"

Manager::Manager(ULL_int Id, string Name, ULL_int DepartmentId)
{
	this->m_Id = Id;
	this->m_Name = Name;
	this->m_DepartmentId = DepartmentId;
}

void Manager::ShowInfo(void)
{
	cout << "职工编号：" << this->m_Id << "\t职工姓名：" << this->m_Name << "\t岗位：" << this->GetDepartmentName() << "\t岗位职责：完成老板交给的任务，并且下发任务给员工" << endl;
}

string Manager::GetDepartmentName(void)
{
	return string("经理");
}