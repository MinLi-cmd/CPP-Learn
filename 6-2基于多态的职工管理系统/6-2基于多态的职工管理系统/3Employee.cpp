#include "3Employee.h"

Employee::Employee(ULL_int Id, string Name, ULL_int DeportmentId)
{
	this->m_Id = Id;
	this->m_Name = Name;
	this->m_DepartmentId = DeportmentId;
}

void Employee::ShowInfo(void)
{
	cout << "ְ����ţ�" << this->m_Id << "\tְ��������" << this->m_Name << "\t��λ��" << this->GetDepartmentName() << "\t��λְ����ɾ�����������" << endl;
}

string Employee::GetDepartmentName(void)
{
	return string("Ա��");
}
