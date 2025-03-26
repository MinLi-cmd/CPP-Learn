#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>

class Player {
private:
    std::string name;
    std::deque<int> scores;
    int totalScore;
    double averageScore;

public:
    Player(const std::string& n = "");
    const std::string& getName() const;
    void receiveScore(int score);
    void calculateFinalScore();
    int getTotalScore() const;
    double getAverageScore() const;
    friend std::ostream& operator<<(std::ostream& os, const Player& player);
};    