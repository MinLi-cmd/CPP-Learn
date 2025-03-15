/*
* 学习目标：掌握类模板成员函数分文件编写产生的问题以及解决问题
* 
* 问题：类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
* 
* 解决：
* 解决方法1：直接包含.cpp文件
* 解决方法2：将声明和实现写到同一个文件中，并且更改后缀名为.hpp，hpp是约定的名称，并不是强制
* 
* 总结：主流的解决方式是第二种，将类模板成员函数写到一起，并将后缀名字改为.hpp
*/
#include "0函数声明库.h"
#include "7Person.hpp"


void Study_LeiMuBanFenWeiJianBianXie(void)
{
	Person71<string, unsigned short> p("李四", 21);
	p.ShowPerson();
}
