/*
* ÈÝÆ÷Ç¶Ì×ÈÝÆ÷
*/

#include "0¸öÈËº¯Êý¿â.h"
#include <iostream>
#include <string>
#include <vector>

void Study_ContainerNestContainer(int a)
{
	const int x = 24, y = 15;

	std::vector<std::vector<int>> fv1;

	std::vector<int> sv1[x];
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			sv1[i].push_back(j + 1 + i);
		}
		fv1.push_back(sv1[i]);
	}

	for (std::vector<std::vector<int>>::iterator fit = fv1.begin(); fit != fv1.end(); fit++)
	{
		for (std::vector<int>::iterator sit = (*fit).begin(); sit != (*fit).end(); sit++)
		{
			std::cout << (*sit) << "\t";
		}
		std::cout << std::endl;
	}
}
