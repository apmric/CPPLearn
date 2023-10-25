#include <iostream>
using namespace std;

int main()
{
	// srand(time(0)); // 시드 설정

	//// 1 2 3
	// int value = 1 + (rand() % 3); //0 ~ 32767

	srand(time(0));

	int resultArr[3][3]
	{
		{0, 1, -1},
		{-1, 0, 1},
		{ 1, -1, 0}
	};

	while (true)
	{
		int user, com;

		cout << "가위(1) 바위(2) 보(3) 골라주세요!" << endl;
		cin >> user;

		switch (user)
		{
		case 1:
			cout << "가위(님) vs";
			break;
		case 2:
			cout << "바위(님) vs";
			break;
		case 3:
			cout << "보(님) vs";
			break;
		default:
			return 0;
		}

		com = 1 + (rand() % 3);

		switch (com)
		{
		case 1:
			cout << "가위(컴퓨터)";
			break;
		case 2:
			cout << "바위(컴퓨터)";
			break;
		case 3:
			cout << "보(컴퓨터)";
			break;
		}

		switch (resultArr[com - 1][user - 1])
		{
		case 0:
			cout << " 비겼습니다!" << endl;
			break;
		case 1:
			cout << " 이겼습니다!" << endl;
			break;
		case -1:
			cout << " 졌습니다!" << endl;
			break;
		}
	}
}