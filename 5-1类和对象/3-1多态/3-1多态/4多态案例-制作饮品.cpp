#include "����������.h"

/*
* ����������
* ������Ʒ�Ĵ�������Ϊ����ˮ-����-���뱭��-���븨��
* ���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ
*/

/*=========������=========*/

/*===������Ʒ��===*/
class AbstractDrinks41
{
public:
	/*��ˮ*/
	virtual void Boil(void) = 0;

	/*����*/
	virtual void Brew(void) = 0;

	/*���뱭��*/
	virtual void PourIntoCup(void) = 0;

	/*���븨��*/
	virtual void AddIngredients(void) = 0;

	void makedrink(void);

};

/*===������===*/
class Coffee41 :public AbstractDrinks41
{
public:
	/*��ˮ*/
	virtual void Boil(void);

	/*����*/
	virtual void Brew(void);

	/*���뱭��*/
	virtual void PourIntoCup(void);

	/*���븨��*/
	virtual void AddIngredients(void);
};

/*===����===*/
class Tea41 :public AbstractDrinks41
{
public:
	/*��ˮ*/
	virtual void Boil(void);

	/*����*/
	virtual void Brew(void);

	/*���뱭��*/
	virtual void PourIntoCup(void);

	/*���븨��*/
	virtual void AddIngredients(void);
};

/*=========����-������Ʒ�ĺ������=========*/
void DoWork(AbstractDrinks41* AD);
void CuttingLine(ULL_int count, char line);
void Study_AnLi_MakeDrinks(void)
{
	ULL_int LineLength = 16;
	char LineType = '=';
	CuttingLine(LineLength, LineType);
	DoWork(new Coffee41);
	CuttingLine(LineLength, LineType);
	DoWork(new Tea41);
	CuttingLine(LineLength, LineType);
	cout << "sizeof(AbstractDrinks41) = " << sizeof(AbstractDrinks41) << endl;
	cout << "sizeof(new Coffee41) = " << sizeof(new Coffee41) << endl;
	cout << "sizeof(new Tea41) = " << sizeof(new Tea41) << endl;

}

/*=========����ʵ��=========*/

/*===������Ʒ��===*/
void AbstractDrinks41::makedrink(void)
{
	Boil();
	Brew();
	PourIntoCup();
	AddIngredients();
}

/*===�����ຯ��===*/
/*��ˮ*/
void Coffee41::Boil(void)
{
	cout << "��ũ��ɽȪ" << endl;
}

/*����*/
void Coffee41::Brew(void)
{
	cout << "���ݿ���" << endl;
}

/*���뱭��*/
void Coffee41::PourIntoCup(void)
{
	cout << "�����մɱ���" << endl;
}

/*���븨��*/
void Coffee41::AddIngredients(void)
{
	cout << "����ţ�̺ͽ���" << endl;
}

/*===���ຯ��===*/
/*��ˮ*/
void Tea41::Boil(void)
{
	cout << "���۹���" << endl;
}

/*����*/
void Tea41::Brew(void)
{
	cout << "���ݲ�Ҷ" << endl;
}

/*���뱭��*/
void Tea41::PourIntoCup(void)
{
	cout << "��������" << endl;
}

/*���븨��*/
void Tea41::AddIngredients(void)
{
	cout << "�������" << endl;
}

/*===���ຯ��===*/
void DoWork(AbstractDrinks41* AD)
{
	AD->makedrink();
	delete AD;
}

void CuttingLine(ULL_int count, char line)
{
	for (ULL_int i = 0; i < count; i++)
	{
		cout << line;
	}
	cout << endl;
}