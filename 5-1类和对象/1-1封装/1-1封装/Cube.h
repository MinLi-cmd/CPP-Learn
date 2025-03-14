#pragma once

#include <iostream>
using namespace std;

typedef unsigned long long int ULL_int;

class Cube
{
public:
	//公共权限
	void SetLength(ULL_int size);//设置立方体长度
	ULL_int GetLength(void);//获取立方体长度
	void SetWide(ULL_int size);//设置立方体宽度
	ULL_int GetWide(void);//获取立方体宽度
	void SetHigh(ULL_int size);//设置立方体高度
	ULL_int GetHigh(void);//获取立方体高度
	ULL_int GetArea(void);//获取面积
	ULL_int GetVolume(void);//获取体积
	void Compare(Cube& a);
private:
	//私有权限
	ULL_int m_side_L, m_side_W, m_side_H;
};