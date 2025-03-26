#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "player.h"

int main(void)
{
    srand((unsigned int)time(NULL));

    std::vector<Player> v;

    // 创建 5 个选手
    CreatedPlayer(v);

    // 评委打分
    Judging(v);

    // 打印信息
    PrintInfo(v);

    system("pause");
    return 0;
}    