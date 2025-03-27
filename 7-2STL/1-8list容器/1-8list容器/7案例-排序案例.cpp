/*
案例描述：
	将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
排序规则：
	按照年龄进行升序，如果年龄相同按照身高进行降序
	总结：
		对于自定义数据类型，必须要指定排序规则，否则编译器不知道如何进行排序
		高级排序只是在排序规则上再进行一次逻辑规则制定，并不复杂
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
		std::cout << "姓名为：" << (*it).getName() << "\t年龄为：" << (*it).getAge() << "\t身高为：" << (*it).getHeight() << std::endl;
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

	/*return p1.getAge() > p2.getAge();//按照年龄降序*/
	//return p1.getAge() < p2.getAge();//按照年龄升序
	/*这个函数接收两个 const Person& 类型的参数 p1 和 p2，并返回一个 bool 类型的值。具体规则为：
		若 p1.getAge() < p2.getAge() 成立，函数返回 true，这意味着 p1 应该排在 p2 前面。
		若 p1.getAge() < p2.getAge() 不成立，函数返回 false，这意味着 p1 应该排在 p2 后面。*/
}

void AnLi_Sort(void)
{
	Person P[5 + 6] = { {"张三",20,184},{"李四",21,183}, {"王五",25,186}, {"陈七",19,181}, {"刘八",18,182}, 
						{"刘备", 35, 175}, {"曹操", 45, 180}, {"孙权", 40, 170}, {"赵云", 25, 190}, {"张飞", 35, 160}, {"关羽", 35, 200} };
	std::list<Person> L;
	for (int i = 0; i < sizeof(P) / sizeof(P[0]); i++)
	{
		L.push_back(P[i]);
	}

	std::cout << "排序前：" << std::endl;
	PrintList71(L);

	L.sort(comparePerson);

	std::cout << "排序后：" << std::endl;
	PrintList71(L);
}