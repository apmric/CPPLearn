#include <iostream>
using namespace std;

// 오늘의 주제:스택프레임

// 정수를 입력(함수) 받아서, 콘솔에 출력하는 함수를 만들어보자
// input : int // output : 없음
void PrintNumber(int number)
{
	cout << "넘겨주신 숫자는 " << number << " 입니다." << endl;
}

// 두 숫자를 곱해서 결과물을 받는 함수를 만들어보자
// input : int, int // output : int

int MultiplyBy(int a, int b)
{
	int c = a * b;
	return c;
}

// F5
// F10 -> 함수 단위
// F11 -> 한 줄 단위
int main()
{
	int a = 3;
	int b = 5;
	int result = MultiplyBy(a, b);

	PrintNumber(result);

	return 0;

}