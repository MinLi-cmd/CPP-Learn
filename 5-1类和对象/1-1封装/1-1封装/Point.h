#pragma once
#include <iostream>
using namespace std;

class Point	
{
public:
	void SetPoint_x(const double& x);
	double GetPoint_x(void);
	void SetPoint_y(const double& y);
	double GetPoint_y(void);
	void ShowMessage(void);
private:
	double Point_x, Point_y;
};
