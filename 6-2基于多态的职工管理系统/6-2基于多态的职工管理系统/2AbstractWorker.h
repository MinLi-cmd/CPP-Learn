#pragma once

#include <iostream>
using namespace std;
#include <string>
#include "0user-typedef.h"

class Worker
{
public:
	virtual void ShowInfo(void) = 0;
	virtual string GetDepartmentName(void)= 0;
	ULL_int m_Id;
	string m_Name;
	ULL_int m_DepartmentId;
};
