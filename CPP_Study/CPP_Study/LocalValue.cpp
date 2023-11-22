#include <iostream>
using namespace std;

// 오늘의 주제 : 지역 변수와 값 전달

// 전역 변수
// 참고) 초기화 여부, const 등 rodata, data, bss
// 지양함 실수가 많을 수 있기 때문
int globalValue = 0;

void Test()
{
	cout << "전역변수의 값은 : " << globalValue << endl;
	globalValue++;
}

void IncreaseHP(int hp)
{
	int finalHP = hp + 1;
	//hp = hp + 1;
}

// [매개변수][RET][지역변수(hp=1)] / [매개변수(hp=2)][RET][지역변수(finalHP=2)] / [매개변수][RET][지역변수]
int main()
{
	//cout << "전역변수의 값은 : " << globalValue << endl;
	//globalValue++;

	//Test();

	//// 지역 변수
	//int localValue = 1;

	//localValue++;

	int hp = 1;

	cout << "IncreaseHP 호출 전 : " << hp << endl;
	IncreaseHP(hp);
	cout << "IncreaseHP 호출 후 : " << hp << endl;

	return 0;
}