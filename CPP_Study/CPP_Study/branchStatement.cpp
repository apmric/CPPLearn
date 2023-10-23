#include <iostream>
using namespace std;

// 오늘의 주제 : 분기문
// 데이터를 메모리에 할당하고 가공하고 방법에 대해 알아봄
// 가공한 데이터를 이용해서 무엇인가를 하고 싶다면?


int main()
{
	int hp = 100; // 몬스터HP
	int damage = 100; // 플레이어 데미지

	hp -= damage; // 피격 판정

	bool isDead = (hp <= 0); // 처치 판정

	// 몬스터가 죽었으면 경험치 추가
	// 어셈블리에서 CMP JMP

	/*if(조건)
		명령문*/

	if (isDead)
		cout << "몬스터를 처치했습니다." << endl;

}