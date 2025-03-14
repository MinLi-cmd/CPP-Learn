#include <iostream>
using namespace std;
#include "函数库.h"

int test01_sum(int a, int b = 20, int c = 30);
void test02_zhan(int a, int);
void test03_chongzai(void);
void test03_chongzai(int a);
void test03_chongzai(int a, double b);
void test03_chongzai(double b, int a);
void test_04_chongzai_yinyong(int& a);
void test_04_chongzai_yinyong(const int& a);
void test05_chongzai_morencanshu(int a);
void test05_chongzai_morencanshu(int a, int b = 10);




/*
* 函数的默认参数
* * 如果函数参数中某个位置有了默认参数，那么从这个位置往后，从左到右都必须有默认值
* 例：int test01_sum(int a, int b = 20, int c)这句话是会报错的
* 函数声明时给定默认参数，函数定义就不可以给定默认参数
* 函数定义时给定默认参数，函数定义就不可以给定默认参数
*/

void Study_HanShu_MoRenCanShu(void)
{
	cout << test01_sum(10,50) << endl;
}

int test01_sum(int a, int b, int c)
{
	cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
	return a + b + c;
}

/*
* 函数占位
*/
void Study_HanShu_ZhanWei(void)
{
	test02_zhan(10,20);
}

void test02_zhan(int a, int)
{
	cout << "This is test02_zhan" << endl;
}

/*
* 函数重载
* 作用：函数名字可以相同，提高复用性
* 函数重载满足条件：
* 1.同一个作用域下
* 2.函数名称相同
* 3.函数参数 类型不同 或者 个数不同 或者 顺序不同
* 注意：函数的返回值不可以作为函数重载的条件
*/
void Study_HanShu_ChongZai(void)
{
	test03_chongzai();
	test03_chongzai(10);
	test03_chongzai(10,2.12);
	test03_chongzai(2.12,10);
}

void test03_chongzai(void)//全局作用域，不属于任何函数和类的范围
{
	cout << "无参test03_chongzai(void)的调用" << endl;
}
void test03_chongzai(int a)//全局作用域，不属于任何函数和类的范围
{
	cout << "有参test03_chongzai(int a)的调用!" << endl;
}

void test03_chongzai(int a, double b)//全局作用域，不属于任何函数和类的范围
{
	cout << "有参test03_chongzai(int a, double b)的调用!" << endl;
}

void test03_chongzai(double b, int a)//全局作用域，不属于任何函数和类的范围
{
	cout << "有参test03_chongzai(double b, int a)的调用!" << endl;
}

/*
* 函数重载的注意事项
* 引用作为重载条件
* 函数重载碰到函数默认类型
*/
void Study_HanShu_ChongZai_ZhuYi(void)
{
	int a = 10;
	test_04_chongzai_yinyong(a);
	test_04_chongzai_yinyong(10);
	const int b = 20;
	test_04_chongzai_yinyong(b);
}

void test_04_chongzai_yinyong(int& a)
{
	cout << "test04_chongzai_yinyong(int& a)的调用!" << endl;
}

void test_04_chongzai_yinyong(const int& a)
{
	cout << "test04_chongzai(const int& a)的调用!" << endl;
}

/*
* 函数重载遇到默认参数
*/

void Study_HanShu_ChongZai_MoRenCanShu(void)
{
	int value = 10;
	//test05_chongzai_morencanshu(value);//二义性，报错，尽量避免重载的同时设置默认参数
}

void test05_chongzai_morencanshu(int a)
{

}
void test05_chongzai_morencanshu(int a, int b = 10)
{

}
