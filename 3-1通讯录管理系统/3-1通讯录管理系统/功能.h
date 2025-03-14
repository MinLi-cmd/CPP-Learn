#pragma once
#include <iostream>
using namespace std;

#define PhoneBookSize 1000

struct contacts			//联系人结构体
{
	string name;
	int sex = 0;
	int age = 0;
	string phone;
	string HomeAddress;
};

struct PhoneBook		//通讯录结构体
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

