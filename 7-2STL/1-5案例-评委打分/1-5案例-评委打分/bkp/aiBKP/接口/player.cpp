#include "player.h"
#include <stdexcept>

// 默认构造函数
Player::Player() : _name(""), _scoresSum(0), _scoresPinhJun(0.0) {}

// 带参数的构造函数
Player::Player(const std::string& name) : _name(name), _scoresSum(0), _scoresPinhJun(0.0) {}

// 获取选手姓名
std::string Player::getName() const {
    return _name;
}

// 获取评委打分
std::deque<int> Player::getScores() const {
    return _scores;
}

// 获取总分
int Player::getScoresSum() const {
    return _scoresSum;
}

// 获取平均分
double Player::getScoresPinhJun() const {
    return _scoresPinhJun;
}

// 添加评委打分
void Player::addScore(int score) {
    _scores.push_back(score);
}

// 计算总分和平均分
void Player::calculateScores() {
    if (_scores.size() < 2) {
        throw std::runtime_error("评委打分数量不足，无法去掉最高分和最低分。");
    }
    std::sort(_scores.begin(), _scores.end());
    _scores.pop_front();
    _scores.pop_back();

    _scoresSum = 0;
    for (int score : _scores) {
        _scoresSum += score;
    }
    _scoresPinhJun = static_cast<double>(_scoresSum) / (JUDGENUM - 2);
}

// 创建选手
void CreatedPlayer(std::vector<Player>& v) {
    const std::string playName = "ABCDE";
    for (size_t i = 0; i < playName.size(); ++i) {
        std::string playerName = "选手: ";
        playerName += playName[i];
        Player player(playerName);
        v.push_back(player);
    }
}

// 评委打分
void Judging(std::vector<Player>& v) {
    for (auto& player : v) {
        for (int i = 0; i < JUDGENUM; ++i) {
            int score = rand() % 41 + 60;
            player.addScore(score);
        }
        player.calculateScores();
    }
}

// 打印选手信息
void PrintInfo(const std::vector<Player>& v) {
    for (const auto& player : v) {
        std::cout << player.getName() << std::endl;
        for (int score : player.getScores()) {
            std::cout << score << " ";
        }
        std::cout << "总分: " << player.getScoresSum() << "\t平均分: " << player.getScoresPinhJun();
        std::cout << std::endl;
    }
}

// 重载输出运算符
std::ostream& operator<< (std::ostream& os, const Player& p) {
    os << p.getName();
    return os;
}    