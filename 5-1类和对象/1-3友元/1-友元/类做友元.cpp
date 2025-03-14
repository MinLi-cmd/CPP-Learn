#include <iostream>
using namespace std;
#include <string>

#define GoodGay GoodGay2
#define Building Building2

class Building;

class GoodGay
{
public:
	GoodGay();
	void vist(void);
	Building* building;
	~GoodGay();
};

class Building
{
	/*GoodGay是本类的友元*/
	friend class GoodGay;
public:
	Building();
	string m_SittingRoom;
private:
	string m_BedRoom;
};

/*=========类做友元的函数入口=========*/

void Study_Friend_Class(void)
{
	GoodGay g1;
	g1.vist();

}

/*=========函数的实现=========*/

Building::Building()
{
	m_SittingRoom = "公共的客厅";
	m_BedRoom = "私有的卧室";
}

GoodGay::GoodGay()
{
	building = new Building;
}

GoodGay::~GoodGay()
{
	delete building;
	building = NULL;
}

void GoodGay::vist(void)
{
	cout << "GoodGay1类 正在访问：" << building->m_SittingRoom << endl;
	cout << "GoodGay1类 正在访问：" << building->m_BedRoom << endl;
}
