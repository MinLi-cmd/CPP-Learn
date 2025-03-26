#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>

#define JUDGENUM 10

class Player
{
public:
	Player();
	Player(std::string name);

	std::string _name;
	std::deque<int> _scores;
	int _scoresSum;
	double _scoresPinhJun;
};

//创建选手
void CreatedPlayer(std::vector<Player>& v);

//评委打分
void Judging(std::vector<Player>& v);

//打印选手信息
void PrintInfo(const std::vector<Player>& _v);

//左移运算符重载
std::ostream& operator<< (std::ostream& cout, const Player& p);