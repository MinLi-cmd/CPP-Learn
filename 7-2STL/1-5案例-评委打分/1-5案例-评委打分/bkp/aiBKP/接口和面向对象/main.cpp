#include <iostream>
#include "competition.h"

int main() {
    Competition competition;
    competition.createPlayers();
    competition.judgePlayers();
    competition.printResults();

    return 0;
}    