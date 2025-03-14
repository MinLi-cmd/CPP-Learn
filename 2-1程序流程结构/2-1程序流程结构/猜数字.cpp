/*
* 猜数字，系统随机生成一个1到100的数字，玩家进行猜测，
* 如果猜错，提示玩家数字过大或过小。
* 如果猜对则恭喜玩家游戏胜利。
*/
#include <iostream>
using namespace std;
#include <ctime>


void GuseeNumber(void);

void Game_GuseeNumber(void)
{
	char chose = 0;
	unsigned int count = 0;
	cout << "是否开始猜数字游戏（“Y”or“N”）" << endl;
	cin >> chose;
	system("cls");
	if (chose == 'Y' || chose == 'y')
	{
		GuseeNumber();
		system("cls");
		count++;
		cout << "第一轮猜数字游戏已结束是否继续玩？（“Y”or“N”）" << endl;
		cin >> chose;
		system("cls");
		while (1)
		{
			if (chose != 'Y' && chose != 'y')
			{
				break;
			}
			GuseeNumber();
			system("cls");
			count++;
			cout << "第" << count << "轮猜数字游戏已结束是否继续玩？（“Y”or“N”）" << endl;
			cin >> chose;
			system("cls");
		}
	}

	cout << "猜数字游戏已退出" << endl;
}

void GuseeNumber(void)
{
	short num1, num2 = 0, count = 0;
	srand((unsigned int)time(NULL));
	num1 = rand() % 100 + 1;//生成的是伪随机数
	cout << "现在开始猜数字游戏,若想退出本轮游戏，输入一个大于100的数字即可" << endl;
	cout << "系统已生成一个0~100的随机数字" << endl;

	while ((num2 != num1) && (num2 <= 100))
	{
		cout << "请输入你要猜的数字：";
		cin >> num2;
		if ((num2 > num1)&&(num2<101))
		{
			cout << "你猜的数字比生成的数字大" << endl;
		}
		if (num2 < num1)
		{
			cout << "你猜的数字比生成的数字小" << endl;
		}
		count++;
		if (num2 == num1)
		{
			cout << "恭喜你第" << count << "次猜对了"<< endl;
		}
	}
}