#include "函数声明库.h"

/*
* 多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
* 解决方式：将父类中的析构函数改为 虚析构 或者 纯虚析构
* 
* 虚析构和纯虚析构共性：
* 1.可以解决父类指针释放子类对象
* 2.都需要有具体的函数实现
* 
* 虚析构和纯虚析构区别：
* 1.如果是纯虚析构，该类属于抽象类，无法实例化对象
* 
* 总结：
* 1.虚析构或纯虚析构就是用来解决父类指针释放子类对象
* 2.如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
* 3.拥有纯虚析构函数的类也属于抽象类
*/

/*=========类声明=========*/

/*===动物类(基类)===*/
class Animal51
{
public:
	Animal51(void);
	virtual void speak(void) = 0;
	virtual ~Animal51(void) = 0;
};

class Cat51 :public Animal51
{
public:
	Cat51(string name);
	void speak(void);
	~Cat51(void);
	string* m_name;
};


/*=========虚析构和纯虚析构的函数入口=========*/

void Study_VirtualDestructorAndPureVirtualDestructor(void)
{
	Animal51* a1;
	a1 = new Cat51("Tom");
	a1->speak();
	delete a1;
}

/*=========函数实现=========*/

/*===动物类===*/
Animal51::Animal51(void)
{
	cout << "Animal51 默认构造调用" << endl;
}

Animal51::~Animal51(void)
{
	cout << "Animal51 析构函数调用" << endl;
}

/*===猫类===*/
Cat51::Cat51(string name)
{
	this->m_name = new string(name);
	cout << "Cat51 有参构造调用" << endl;
}

Cat51::~Cat51(void)
{
	if (this->m_name != NULL)
	{
		cout << "Cat51 析构函数调用" << endl;
		delete this->m_name;
		this->m_name = NULL;
	}
}

void Cat51::speak(void)
{
	cout << *this->m_name << "猫在发出叫声" << endl;
}