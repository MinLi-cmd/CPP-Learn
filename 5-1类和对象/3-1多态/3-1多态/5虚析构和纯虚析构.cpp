#include "����������.h"

/*
* ��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
* �����ʽ���������е�����������Ϊ ������ ���� ��������
* 
* �������ʹ����������ԣ�
* 1.���Խ������ָ���ͷ��������
* 2.����Ҫ�о���ĺ���ʵ��
* 
* �������ʹ�����������
* 1.����Ǵ����������������ڳ����࣬�޷�ʵ��������
* 
* �ܽ᣺
* 1.�����������������������������ָ���ͷ��������
* 2.���������û�ж������ݣ����Բ�дΪ��������������
* 3.ӵ�д���������������Ҳ���ڳ�����
*/

/*=========������=========*/

/*===������(����)===*/
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


/*=========�������ʹ��������ĺ������=========*/

void Study_VirtualDestructorAndPureVirtualDestructor(void)
{
	Animal51* a1;
	a1 = new Cat51("Tom");
	a1->speak();
	delete a1;
}

/*=========����ʵ��=========*/

/*===������===*/
Animal51::Animal51(void)
{
	cout << "Animal51 Ĭ�Ϲ������" << endl;
}

Animal51::~Animal51(void)
{
	cout << "Animal51 ������������" << endl;
}

/*===è��===*/
Cat51::Cat51(string name)
{
	this->m_name = new string(name);
	cout << "Cat51 �вι������" << endl;
}

Cat51::~Cat51(void)
{
	if (this->m_name != NULL)
	{
		cout << "Cat51 ������������" << endl;
		delete this->m_name;
		this->m_name = NULL;
	}
}

void Cat51::speak(void)
{
	cout << *this->m_name << "è�ڷ�������" << endl;
}