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
	/*GoodGay�Ǳ������Ԫ*/
	friend class GoodGay;
public:
	Building();
	string m_SittingRoom;
private:
	string m_BedRoom;
};

/*=========������Ԫ�ĺ������=========*/

void Study_Friend_Class(void)
{
	GoodGay g1;
	g1.vist();

}

/*=========������ʵ��=========*/

Building::Building()
{
	m_SittingRoom = "�����Ŀ���";
	m_BedRoom = "˽�е�����";
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
	cout << "GoodGay1�� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "GoodGay1�� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}
