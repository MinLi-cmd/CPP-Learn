#include "player.h"

Player::Player() {}

Player::Player(std::string name) :_name(name) {}

void CreatedPlayer(std::vector<Player>& v)
{
	std::string playName = "ABCDE";
	for (size_t i = 0; i < playName.size(); i++)
	{
		std::string tempName = "选手：";
		tempName += playName[i];
		Player p(tempName);
		v.push_back(p);
	}
}

void Judging(std::vector<Player>& v)
{
	for (std::vector<Player>::iterator vit = v.begin(); vit != v.end(); vit++)
	{
		for (int i = 0; i < JUDGENUM; i++)
		{
			int _score = rand() % 41 + 60;
			(*vit)._scores.push_back(_score);
		}
		std::sort((*vit)._scores.begin(), vit->_scores.end());
		vit->_scores.pop_front();
		vit->_scores.pop_back();

		vit->_scoresSum = 0;
		for (std::deque<int>::const_iterator dit = vit->_scores.begin(); dit != vit->_scores.end(); dit++)
		{
			vit->_scoresSum += (*dit);
		}
		vit->_scoresPinhJun = (double)vit->_scoresSum / (JUDGENUM - 2);
	}
}

void PrintInfo(const std::vector<Player>& _v)
{
	for (std::vector<Player>::const_iterator vit = _v.begin(); vit != _v.end(); vit++)
	{
		std::cout << (*vit)._name << std::endl;
		for (std::deque<int>::const_iterator dit = (*vit)._scores.begin(); dit != (*vit)._scores.end(); dit++)
		{
			std::cout << (*dit) << " ";
		}
		std::cout << "总分：" << vit->_scoresSum << "\t平均分：" << vit->_scoresPinhJun;
		std::cout << std::endl;
	}
}



std::ostream& operator<< (std::ostream& cout, const Player& p)
{
	std::cout << p._name;
	return cout;
}
