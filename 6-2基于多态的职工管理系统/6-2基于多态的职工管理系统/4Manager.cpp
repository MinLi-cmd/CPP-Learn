#include"4Manager.h"

Manager::Manager(ULL_int Id, string Name, ULL_int DepartmentId)
{
	this->m_Id = Id;
	this->m_Name = Name;
	this->m_DepartmentId = DepartmentId;
}

void Manager::ShowInfo(void)
{
	cout << "ְ����ţ�" << this->m_Id << "\tְ��������" << this->m_Name << "\t��λ��" << this->GetDepartmentName() << "\t��λְ������ϰ彻�������񣬲����·������Ա��" << endl;
}

string Manager::GetDepartmentName(void)
{
	return string("����");
}