#include <iostream>
using namespace std;

// 상수인건 알겠는데 너무 따로따로 노는 느낌?
// 하나의 세트로 관리

// 숫자를 지정 안하면 첫 값은 0부터 시작
// 그 다음 값들은 이전 값 + 1
// 0순위로 사용
enum ENUM_SRP
{
	ENUM_SCISSORS = 1,
	ENUM_ROCK,
	ENUM_PAPER
};

// #이 붙은거 -> 전처리 지시문
// #include <iostream> 이라는 파일을 찾아서 해당 내용을 그냥 복붙
// 1) 전치리(준비운동) 2) 컴파일(본운동) 3) 링크
// 잘 사용하지는 않음
#define DEFINE_SCISSORS 1;
#define DEFINE_TEST cout << "Hello World" << endl;

int main()
{
	DEFINE_TEST;
}