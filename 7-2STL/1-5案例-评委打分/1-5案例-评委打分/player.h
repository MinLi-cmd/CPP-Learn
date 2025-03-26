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

//����ѡ��
void CreatedPlayer(std::vector<Player>& v);

//��ί���
void Judging(std::vector<Player>& v);

//��ӡѡ����Ϣ
void PrintInfo(const std::vector<Player>& _v);

//�������������
std::ostream& operator<< (std::ostream& cout, const Player& p);