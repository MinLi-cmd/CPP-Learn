/*
* ȫ�ֺ�������Ԫ
*/

#include <iostream>
using namespace std;
#include <string>

#define Building Building1

class Building
{
	//void GoodGays(Building& build)ȫ�ֺ����� Building�ĺ����� ���Կ��Է���Building��˽�г�Ա
	friend void GoodGays(Building& build);/*��Ԫ*/
public:
	Building()
	{
		SittingRoom = "�����Ŀ���";
		BedRoom = "˽�е�����";
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
	cout << "GOODGAYS ���ڷ��ʣ�" << build.SittingRoom << endl;
	cout << "GOODGAYS ���ڷ��ʣ�" << build.BedRoom << endl;
}