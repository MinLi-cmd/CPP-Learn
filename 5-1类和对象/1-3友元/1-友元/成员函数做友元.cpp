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
	void visit1(void);	/*���Է���Building���е�˽�г�Ա*/
	void visit2(void);	/*���ɷ���Building���е�˽�г�Ա*/
	~GoodGay();

	Building* Build;
};

class Building
{
	/*��GoodGay�������µ�void visit1(void)������ΪBuilding�����Ԫ*/
	friend void GoodGay::visit1(void);
public:
	Building();

	string SittingRoom;//����
private:
	string BedRoom;//����

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
	cout << "GoodGay3��visit1 ���ڷ��ʣ�" << Build->SittingRoom << endl;
	cout << "GoodGay3��visit1 ���ڷ��ʣ�" << Build->BedRoom << endl;
}

void GoodGay::visit2(void)
{
	cout << "GoodGay3��visit2 ���ڷ��ʣ�" << Build->SittingRoom << endl;
}

GoodGay::~GoodGay()
{
	delete Build;
	Build = NULL;
}

Building::Building()
{
	SittingRoom = "�����Ŀ���";
	BedRoom = "˽�е�����";
}