#pragma once
#include <iostream>
using namespace std;

#define PhoneBookSize 1000

struct contacts			//��ϵ�˽ṹ��
{
	string name;
	int sex = 0;
	int age = 0;
	string phone;
	string HomeAddress;
};

struct PhoneBook		//ͨѶ¼�ṹ��
{
	contacts  ContactsArray[PhoneBookSize];
	int size = 0;
};


void Contact_Add(PhoneBook* Add);
void Contact_Show(PhoneBook* Show);
void Contact_Delete(PhoneBook* Del);
void Contact_Find(PhoneBook* find);
void Contact_Amend(PhoneBook* amd);
void Contact_Empty(PhoneBook* epy);
void test_shengcheng(PhoneBook* t);

