#include "函数声明库.h"

/*
* 案例描述：
* 制作饮品的大致流程为：煮水-冲泡-倒入杯中-加入辅料
* 利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
*/

/*=========类声明=========*/

/*===抽象饮品类===*/
class AbstractDrinks41
{
public:
	/*煮水*/
	virtual void Boil(void) = 0;

	/*冲泡*/
	virtual void Brew(void) = 0;

	/*倒入杯中*/
	virtual void PourIntoCup(void) = 0;

	/*加入辅料*/
	virtual void AddIngredients(void) = 0;

	void makedrink(void);

};

/*===咖啡类===*/
class Coffee41 :public AbstractDrinks41
{
public:
	/*煮水*/
	virtual void Boil(void);

	/*冲泡*/
	virtual void Brew(void);

	/*倒入杯中*/
	virtual void PourIntoCup(void);

	/*加入辅料*/
	virtual void AddIngredients(void);
};

/*===茶类===*/
class Tea41 :public AbstractDrinks41
{
public:
	/*煮水*/
	virtual void Boil(void);

	/*冲泡*/
	virtual void Brew(void);

	/*倒入杯中*/
	virtual void PourIntoCup(void);

	/*加入辅料*/
	virtual void AddIngredients(void);
};

/*=========案例-制作饮品的函数入口=========*/
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

/*=========函数实现=========*/

/*===抽象饮品类===*/
void AbstractDrinks41::makedrink(void)
{
	Boil();
	Brew();
	PourIntoCup();
	AddIngredients();
}

/*===咖啡类函数===*/
/*煮水*/
void Coffee41::Boil(void)
{
	cout << "煮农夫山泉" << endl;
}

/*冲泡*/
void Coffee41::Brew(void)
{
	cout << "冲泡咖啡" << endl;
}

/*倒入杯中*/
void Coffee41::PourIntoCup(void)
{
	cout << "倒入陶瓷杯中" << endl;
}

/*加入辅料*/
void Coffee41::AddIngredients(void)
{
	cout << "加入牛奶和焦糖" << endl;
}

/*===茶类函数===*/
/*煮水*/
void Tea41::Boil(void)
{
	cout << "煮哇哈哈" << endl;
}

/*冲泡*/
void Tea41::Brew(void)
{
	cout << "冲泡茶叶" << endl;
}

/*倒入杯中*/
void Tea41::PourIntoCup(void)
{
	cout << "倒入茶壶中" << endl;
}

/*加入辅料*/
void Tea41::AddIngredients(void)
{
	cout << "加入枸杞" << endl;
}

/*===其余函数===*/
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