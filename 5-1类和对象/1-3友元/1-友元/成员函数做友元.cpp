#include <iostream>
using namespace std;
#include <string>

#define GoodGay GoodGay3
#define Building Building3

class Building;

class GoodGay
{
public:
	GoodGay();
	void visit1(void);	/*可以访问Building类中的私有成员*/
	void visit2(void);	/*不可访问Building类中的私有成员*/
	~GoodGay();

	Building* Build;
};

class Building
{
	/*将GoodGay作用域下的void visit1(void)函数做为Building类的友元*/
	friend void GoodGay::visit1(void);
public:
	Building();

	string SittingRoom;//客厅
private:
	string BedRoom;//卧室

};

void Study_Friend_MemberFunction(void)
{
	GoodGay g1;
	g1.visit1();
	cout << endl;
	g1.visit2();
	cout << endl;
}

GoodGay::GoodGay()
{
	Build = new Building;
}

void GoodGay::visit1(void)
{
	cout << "GoodGay3的visit1 正在访问：" << Build->SittingRoom << endl;
	cout << "GoodGay3的visit1 正在访问：" << Build->BedRoom << endl;
}

void GoodGay::visit2(void)
{
	cout << "GoodGay3的visit2 正在访问：" << Build->SittingRoom << endl;
}

GoodGay::~GoodGay()
{
	delete Build;
	Build = NULL;
}

Building::Building()
{
	SittingRoom = "公共的客厅";
	BedRoom = "私有的卧室";
}