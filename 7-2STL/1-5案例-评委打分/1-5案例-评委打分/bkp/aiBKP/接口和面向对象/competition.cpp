#include "competition.h"
#include <cstdlib>
#include <ctime>

void Competition::createPlayers() {
    const std::string playerNames = "ABCDE";
    for (char c : playerNames) {
        std::string name = "选手: ";
        name += c;
        players.emplace_back(name);
    }
}

void Competition::judgePlayers() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (auto& player : players) {
        for (int i = 0; i < JUDGE_NUM; ++i) {
            int score = std::rand() % 41 + 60;
            player.receiveScore(score);
        }
        player.calculateFinalScore();
    }
}

void Competition::printResults() const {
    for (const auto& player : players) {
        std::cout << player << std::endl;
    }
}    