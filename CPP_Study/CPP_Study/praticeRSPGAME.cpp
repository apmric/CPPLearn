#include <iostream>
using namespace std;

int main()
{
#pragma region 강사풀이
	srand(time(0)); // 시드 설정

	// 1 2 3
	//int value = 1 + (rand() % 3); //0 ~ 32767

	const int SCISSORS = 1;
	const int ROCK = 2;
	const int PAPER = 3;

	int wins = 0;
	int total = 0;

	while (true)
	{
		cout << "가위(1) 바위(2) 보(3) 골라주세요!" << endl;
		cout << "> ";

		if (total == 0)
		{
			cout << "현재 승률 : 없음" << endl;
		}
		else
		{
			// TODO : 확률을 구해준다.
			// (1 * 100) / 4 = 25
			int winPercentage = (wins * 100) / total;
			cout << "현재 승률 : " << winPercentage << endl;
		}

		// 컴퓨터
		int computerValue = 1 + (rand() % 3);

		// 사용자
		int input;
		cin >> input;

		if (input == SCISSORS)
		{
			switch (computerValue)
			{
			case SCISSORS:
				cout << "가위(님) vs 가위(컴퓨터) 비겼습니다!" << endl;
				break;
			case ROCK:
				cout << "가위(님) vs 바위(컴퓨터) 졌습니다!" << endl;
				total++;
				break;
			case PAPER:
				cout << "가위(님) vs 보(컴퓨터) 이겼습니다!" << endl;
				wins++;
				total++;
				break;
			}
		}
		else if (input == ROCK)
		{
			switch (computerValue)
			{
			case SCISSORS:
				cout << "바위(님) vs 가위(컴퓨터) 이겼습니다!" << endl;
				wins++;
				total++;
				break;
			case ROCK:
				cout << "바위(님) vs 바위(컴퓨터) 비겼습니다!" << endl;
				break;
			case PAPER:
				cout << "바위(님) vs 보(컴퓨터) 겼습니다!" << endl;
				total++;
				break;
			}
		}
		else if (input == PAPER)
		{
			switch (computerValue)
			{
			case SCISSORS:
				cout << "보(님) vs 가위(컴퓨터) 겼습니다!" << endl;
				total++;
				break;
			case ROCK:
				cout << "보(님) vs 바위(컴퓨터) 이겼습니다!" << endl;
				wins++;
				total++;
				break;
			case PAPER:
				cout << "보(님) vs 보(컴퓨터) 비겼습니다!" << endl;
				break;
			}
		}
		else
		{
			break;
		}
	}
#pragma endregion

#pragma region 나의풀이
	//const int SCISSORS = 1;
	//const int ROCK = 2;
	//const int PAPER = 3;
	//
	//const int WIN = 1;
	//const int LOSE = -1;
	//const int DRAW = 0;

	//int gameCnt = 0;
	//int winCnt = 0;

	//srand(time(0));

	//int resultArr[3][3]
	//{
	//	{0, 1, -1},
	//	{-1, 0, 1},
	//	{ 1, -1, 0}
	//};

	//while (true)
	//{
	//	int user, com;
	//	float winRate = ((float)winCnt / gameCnt) * 100 ;

	//	cout << "가위(1) 바위(2) 보(3) 골라주세요!" << endl;

	//	if (winCnt <= 0)
	//	{
	//		cout << "> 승률이 없습니다." << endl;
	//	}
	//	else if (winCnt > 0)
	//	{
	//		cout << "> 현재 승률 : " << winRate << endl;
	//	}

	//	cin >> user;
	//	gameCnt++;

	//	switch (user)
	//	{
	//	case SCISSORS:
	//		cout << "가위(님) vs";
	//		break;
	//	case ROCK:
	//		cout << "바위(님) vs";
	//		break;
	//	case PAPER:
	//		cout << "보(님) vs";
	//		break;
	//	default:
	//		return 0;
	//	}

	//	com = 1 + (rand() % 3);

	//	switch (com)
	//	{
	//	case SCISSORS:
	//		cout << "가위(컴퓨터)";
	//		break;
	//	case ROCK:
	//		cout << "바위(컴퓨터)";
	//		break;
	//	case PAPER:
	//		cout << "보(컴퓨터)";
	//		break;
	//	}

	//	switch (resultArr[com - 1][user - 1])
	//	{
	//	case DRAW:
	//		gameCnt--;
	//		cout << " 비겼습니다!" << endl;
	//		break;
	//	case WIN:
	//		winCnt++;
	//		cout << " 이겼습니다!" << endl;
	//		break;
	//	case LOSE:
	//		cout << " 졌습니다!" << endl;
	//		break;
	//	}
	//}
#pragma endregion
}