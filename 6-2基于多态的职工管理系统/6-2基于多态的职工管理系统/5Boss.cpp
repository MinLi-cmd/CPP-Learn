#include "5Boss.h"

Boss::Boss(ULL_int Id, string Name, ULL_int DepartmentId)
{
	this->m_Id = Id;
	this->m_Name = Name;
	this->m_DepartmentId = DepartmentId;
}

void Boss::ShowInfo(void)
{
	cout << "ְ����ţ�" << this->m_Id << "\tְ��������" << this->m_Name << "\t��λ��" << this->GetDepartmentName() << "\t��λְ�𣺹���˾��������" << endl;
}

string Boss::GetDepartmentName(void)
{
	return string("�ܲ�");
}