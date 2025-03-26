#include "player.h"
#include <stdexcept>

Player::Player(const std::string& n) : name(n), totalScore(0), averageScore(0.0) {}

const std::string& Player::getName() const {
    return name;
}

void Player::receiveScore(int score) {
    scores.push_back(score);
}

void Player::calculateFinalScore() {
    if (scores.size() < 2) {
        throw std::runtime_error("评委打分数量不足，无法去掉最高分和最低分。");
    }
    std::sort(scores.begin(), scores.end());
    scores.pop_front();
    scores.pop_back();

    totalScore = 0;
    for (int score : scores) {
        totalScore += score;
    }
    averageScore = static_cast<double>(totalScore) / (scores.size());
}

int Player::getTotalScore() const {
    return totalScore;
}

double Player::getAverageScore() const {
    return averageScore;
}

std::ostream& operator<<(std::ostream& os, const Player& player) {
    os << player.name << " 总分: " << player.totalScore << " 平均分: " << player.averageScore;
    return os;
}    