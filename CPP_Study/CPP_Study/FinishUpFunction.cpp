#include <iostream>
using namespace std;

// 오늘의 주제 : 함수 마무리

// 오버로딩 (중복 정의 : 함수 이름의 재사용)
// - 매개변수 갯수가 들거나
// - 매개변수 타입이 다르거나 (순서가 다른걸 포함)
// - 반환 형식으로만 구분되는 함수는 오버로딩 불가능
int Add(int a, int b)
{
	int result = a + b;
	return result;
}

int Add(int a)
{
	int result = a + 1;
	return result;
}

// 불가능
//int Add(int a, int b = 0)
//{
//	int result = a + b;
//	return result;
//}

float Add(float a, float b)
{
	float result = a + b;
	return result;
}

// 기본 인자값
void SetPlayerInfo(int hp, int mp, int attack, int gulidid = 0, int castleid = 0)
{

}

// 스택 오버플로우
int Factorial(int n)
{
	if (n <= 1)
		return 1;

	return n * Factorial(n - 1);
}

int main()
{
	//float result = Add(1.5f, 2.1f);
	//cout << result << endl;

	//SetPlayerInfo(100, 40, 10);

	//int result = Factorial(1000000); -> 스택 오버플로우
	int result = Factorial(5);
	cout << result << endl;

	// 팩토리얼
	// 5! = 5 * 4!
	// 4! = 4 * 3 * 2 * 1
	// n! = n * (n-1)!;

	// 1! = 1

	return 0;
}