/*
* 全局函数做友元
*/

#include <iostream>
using namespace std;
#include <string>

#define Building Building1

class Building
{
	//void GoodGays(Building& build)全局函数是 Building的好朋友 所以可以访问Building中私有成员
	friend void GoodGays(Building& build);/*友元*/
public:
	Building()
	{
		SittingRoom = "公共的客厅";
		BedRoom = "私有的卧室";
	}
	string SittingRoom;
private:
	string BedRoom;
};

void GoodGays(Building& build);

void Study_Friend_OverallFunction(void)
{
	Building b1;
	GoodGays(b1);
}

void GoodGays(Building& build)
{
	cout << "GOODGAYS 正在访问：" << build.SittingRoom << endl;
	cout << "GOODGAYS 正在访问：" << build.BedRoom << endl;
}