/*
* C++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ�����Ա
* ���ۣ��������������Ϊ�����Ա������ʱ���ȹ���������ٹ�������
* ����ʱ�����������������������
* �ȹ��������
*/

#include <iostream>
using namespace std;
#include <string>

#define Phone Phone1
#define Person Person7

/*�ֻ���*/
class Phone
{
public:
	Phone(string PhoneName)
	{
		phone_name = PhoneName;
		cout << "Phone1 ���вι��캯������" << endl;
	}
	~Phone()
	{
		cout << "Phone1 ��������������" << endl;
	}
	string phone_name;
};
/*����*/
class Person
{
public:
	Person(string PersonName, string PhoneName):person_name(PersonName),person_havephone(PhoneName)
	{
		cout << "Person7 ���вι��캯������" << endl;
	}
	~Person()
	{
		cout << "Person7 ��������������" << endl;
	}
	string person_name;
	Phone1 person_havephone;
};
void Study_Lei_DuiXiangIsChengYuan(void)
{
	Person p1("����", "IPhone15ProMAX");
	cout << p1.person_name << "�õ�" << p1.person_havephone.phone_name << endl;
}