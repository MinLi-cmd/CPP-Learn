#include "����������.h"

/*
* ����������
* 1.������Ҫ��ɲ���ΪCPU�����ڼ��㣩���Կ���������ʾ�����ڴ��������ڴ洢��
* 2.��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel���̺�Lenovo����
* �����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
* ����ʱ��װ��̨��ͬ�ĵ��Խ��й���
*/

/*====================================������====================================*/
/*=========������=========*/
class AbstractCPU61
{
public:
	virtual void Calculator(void) = 0;//����
};

class AbstractVideoCard61
{
public:
	virtual void Display(void) = 0;//��ʾ
};

class AbstractMemoryBank61
{
public:
	virtual void Storage(void) = 0;//�洢
};

/*=========Intel��=========*/
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

/*=========Lenovo��=========*/
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

/*=========������=========*/
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


/*/*====================================����-������װ�ĺ������/*====================================*/
void CuttingLine(char line, ULL_int count);
void Show(void);
void Study_AnLi_AssembleComputer(void)
{
	Computer61* c1 = new Computer61(new IntelCPU61, new IntelVideoCard61, new IntelMemoryBank61);
	Computer61* c2 = new Computer61(new LenovoCPU61, new LenovoVideoCard61, new LenovoMemoryBank61);
	Computer61* c3 = new Computer61(new IntelCPU61, new LenovoVideoCard61, new IntelMemoryBank61);
	CuttingLine('=', 30);
	cout << "��һ̨���Կ�ʼ����" << endl;
	CuttingLine('-', 30);
	c1->work();
	Show();
	delete c1;

	CuttingLine('=', 30);
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	CuttingLine('-', 30);
	c2->work();
	Show();
	delete c2;

	CuttingLine('=', 30);
	cout << "����̨���Կ�ʼ����" << endl;
	CuttingLine('-', 30);
	c3->work();
	Show();
	delete c3;
}

/*/*====================================����ʵ��/*====================================*/

/*=========Intel�ຯ��=========*/
void IntelCPU61::Calculator(void)
{
	cout << "Intel���� CPU��������" << endl;
}

void IntelVideoCard61::Display(void)
{
	cout << "Intel���� �Կ���������" << endl;
}

void IntelMemoryBank61::Storage(void)
{
	cout << "Intel���� �ڴ�����������" << endl;
}

/*=========Lenovo�ຯ��=========*/
void LenovoCPU61::Calculator(void)
{
	cout << "Lenovo���� CPU��������" << endl;
}

void LenovoVideoCard61::Display(void)
{
	cout << "Lenovo���� �Կ���������" << endl;
}

void LenovoMemoryBank61::Storage(void)
{
	cout << "Lenovo���� �ڴ�����������" << endl;
}

/*=========�����ຯ��=========*/
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
		cout << "������m_CPU�����ڴ�" << endl;
	}
	if (this->m_VideoCard != NULL)
	{
		delete this->m_VideoCard;
		this->m_VideoCard = NULL;
		cout << "������m_VideoCard�����ڴ�" << endl;
	}
	if (this->m_MemoryBank)
	{
		delete this->m_MemoryBank;
		this->m_MemoryBank = NULL;
		cout << "������m_MemoryBank�����ڴ�" << endl;
	}
}

/*=========��������=========*/
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
	cout << "���н��� ��������ڴ�" << endl;
	CuttingLine('+', 30);
}