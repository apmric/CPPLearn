#include <iostream>
using namespace std;

int main()
{
	// srand(time(0)); // �õ� ����

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

		cout << "����(1) ����(2) ��(3) ����ּ���!" << endl;
		cin >> user;

		switch (user)
		{
		case 1:
			cout << "����(��) vs";
			break;
		case 2:
			cout << "����(��) vs";
			break;
		case 3:
			cout << "��(��) vs";
			break;
		default:
			return 0;
		}

		com = 1 + (rand() % 3);

		switch (com)
		{
		case 1:
			cout << "����(��ǻ��)";
			break;
		case 2:
			cout << "����(��ǻ��)";
			break;
		case 3:
			cout << "��(��ǻ��)";
			break;
		}

		switch (resultArr[com - 1][user - 1])
		{
		case 0:
			cout << " �����ϴ�!" << endl;
			break;
		case 1:
			cout << " �̰���ϴ�!" << endl;
			break;
		case -1:
			cout << " �����ϴ�!" << endl;
			break;
		}
	}
}