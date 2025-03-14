#include "3Employee.h"

Employee::Employee(ULL_int Id, string Name, ULL_int DeportmentId)
{
	this->m_Id = Id;
	this->m_Name = Name;
	this->m_DepartmentId = DeportmentId;
}

void Employee::ShowInfo(void)
{
	cout << "职工编号：" << this->m_Id << "\t职工姓名：" << this->m_Name << "\t岗位：" << this->GetDepartmentName() << "\t岗位职责：完成经理交给的任务" << endl;
}

string Employee::GetDepartmentName(void)
{
	return string("员工");
}
