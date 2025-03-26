#pragma once
#include <iostream>
using namespace std;
#include "Point.h"

class Circle		//创建一个圆类
{
public:
	//公共权限
	void SetCenter_x(const double& x);
	void SetCenter_y(const double& y);
	double GetCenter_x(void);
	double GetCenter_y(void);
	void SetCircle_r(const double& r);
	double GetCircle_r(void);
	void ShowMessage(void);
	void CircleAndPoint(Point& p);
private:
	//私有权限
	double  Circle_r;
	Point Circle_Center;
};

double Distance_TwoPoints2(double x1, double y1, double x2, double y2);
