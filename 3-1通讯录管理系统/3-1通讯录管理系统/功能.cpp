/*
* 1�������ϵ��,
* 2����ʾ��ϵ�� 
* 3��ɾ����ϵ��
* 4��������ϵ��
* 5���޸���ϵ��
* 6�������ϵ��
*/

#include "����.h"

void Contact_FuGai(PhoneBook* fg, int a);

void Contact_Add(PhoneBook* Add)//�����ϵ��
{
	system("cls");
	cout << "���ѽ��������ϵ�˽���" << endl;
	if (Add->size == PhoneBookSize)
	{
		cout << "ͨѶ¼����������ɾ����������" << endl;
	}
	else
	{
		char chose = 'Y';
		while (chose == 'Y' || chose == 'y')
		{
			Add->size++;
			cout << "��������ϵ��������";
			cin >> Add->ContactsArray[Add->size].name;
			while (Add->ContactsArray[Add->size].sex != 1 && Add->ContactsArray[Add->size].sex != 2)
			{
				cout << "1 --- ��\n2 --- Ů\n��������ϵ���Ա�";
				cin >> Add->ContactsArray[Add->size].sex;
				if (Add->ContactsArray[Add->size].sex != 1 && Add->ContactsArray[Add->size].sex != 2)
				{
					cout << "�������������Ч������������" << endl;
				}
			}
			cout << "��������ϵ�����䣺";
			cin >> Add->ContactsArray[Add->size].age;
			cout << "��������ϵ�˵绰�ţ�";
			cin >> Add->ContactsArray[Add->size].phone;
			cout << "��������ϵ�˼�ͥסַ��";
			cin >> Add->ContactsArray[Add->size].HomeAddress;
			cout << "��ϵ����ӳɹ�" << endl;
			cout << "�ѱ����ڵ�" << Add->size << "��" << endl;
			cout << "�Ƿ���������ϵ�ˣ���Y/N��" << endl;
			cin >> chose;
			system("cls");
		}
	}
}

void Contact_Show(PhoneBook* Show)//��ʾ��ϵ��
{
	system("cls");
	if (Show->size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 1; i < Show->size + 1; i++)
		{
			cout << i << ".";
			cout << "������" << Show->ContactsArray[i].name << "\t�Ա�";
			if (Show->ContactsArray[i].sex == 1)
			{
				cout << "��";
			}
			else if (Show->ContactsArray[i].sex == 2)
			{
				cout << "Ů";
			}
			cout << "\t���䣺" << Show->ContactsArray[i].age << "\t��ϵ�绰��" << Show->ContactsArray[i].phone << "\t��ͥסַ��" << Show->ContactsArray[i].HomeAddress << endl;
		}
	}
}

void Contact_Inquire(PhoneBook* eme,int* serial,string* name_Inquire)//��ѯ��ϵ���ҵ���ϵ�˲��ҷ���һ���������
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
	cout << "���� ��" << *name_Inquire << "�� ��" << count << "�����" << endl;
	/*for (int i = 0; i < count; i++)
	{
		cout << "������" << eme->ContactsArray[*(serial+i)].name << "\t�Ա�";
		if (eme->ContactsArray[*(serial + i)].sex == 1)
		{
			cout << "��";
		}
		else if (eme->ContactsArray[*(serial + i)].sex == 2)
		{
			cout << "Ů";
		}
		cout << "\t���䣺" << eme->ContactsArray[*(serial + i)].age << "\t��ϵ�绰��" << eme->ContactsArray[*(serial + i)].phone << "\t��ͥסַ��" << eme->ContactsArray[*(serial + i)].HomeAddress << endl;
	}*/
}

void Contact_Delete(PhoneBook* Del)//ɾ����ϵ��
{
	int SerialArr[PhoneBookSize] = { 0 };
	string Delete_name;
	int Dcount=0;
	system("cls");
	Contact_Show(Del);
	cout << "������Ҫɾ������ϵ�ˣ�";
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
	cout << "��ɾ��" << Dcount << "�����" << endl;
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
			t->ContactsArray[i].name = "��";
			t->ContactsArray[i].age = 1;
			t->ContactsArray[i].phone = "1";
			t->ContactsArray[i].sex = 1;
			t->ContactsArray[i].HomeAddress = "1";
		}
		else
		{
			t->ContactsArray[i].name = "��";
			t->ContactsArray[i].age = 1;
			t->ContactsArray[i].phone = "1";
			t->ContactsArray[i].sex = 1;
			t->ContactsArray[i].HomeAddress = "1";
		}
	}
	cout << "��ģ������" << num << "����ϵ��" << endl;
}

void Contact_Find(PhoneBook* find)
{
	int SerialArray[PhoneBookSize] = { 0 };
	string name_find;
	system("cls");
	Contact_Show(find);
	cout << "��������Ҫ���ҵ���ϵ�ˣ�";
	cin >> name_find;
	Contact_Inquire(find, SerialArray, &name_find);
	cout << "��ѯ������£�" << endl;
	for (int i = 0; i < PhoneBookSize; i++)
	{
		if (SerialArray[i] == 0)
		{
			break;
		}
		cout << "������" << find->ContactsArray[SerialArray[i]].name << "\t�Ա�";
		if (find->ContactsArray[SerialArray[i]].sex == 1)
		{
			cout << "��";
		}
		else if (find->ContactsArray[SerialArray[i]].sex == 2)
		{
			cout << "Ů";
		}
		cout << "\t���䣺" << find->ContactsArray[SerialArray[i]].age << "\t��ϵ�绰��" << find->ContactsArray[SerialArray[i]].phone << "\t��ͥסַ��" << find->ContactsArray[SerialArray[i]].HomeAddress << endl;
	}
}

void Contact_Amend(PhoneBook* amd)
{
	system("cls");
	int chose;
	Contact_Show(amd);
	cout << "��ѡ��Ҫ�޸ĵڼ�����Ϣ��";
	cin >> chose;
	cout << "��������ϵ���޸ĺ��������";
	cin >> amd->ContactsArray[chose].name;
	do
	{
		cout << "1 --- ��\n2 --- Ů\n��������ϵ���޸ĺ���Ա�";
		cin >> amd->ContactsArray[chose].sex;
		if (amd->ContactsArray[chose].sex != 1 && amd->ContactsArray[chose].sex != 2)
		{
			cout << "�������������Ч������������" << endl;
		}
	} while (amd->ContactsArray[chose].sex != 1 && amd->ContactsArray[chose].sex != 2);
	cout << "��������ϵ���޸ĺ�����䣺";
	cin >> amd->ContactsArray[chose].age;
	cout << "��������ϵ���޸ĺ�ĵ绰�ţ�";
	cin >> amd->ContactsArray[chose].phone;
	cout << "��������ϵ���޸ĺ�ļ�ͥסַ��";
	cin >> amd->ContactsArray[chose].HomeAddress;
	cout << "��ϵ���޸ĳɹ�" << endl;
}

void Contact_Empty(PhoneBook* epy)
{
	system("cls");
	for (int i = 1; i < epy->size + 1; i++)
	{
		epy->ContactsArray[i] = epy->ContactsArray[0];
	}
	epy->size = 0;
	cout << "ͨѸ¼�����" << endl;
}