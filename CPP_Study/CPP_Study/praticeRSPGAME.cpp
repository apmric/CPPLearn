#include <iostream>
using namespace std;

int main()
{
#pragma region ����Ǯ��
	srand(time(0)); // �õ� ����

	// 1 2 3
	//int value = 1 + (rand() % 3); //0 ~ 32767

	const int SCISSORS = 1;
	const int ROCK = 2;
	const int PAPER = 3;

	int wins = 0;
	int total = 0;

	while (true)
	{
		cout << "����(1) ����(2) ��(3) ����ּ���!" << endl;
		cout << "> ";

		if (total == 0)
		{
			cout << "���� �·� : ����" << endl;
		}
		else
		{
			// TODO : Ȯ���� �����ش�.
			// (1 * 100) / 4 = 25
			int winPercentage = (wins * 100) / total;
			cout << "���� �·� : " << winPercentage << endl;
		}

		// ��ǻ��
		int computerValue = 1 + (rand() % 3);

		// �����
		int input;
		cin >> input;

		if (input == SCISSORS)
		{
			switch (computerValue)
			{
			case SCISSORS:
				cout << "����(��) vs ����(��ǻ��) �����ϴ�!" << endl;
				break;
			case ROCK:
				cout << "����(��) vs ����(��ǻ��) �����ϴ�!" << endl;
				total++;
				break;
			case PAPER:
				cout << "����(��) vs ��(��ǻ��) �̰���ϴ�!" << endl;
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
				cout << "����(��) vs ����(��ǻ��) �̰���ϴ�!" << endl;
				wins++;
				total++;
				break;
			case ROCK:
				cout << "����(��) vs ����(��ǻ��) �����ϴ�!" << endl;
				break;
			case PAPER:
				cout << "����(��) vs ��(��ǻ��) ����ϴ�!" << endl;
				total++;
				break;
			}
		}
		else if (input == PAPER)
		{
			switch (computerValue)
			{
			case SCISSORS:
				cout << "��(��) vs ����(��ǻ��) ����ϴ�!" << endl;
				total++;
				break;
			case ROCK:
				cout << "��(��) vs ����(��ǻ��) �̰���ϴ�!" << endl;
				wins++;
				total++;
				break;
			case PAPER:
				cout << "��(��) vs ��(��ǻ��) �����ϴ�!" << endl;
				break;
			}
		}
		else
		{
			break;
		}
	}
#pragma endregion

#pragma region ����Ǯ��
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

	//	cout << "����(1) ����(2) ��(3) ����ּ���!" << endl;

	//	if (winCnt <= 0)
	//	{
	//		cout << "> �·��� �����ϴ�." << endl;
	//	}
	//	else if (winCnt > 0)
	//	{
	//		cout << "> ���� �·� : " << winRate << endl;
	//	}

	//	cin >> user;
	//	gameCnt++;

	//	switch (user)
	//	{
	//	case SCISSORS:
	//		cout << "����(��) vs";
	//		break;
	//	case ROCK:
	//		cout << "����(��) vs";
	//		break;
	//	case PAPER:
	//		cout << "��(��) vs";
	//		break;
	//	default:
	//		return 0;
	//	}

	//	com = 1 + (rand() % 3);

	//	switch (com)
	//	{
	//	case SCISSORS:
	//		cout << "����(��ǻ��)";
	//		break;
	//	case ROCK:
	//		cout << "����(��ǻ��)";
	//		break;
	//	case PAPER:
	//		cout << "��(��ǻ��)";
	//		break;
	//	}

	//	switch (resultArr[com - 1][user - 1])
	//	{
	//	case DRAW:
	//		gameCnt--;
	//		cout << " �����ϴ�!" << endl;
	//		break;
	//	case WIN:
	//		winCnt++;
	//		cout << " �̰���ϴ�!" << endl;
	//		break;
	//	case LOSE:
	//		cout << " �����ϴ�!" << endl;
	//		break;
	//	}
	//}
#pragma endregion
}