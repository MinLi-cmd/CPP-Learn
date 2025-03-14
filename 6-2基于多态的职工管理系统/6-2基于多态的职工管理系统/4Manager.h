#pragma once

#include <iostream>
using namespace std;
#include <string>
#include "0user-typedef.h"
#include "2AbstractWorker.h"

class Manager :public Worker
{
public:
	Manager(ULL_int Id, string Name, ULL_int DepartmentId);
	virtual void ShowInfo(void);
	virtual string GetDepartmentName(void);
};