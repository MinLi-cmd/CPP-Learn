/*
* 1、添加联系人,
* 2、显示联系人 
* 3、删除联系人
* 4、查找联系人
* 5、修改联系人
* 6、清空联系人
*/

#include "功能.h"

void Contact_FuGai(PhoneBook* fg, int a);

void Contact_Add(PhoneBook* Add)//添加联系人
{
	system("cls");
	cout << "你已进入添加联系人界面" << endl;
	if (Add->size == PhoneBookSize)
	{
		cout << "通讯录人数已满请删几个后再试" << endl;
	}
	else
	{
		char chose = 'Y';
		while (chose == 'Y' || chose == 'y')
		{
			Add->size++;
			cout << "请输入联系人姓名：";
			cin >> Add->ContactsArray[Add->size].name;
			while (Add->ContactsArray[Add->size].sex != 1 && Add->ContactsArray[Add->size].sex != 2)
			{
				cout << "1 --- 男\n2 --- 女\n请输入联系人性别：";
				cin >> Add->ContactsArray[Add->size].sex;
				if (Add->ContactsArray[Add->size].sex != 1 && Add->ContactsArray[Add->size].sex != 2)
				{
					cout << "你输入的数字无效，请重新输入" << endl;
				}
			}
			cout << "请输入联系人年龄：";
			cin >> Add->ContactsArray[Add->size].age;
			cout << "请输入联系人电话号：";
			cin >> Add->ContactsArray[Add->size].phone;
			cout << "请输入联系人家庭住址：";
			cin >> Add->ContactsArray[Add->size].HomeAddress;
			cout << "联系人添加成功" << endl;
			cout << "已保存在第" << Add->size << "条" << endl;
			cout << "是否继续添加联系人？（Y/N）" << endl;
			cin >> chose;
			system("cls");
		}
	}
}

void Contact_Show(PhoneBook* Show)//显示联系人
{
	system("cls");
	if (Show->size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 1; i < Show->size + 1; i++)
		{
			cout << i << ".";
			cout << "姓名：" << Show->ContactsArray[i].name << "\t性别：";
			if (Show->ContactsArray[i].sex == 1)
			{
				cout << "男";
			}
			else if (Show->ContactsArray[i].sex == 2)
			{
				cout << "女";
			}
			cout << "\t年龄：" << Show->ContactsArray[i].age << "\t联系电话：" << Show->ContactsArray[i].phone << "\t家庭住址：" << Show->ContactsArray[i].HomeAddress << endl;
		}
	}
}

void Contact_Inquire(PhoneBook* eme,int* serial,string* name_Inquire)//查询联系人找到联系人并且返回一个序号数组
{
	int count=0;
	*serial = 0;
	for (int i = 1; i < eme->size + 1; i++)
	{
		if (eme->ContactsArray[i].name == *name_Inquire)
		{
			*serial = i;
			serial++;
			count++;
		}
	}
	serial -= count;
	cout << "关于 “" << *name_Inquire << "” 有" << count << "个结果" << endl;
	/*for (int i = 0; i < count; i++)
	{
		cout << "姓名：" << eme->ContactsArray[*(serial+i)].name << "\t性别：";
		if (eme->ContactsArray[*(serial + i)].sex == 1)
		{
			cout << "男";
		}
		else if (eme->ContactsArray[*(serial + i)].sex == 2)
		{
			cout << "女";
		}
		cout << "\t年龄：" << eme->ContactsArray[*(serial + i)].age << "\t联系电话：" << eme->ContactsArray[*(serial + i)].phone << "\t家庭住址：" << eme->ContactsArray[*(serial + i)].HomeAddress << endl;
	}*/
}

void Contact_Delete(PhoneBook* Del)//删除联系人
{
	int SerialArr[PhoneBookSize] = { 0 };
	string Delete_name;
	int Dcount=0;
	system("cls");
	Contact_Show(Del);
	cout << "请输入要删除的联系人：";
	cin >> Delete_name;
	Contact_Inquire(Del, SerialArr, &Delete_name);
	for (int i = 0; i < PhoneBookSize; i++)
	{
		if (SerialArr[i] == 0)
		{
			break;
		}
		for (int j = SerialArr[i] - Dcount; j < Del->size + 1 - Dcount; j++)
		{
			Contact_FuGai(Del, j);
		}
		Dcount++;
	}
	Del->size -= Dcount;
	cout << "已删除" << Dcount << "条结果" << endl;
}

void Contact_FuGai(PhoneBook* fg,int a)
{
	fg->ContactsArray[a].name = fg->ContactsArray[a + 1].name;
	fg->ContactsArray[a].sex = fg->ContactsArray[a + 1].sex;
	fg->ContactsArray[a].age = fg->ContactsArray[a + 1].age;
	fg->ContactsArray[a].phone = fg->ContactsArray[a + 1].phone;
	fg->ContactsArray[a].HomeAddress = fg->ContactsArray[a + 1].HomeAddress;
}

void test_shengcheng(PhoneBook* t)
{
	int num = 7;
	for (int i = 1; i <= num; i++)
	{
		t->size++;
		if (i == 1 || i == 3 || i == 6 || i == 7)
		{
			t->ContactsArray[i].name = "李";
			t->ContactsArray[i].age = 1;
			t->ContactsArray[i].phone = "1";
			t->ContactsArray[i].sex = 1;
			t->ContactsArray[i].HomeAddress = "1";
		}
		else
		{
			t->ContactsArray[i].name = "张";
			t->ContactsArray[i].age = 1;
			t->ContactsArray[i].phone = "1";
			t->ContactsArray[i].sex = 1;
			t->ContactsArray[i].HomeAddress = "1";
		}
	}
	cout << "已模拟生成" << num << "条联系人" << endl;
}

void Contact_Find(PhoneBook* find)
{
	int SerialArray[PhoneBookSize] = { 0 };
	string name_find;
	system("cls");
	Contact_Show(find);
	cout << "请输入你要查找的联系人：";
	cin >> name_find;
	Contact_Inquire(find, SerialArray, &name_find);
	cout << "查询结果如下：" << endl;
	for (int i = 0; i < PhoneBookSize; i++)
	{
		if (SerialArray[i] == 0)
		{
			break;
		}
		cout << "姓名：" << find->ContactsArray[SerialArray[i]].name << "\t性别：";
		if (find->ContactsArray[SerialArray[i]].sex == 1)
		{
			cout << "男";
		}
		else if (find->ContactsArray[SerialArray[i]].sex == 2)
		{
			cout << "女";
		}
		cout << "\t年龄：" << find->ContactsArray[SerialArray[i]].age << "\t联系电话：" << find->ContactsArray[SerialArray[i]].phone << "\t家庭住址：" << find->ContactsArray[SerialArray[i]].HomeAddress << endl;
	}
}

void Contact_Amend(PhoneBook* amd)
{
	system("cls");
	int chose;
	Contact_Show(amd);
	cout << "请选择要修改第几条信息：";
	cin >> chose;
	cout << "请输入联系人修改后的姓名：";
	cin >> amd->ContactsArray[chose].name;
	do
	{
		cout << "1 --- 男\n2 --- 女\n请输入联系人修改后的性别：";
		cin >> amd->ContactsArray[chose].sex;
		if (amd->ContactsArray[chose].sex != 1 && amd->ContactsArray[chose].sex != 2)
		{
			cout << "你输入的数字无效，请重新输入" << endl;
		}
	} while (amd->ContactsArray[chose].sex != 1 && amd->ContactsArray[chose].sex != 2);
	cout << "请输入联系人修改后的年龄：";
	cin >> amd->ContactsArray[chose].age;
	cout << "请输入联系人修改后的电话号：";
	cin >> amd->ContactsArray[chose].phone;
	cout << "请输入联系人修改后的家庭住址：";
	cin >> amd->ContactsArray[chose].HomeAddress;
	cout << "联系人修改成功" << endl;
}

void Contact_Empty(PhoneBook* epy)
{
	system("cls");
	for (int i = 1; i < epy->size + 1; i++)
	{
		epy->ContactsArray[i] = epy->ContactsArray[0];
	}
	epy->size = 0;
	cout << "通迅录已清空" << endl;
}