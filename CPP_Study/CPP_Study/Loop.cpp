#include <iostream>
using namespace std;

// 오늘의 주제 : 반복문

int main()
{
	// while - 동안에
	// if-else 광장히 유용하다
	// 하지만 한 번만 실행하는게 아니라, 특정 조건까지 계속 반복해야 하는 상황
	// ex) 게임을 끌 때까지 계속 게임을 실행해라
	// ex) 목적지에 도달할 때까지 - 계속 이동하라

	/*while (조건식)
	{
		명령문
	}*/

	//int count = 0;

	//while (count < 5)
	//{
	//	cout << "Hello World!" << endl;
	//	count++;
	//}

	/*do
	{
		명령문
	} while(조건식)*/
	
	// 적어도 한 번 실행
	/*do
	{
		cout << "Hello World!" << endl;
		count++;
	} while (count < 5);*/

	/*for (초기식; 조건식; 제어식)
	{
		명령문
	}*/

	// break, continue;

	//for (int count = 0; count < 5; count++)
	//{
	//	cout << "Hello World!" << endl;

	//	//
	//	
	//	//
	//	
	//	//
	//}

	// 루프문의 흐름 제어 break, continue

	//int round = 1;
	//int hp = 100;
	//int damage = 27;

	//// 무한 루프 : 전투 시작
	//while (true)
	//{
	//	hp -= damage;
	//	if (hp < 0)
	//		hp = 0; // 음수 체력을 0으로 보정

	//	cout << "Round " << round << "몬스터 체력 " << hp << endl;
	//	
	//	if (hp == 0)
	//	{
	//		cout << "몬스터 처치" << endl;
	//		break;
	//	}

	//	if (round == 5)
	//	{
	//		cout << "제한 라운드 종료" << endl;
	//		break;
	//	}

	//	round++;
	//}

	// 1-10 사이의 홀수만 출력하기

	for (int count = 1; count <= 10; count++)
	{
		bool isEven = ((count % 2) == 0);

		if (isEven)
			continue;

		cout << count << endl;
	}
}