/*
����������
	��Person�Զ����������ͽ�������Person�����������������䡢���
�������
	������������������������ͬ������߽��н���
	�ܽ᣺
		�����Զ����������ͣ�����Ҫָ��������򣬷����������֪����ν�������
		�߼�����ֻ��������������ٽ���һ���߼������ƶ�����������
*/

#include <iostream>
#include <string>
#include <list>

class Person
{
public:
	Person():_name(""),_age(0),_height(0) {}
	Person(std::string name,int age,int height):_name(name),_age(age),_height(height){}

	std::string getName(void)const { return this->_name; }
	void setName(const std::string& name) { this->_name = name; }

	int getAge(void)const { return this->_age; }
	void setAge(const int& age) { this->_age = age; }

	int getHeight(void)const { return this->_height; }
	void setHeight(const int& _hight) { this->_height = _height; }

private:
	std::string _name;
	int _age;
	int _height;
};

void PrintList71(const std::list<Person>& _l)
{
	for (std::list<Person>::const_iterator it = _l.begin(); it != _l.end(); it++)
	{
		std::cout << "����Ϊ��" << (*it).getName() << "\t����Ϊ��" << (*it).getAge() << "\t���Ϊ��" << (*it).getHeight() << std::endl;
	}
}

bool comparePerson(const Person& p1, const Person& p2)
{
	if (p1.getAge() == p2.getAge())
	{
		return p1.getHeight() > p2.getHeight();
	}
	else
	{
		return p1.getAge() < p2.getAge();
	}

	/*return p1.getAge() > p2.getAge();//�������併��*/
	//return p1.getAge() < p2.getAge();//������������
	/*��������������� const Person& ���͵Ĳ��� p1 �� p2��������һ�� bool ���͵�ֵ���������Ϊ��
		�� p1.getAge() < p2.getAge() �������������� true������ζ�� p1 Ӧ������ p2 ǰ�档
		�� p1.getAge() < p2.getAge() ���������������� false������ζ�� p1 Ӧ������ p2 ���档*/
}

void AnLi_Sort(void)
{
	Person P[5 + 6] = { {"����",20,184},{"����",21,183}, {"����",25,186}, {"����",19,181}, {"����",18,182}, 
						{"����", 35, 175}, {"�ܲ�", 45, 180}, {"��Ȩ", 40, 170}, {"����", 25, 190}, {"�ŷ�", 35, 160}, {"����", 35, 200} };
	std::list<Person> L;
	for (int i = 0; i < sizeof(P) / sizeof(P[0]); i++)
	{
		L.push_back(P[i]);
	}

	std::cout << "����ǰ��" << std::endl;
	PrintList71(L);

	L.sort(comparePerson);

	std::cout << "�����" << std::endl;
	PrintList71(L);
}