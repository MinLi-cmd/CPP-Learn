#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>

#define JUDGENUM 10

class Player
{
private:
    std::string _name;
    std::deque<int> _scores;
    int _scoresSum;
    double _scoresPinhJun;

public:
    Player();
    Player(const std::string& name);

    // 获取选手姓名
    std::string getName() const;
    // 获取评委打分
    std::deque<int> getScores() const;
    // 获取总分
    int getScoresSum() const;
    // 获取平均分
    double getScoresPinhJun() const;
    // 添加评委打分
    void addScore(int score);
    // 计算总分和平均分
    void calculateScores();
};

// 创建选手
void CreatedPlayer(std::vector<Player>& v);
// 评委打分
void Judging(std::vector<Player>& v);
// 打印选手信息
void PrintInfo(const std::vector<Player>& _v);
// 重载输出运算符
std::ostream& operator<< (std::ostream& cout, const Player& p);    