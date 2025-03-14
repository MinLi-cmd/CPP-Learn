#include "函数声明库.h"

/*
* 案例描述：
* 1.电脑主要组成部件为CPU（用于计算），显卡（用于显示），内存条（用于存储）
* 2.将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
* 创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
* 测试时组装三台不同的电脑进行工作
*/

/*====================================类声明====================================*/
/*=========抽象类=========*/
class AbstractCPU61
{
public:
	virtual void Calculator(void) = 0;//计算
};

class AbstractVideoCard61
{
public:
	virtual void Display(void) = 0;//显示
};

class AbstractMemoryBank61
{
public:
	virtual void Storage(void) = 0;//存储
};

/*=========Intel类=========*/
class IntelCPU61 :public AbstractCPU61
{
public:
	void Calculator(void);
};

class IntelVideoCard61 :public AbstractVideoCard61
{
public:
	void Display(void);
};

class IntelMemoryBank61 :public AbstractMemoryBank61
{
public:
	void Storage(void);
};

/*=========Lenovo类=========*/
class LenovoCPU61 :public AbstractCPU61
{
public:
	void Calculator(void);
};

class LenovoVideoCard61 :public AbstractVideoCard61
{
public:
	void Display(void);
};

class LenovoMemoryBank61 :public AbstractMemoryBank61
{
public:
	void Storage(void);
};

/*=========电脑类=========*/
class Computer61
{
public:
	Computer61(AbstractCPU61* CPU, AbstractVideoCard61* VideoCard, AbstractMemoryBank61* MemoryBank);
	void work(void);
	~Computer61(void);
private:
	AbstractCPU61* m_CPU;
	AbstractVideoCard61* m_VideoCard;
	AbstractMemoryBank61* m_MemoryBank;
};


/*/*====================================案例-电脑组装的函数入口/*====================================*/
void CuttingLine(char line, ULL_int count);
void Show(void);
void Study_AnLi_AssembleComputer(void)
{
	Computer61* c1 = new Computer61(new IntelCPU61, new IntelVideoCard61, new IntelMemoryBank61);
	Computer61* c2 = new Computer61(new LenovoCPU61, new LenovoVideoCard61, new LenovoMemoryBank61);
	Computer61* c3 = new Computer61(new IntelCPU61, new LenovoVideoCard61, new IntelMemoryBank61);
	CuttingLine('=', 30);
	cout << "第一台电脑开始工作" << endl;
	CuttingLine('-', 30);
	c1->work();
	Show();
	delete c1;

	CuttingLine('=', 30);
	cout << "第二台电脑开始工作" << endl;
	CuttingLine('-', 30);
	c2->work();
	Show();
	delete c2;

	CuttingLine('=', 30);
	cout << "第三台电脑开始工作" << endl;
	CuttingLine('-', 30);
	c3->work();
	Show();
	delete c3;
}

/*/*====================================函数实现/*====================================*/

/*=========Intel类函数=========*/
void IntelCPU61::Calculator(void)
{
	cout << "Intel厂商 CPU正在运行" << endl;
}

void IntelVideoCard61::Display(void)
{
	cout << "Intel厂商 显卡正在运行" << endl;
}

void IntelMemoryBank61::Storage(void)
{
	cout << "Intel厂商 内存条正在运行" << endl;
}

/*=========Lenovo类函数=========*/
void LenovoCPU61::Calculator(void)
{
	cout << "Lenovo厂商 CPU正在运行" << endl;
}

void LenovoVideoCard61::Display(void)
{
	cout << "Lenovo厂商 显卡正在运行" << endl;
}

void LenovoMemoryBank61::Storage(void)
{
	cout << "Lenovo厂商 内存条正在运行" << endl;
}

/*=========电脑类函数=========*/
Computer61::Computer61(AbstractCPU61* CPU, AbstractVideoCard61* VideoCard, AbstractMemoryBank61* MemoryBank)
{
	this->m_CPU = CPU;
	this->m_VideoCard = VideoCard;
	this->m_MemoryBank = MemoryBank;
}

void Computer61::work(void)
{
	m_CPU->Calculator();
	m_VideoCard->Display();
	m_MemoryBank->Storage();
}

Computer61::~Computer61(void)
{
	if (this->m_CPU != NULL)
	{
		delete this->m_CPU;
		this->m_CPU = NULL;
		cout << "已清理m_CPU堆区内存" << endl;
	}
	if (this->m_VideoCard != NULL)
	{
		delete this->m_VideoCard;
		this->m_VideoCard = NULL;
		cout << "已清理m_VideoCard堆区内存" << endl;
	}
	if (this->m_MemoryBank)
	{
		delete this->m_MemoryBank;
		this->m_MemoryBank = NULL;
		cout << "已清理m_MemoryBank堆区内存" << endl;
	}
}

/*=========其他函数=========*/
void CuttingLine(char line, ULL_int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << line;
	}
	cout << endl;
}

void Show(void)
{
	CuttingLine('+', 30);
	cout << "运行结束 清理堆区内存" << endl;
	CuttingLine('+', 30);
}