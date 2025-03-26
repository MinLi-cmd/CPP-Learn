#pragma once
#include <vector>
#include "player.h"

class Competition {
private:
    static const int JUDGE_NUM = 10;
    std::vector<Player> players;

public:
    void createPlayers();
    void judgePlayers();
    void printResults() const;
};    