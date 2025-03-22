#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Person21
{
public:

	Person21() {}
	Person21(std::string name, int age) :_name(name), _age(age) {}
	

	std::string GetName(void) const
	{
		return this->_name;
	}

	int GetAge(void) const
	{
		return this->_age;
	}
private:
	std::string _name;
	int _age;
};

void PersonPrint(Person21* p)
{
	std::cout << "姓名为：" << p->GetName() << "\t年龄为：" << p->GetAge() << std::endl;
}

void test21(void)
{
	Person21 pArr[5] = { {"张三",20},{"李四",21},{"王五",22},{"赵六",23},{"陈七",24} };
	std::vector<Person21> v1;

	for (uint8_t i = 0; i < sizeof(pArr) / sizeof(pArr[0]); i++)
	{
		v1.push_back(pArr[i]);
	}

	//for (const auto& personPtr : v1)
	/*{
		std::cout << "姓名为：" << personPtr->GetName() << "\t年龄为：" << personPtr->GetAge() << std::endl;
	}*/
	for (std::vector<Person21>::iterator itBegin = v1.begin(); itBegin != v1.end(); itBegin++)
	{
		std::cout << "姓名为：" << itBegin->GetName() << "\t年龄为：" << (*itBegin).GetAge() << std::endl;
	}
}
void test22(void)
{
	Person21 pArr[5] = { {"张三",20},{"李四",21},{"王五",22},{"赵六",23},{"陈七",24} };

	std::vector<Person21*> v1;

	for (uint8_t i = 0; i < sizeof(pArr) / sizeof(pArr[0]); i++)
	{
		v1.push_back(pArr+i);
	}
	for (std::vector<Person21*>::iterator itBegin = v1.begin(); itBegin != v1.end(); itBegin++)
	{
		std::cout << "姓名为：" << (*itBegin)->GetName() << "\t年龄为：" << (*(*itBegin)).GetAge() << std::endl;
	}
}

void test23(void)
{
	Person21 pArr[5] = { {"张三",20},{"李四",21},{"王五",22},{"赵六",23},{"陈七",24} };

	std::vector<Person21*> v1;

	for (uint8_t i = 0; i < sizeof(pArr) / sizeof(pArr[0]); i++)
	{
		v1.push_back(pArr + i);
	}
	for_each(v1.begin(), v1.end(), PersonPrint);
}

void Study_VectorCunFangZiDingYiDataType(void)
{
	test23();
}