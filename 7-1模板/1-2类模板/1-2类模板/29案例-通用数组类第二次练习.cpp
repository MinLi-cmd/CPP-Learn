#include "29MyArray.h"
#include <string>
template <class T1,class T2>
class Person92
{
public:

	Person92(){}
	Person92(T1 name, T2 age) :_name(name), _age(age) {}

	T1& GetName(void)
	{
		return _name;
	}

	T2& GetAeg(void)
	{
		return this->_age;
	}
private:
	T1 _name;
	T2 _age;
};


void Test_Print(MyArray91<int>& m)
{
	for (short i = 0; i < m.GetSize(); i++)
	{
		std::cout << m[i] << std::endl;
	}
	std::cout << "该容器容量大小为：" << m.GetCapacity() << std::endl;
	std::cout << "该容器中数据数量为：" << m.GetSize() << std::endl;

	std::cout << std::endl;
}

void Test_Print(MyArray91<Person92<std::string,int>>& m)
{
	for (short i = 0; i < m.GetSize(); i++)
	{
		std::cout << "姓名为：" << m[i].GetName() << "\t年龄为：" << m[i].GetAeg() << std::endl;
	}
	std::cout << "该容器容量大小为：" << m.GetCapacity() << std::endl;
	std::cout << "该容器中数据数量为：" << m.GetSize() << std::endl;

	std::cout << std::endl;
}

void Test_UniversalArrayClass(void)
{
	MyArray91<int> m1(6);
	for (int i = 0; i < m1.GetCapacity(); i++)
	{
		m1.PushBlock(i);
	}
	Test_Print(m1);

	MyArray91<int> m2(m1);
	m2.PopBlock();
	Test_Print(m2);

	MyArray91<int> m3(3);
	m3 = m2;
	m3.PopBlock();
	Test_Print(m3);

	MyArray91<Person92<std::string,int>> m4(6);
	Person92<std::string, int> p[5] = { {"张三",20} ,{"李四",21},{"王五",22},{"赵六",23},{"陈七",24}};
	for (short i = 0; i < sizeof(p) / sizeof(p[0]); i++)
	{
		m4.PushBlock(p[i]);
	}

	Test_Print(m4);

	return;
}
