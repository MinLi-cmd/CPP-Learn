/*
* ��ģ�����ã�
* ����һ��ͨ���࣬���еĳ�Ա �������Ϳ��Բ������ƶ�����һ�� ��������� ������
* 
* �﷨��
* template<typename T>
* ��
* 
* ���ͣ�
* template	����	��������ģ��
* typename	����	���������ķ�����һ���������ͣ�������class����
* T			����	ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ
* 
* �ܽ᣺��ģ��ͺ���ģ���﷨���ƣ�������ģ��template������࣬�����Ϊ��ģ��
*/

#include "0����������.h"

template <class NameType,class AgeType>
class Person11
{
public:
	Person11(NameType name, AgeType age)
	{
		this->name = name;
		this->age = age;
	}

	void ShowPerson()
	{
		cout << "name: " << this->name << "\n" << "age: " << this->age << endl;
	}

	NameType name;
	AgeType age;
};

void Study_LeiMuBanYuFa(void)
{
	Person11<string, int> p1("�����", 999);
	p1.ShowPerson();
}
